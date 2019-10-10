%% Read Data from CSV File
file = 'sysid2.xlsx';
positionData = readtable(file, 'Sheet', 'Z');
forceData = readtable(file, 'Sheet', 'Force');

forceTime = forceData.Time_CommandedForce_N_;
force = forceData.Amplitude_CommandedForce_N_;
zr_dot = forceData.Amplitude_CommandedVelocity_ms_1_;

posTime = positionData.Time_BasePlate_Road_m_;
posRoad = positionData.Amplitude_BasePlate_Road_m_;
posTire = positionData.Amplitude_MiddlePlate_VehicleTire_m_;
posVehicle = positionData.Amplitude_TopPlate_VechileBody_m_;

%% Transform into State Space Variables
% Might not be necessary, as the average hasn't strayed too far from
% the origin
posRoad = posRoad - mean(posRoad);
posTire = posTire - mean(posTire);
posVehicle = posVehicle - mean(posVehicle);

% Treat to become states space
Fpass = 10;
Ts = mean(diff(posTime));
Fc = -force;
y1 = posVehicle - posTire;
y2 = posTire - posRoad;

%% Convert to Data Object
u = [zr_dot, Fc];
y = [y1, y2];
% y = [y1_filtered, y2_filtered];
data = iddata(y, u, Ts, 'Name', file);
data.InputName = {'Road Surface Velocity'; 'Applied Force'};
data.InputUnit = {'m/s'; 'N'};
data.OutputName = {'Vehicle-Tire Position'; 'Tire-Road Position'};
data.OutputUnit = {'m'; 'm'};
data.Tstart = 0;
data.TimeUnit = 's';

%% System ID
% Initial Model Estimate
parameters = {'ks',  490;  'Ms', 2.45;  'Bs', 7.5; 
              'kus', 1250; 'Mus', 1.00; 'Bus', 5.0};
linear_model = idgrey('VehicleSuspension', parameters, 'c'); %'cd'

% Set Parameter Limits
for i = 1:6
    linear_model.Structure.Parameters(i).Minimum = 0;
end

% Perform System ID
gopt = greyestOptions('Display', 'on');
gopt.SearchOptions.MaxIterations = 50;
linear_model = greyest(data, linear_model, gopt);

%% System ID Results
fprintf('\nTesting on %s\n', file);
disp(linear_model.Report.Status);
fprintf('Reason for Stopping: %s\n',linear_model.Report.Termination.WhyStop);
disp("Parameter Estimation");
for param = linear_model.Structure.Parameters
   fprintf(' %-5s = %10.3f\n', param.Name, param.Value);
end
[A, B, C, D] = VehicleSuspension(linear_model.Structure.Parameters(1).Value, ...
    linear_model.Structure.Parameters(2).Value, ...
    linear_model.Structure.Parameters(3).Value, ...
    linear_model.Structure.Parameters(4).Value, ...
    linear_model.Structure.Parameters(5).Value, ...
    linear_model.Structure.Parameters(6).Value);
display(A);
display(B);
display(C);
display(D);

% Compare model to data
figure(1);
compare(linear_model, data);

% Residuals
figure(2);
resid(linear_model, data);