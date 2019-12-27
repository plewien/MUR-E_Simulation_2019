%% Load Data
filename = "output_TABLE_4.csv";
opts = detectImportOptions(filename,'NumHeaderLines',0);
opts.VariableNamesLine = 1; % row number which has variable names
opts.VariableUnitsLine = 2; % row number which has units specified
opts.DataLine = 3; % row number from which the actual data starts
data = readtable(filename, opts);

%% Look Up Input Sequence
step = 5;  % seconds
switch filename
    case "output_TABLE_1.csv"
        u = [200, 500, 1000];
    case "output_TABLE_4.csv"
        delay = 20;
        u = [1000, 500, 200]; % [200, 1000, 500];
    otherwise
        u = [0, 0, 0];
end

%% Specify Time Instances
initial = 10;
endtime = 30;
start = find(data.AxleSpeed, 1, 'first') - delay - initial;
finish = find(data.GraphTime>endtime, 1, 'first');
data(1:start,:) = [];  % Remove all data prior to start
data(finish:end,:) = [];  % Keep only 30 seconds of data
t = data.GraphTime - data.GraphTime(1);
sim.dt = mean(diff(t));

%% Generate Input Data
input = repelem(u, floor(step/sim.dt)); % potential issue if not integer
input = input(mod(0:(length(t)-delay)-1, numel(input)) + 1);
input = [zeros(1,delay), input];  % pad start with zeros

%% Parse Data
sim.input = [t, input.'];
sim.torque = [t, data.AxleTorque];
sim.speed = [t, data.AxleSpeed];

plot(t, [input.'/200, data.AxleTorque], 'LineWidth', 1.6);
xlabel('Time (seconds)');
legend('Torque Reference', 'Torque Output (Nm)');