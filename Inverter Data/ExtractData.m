%% Extract Data from CSV
filename = "Kp100_Ti1200_TiM90_Kf20.csv";
opts = detectImportOptions(filename,'NumHeaderLines',0);
opts.VariableNamesLine = 1; % row number which has variable names
data = readtable(filename, opts);

%% Convert to arrays
ICmd = data.ICmd_ramp_;
Iq = data.IActual;
Id = data.IdActual;

Ia = data.I1Actual;
Ib = data.I2Actual;
Ic = data.I3Actual;

%% Generate Time Data
tmax = 1000;
t = linspace(0, tmax, height(data));
fs = 1000/mean(diff(t));

%% Filter data
fpass = 50;  % Hz
Iq = lowpass(Iq, fpass, fs);
Id = lowpass(Id, fpass, fs);

%% Motor Parameters
np = 10;
Ld = 125e-6;     % H
Lq = 130e-6;     % H
J  = 0.0256;     % kg m^2
Rs = 0.35;       % Ohms
PM = 0.0393;     % Wb

%% Plot Current Data
figure(1);
plot(t, ICmd, t, Iq, t , Id, 'LineWidth', 1.2);
legend('Current Command', 'Q-Axis Current', 'D-Axis Current');
xlabel('Time (ms)');
ylabel('Current (A)');

%% Plot Three-Phase Data
figure(2);
plot(t, [Ia, Ib, Ic]);
legend('I_a(t)', 'I_b(t)', 'I_c(t)');
xlabel('Time (ms)');
ylabel('Current (A)');

%% Plot Torque Data
figure(3);
TCmd = 1.5*np*PM*ICmd;
T = 1.5*np*((Ld-Lq)*Id.*Iq + PM*Iq);
% T2 = 1.5*np*(Ld-Lq)*Id.*Iq;
plot(t, [TCmd, T], 'LineWidth', 1.4);
legend('Torque Command', 'Torque Output');
xlabel('Time (ms)');
ylabel('Torque (Nm)');