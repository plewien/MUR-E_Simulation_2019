%% Simulation Time parameters

%fsw = 12e3;      % Switching frequency (Hz)
fsw = 600;       % Switching frequency (Hz)   
fc = fsw*20;    % Control loop frequency (Hz)
Tsc = 1/fc;     % Control loop sample time
fs = fc*10;     % Fundamental sample frequency (Hz)
Ts = 1/fs;      % Fundamental sample time

%% IGBT Parameters (to check)
Vf = 1.45;                % V
Vth = 0.5;                % V
Ron = 0.001;              % Ohm
Goff = 1e-5;              % S
diode_Vf = 1.55;          % V
diode_Ron = 0.001;        % Ohm
diode_Goff = 1e-5;        % S

%% Accumulator Parameters
Vnom = 48;               % V

%% PMSM Parameters
PolePairs = 10; p = PolePairs;
Ld = 125e-6;           % H
Lq = 130e-6;           % H
RotorInertia = 256e3;  % g cm^2
Rs = 0.4;  %1.844; %0.35;             % Ohms
PM = 0.08; %0.0393;            % Wb

%% Controller Parameters
Pmax = 40e3;            % W
Tmax = 50;              % Nm
Iq_max = 254.6;         % A (max 60%?)
Kp = 10;
Ki = 2;
Kaw = 100;
rate = 5;

%% Load Parameters
J = 0.0256;    %2.7818;             % kg*m^2
D = 0.04925;
ratio = 3.27;

%% Reference
TorqueRef = 10;