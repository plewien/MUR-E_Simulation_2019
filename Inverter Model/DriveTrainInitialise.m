%% Simulation Time parameters

%fsw = 1e3;      % Switching frequency (Hz)
fsw = 600;       % Switching frequency (Hz)   
fc = fsw*10;    % Control loop frequency (Hz)
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
C = 320;                  % uF

%% Accumulator Parameters
Vnom = 48;                % V

%% PMSM Parameters
PolePairs = 10; p = PolePairs;
Ld = 125e-6;              % H
Lq = 130e-6;              % H
RotorInertia = 256e3;     % g cm^2
Rs = 0.35;                % Ohms
PM = 0.0393;              % Wb

%% Controller Parameters
Pmax = 40e3;              % W
Tmax = 500;               % Nm
Iq_max = 0.1*254.6;       % A (max 60%?)
rate = 20;

alpha = 2;
KqP = 0.1;
KqI = (Rs+KqP)^2/(4*Lq);
KdP = alpha*(Ld/Lq)*KqP + (alpha*(Ld/Lq) - 1)*Rs;
KdI = (Rs+KdP)^2/(4*Ld);

% KdI = 15;
% KdP = 5;
% KqI = 20;
% KqP = 1;

KdAW = 5;
KqAW = 5;

%% Load Parameters
J = 1.256;              % kg*m^2
D = 0.04925;
ratio = 3.27;