%% Simulation Time parameters
Ts = 2e-6;    % Fundamental sample time
fsw = 2e3;     % Switching frequency (Hz)
fc = fsw*10;  % Control loop frequency (Hz)
Tsc = 1/fc;    % Control loop sample time

%% IGBT Parameters (to check)
Vf = 1.45;                % V
Vth = 0.5;                % V
Ron = 0.001;              % Ohm
Goff = 1e-5;              % S
Vf_diode = 1.55;          % V
Ron_diode = 0.001;        % Ohm
Goff_diode = 1e-5;        % S

%% Accumulator Parameters
Vnom = 450;               % V

%% PMSM Parameters
PolePairs = 10;
Ld = 125e-6;           % H
Lq = 130e-6;           % H
RotorInertia = 256;    % kg cm^2

%% Controller Parameters
Pmax = 40e3;    % W
Tmax = 50;      % Nm
PM = 0.04;      % Wb

%% Load Parameters
J = 0.10;                 % kg*m^2