%% Simulation Time parameters

%fsw = 1e3;      % Switching frequency (Hz)
fsw = 600;       % Switching frequency (Hz)   
fc = fsw*10;    % Control loop frequency (Hz)
Tsc = 1/fc;     % Control loop sample time
fs = fc*20;     % Fundamental sample frequency (Hz)
Ts = 1/fs;      % Fundamental sample time

%% Accumulator Parameters
Vnom = 450;               % V

%% PMSM Parameters
PolePairs = 10; p = PolePairs;
Ld = 125e-6;           % H
Lq = 130e-6;           % H
J = 0.0256;  % g cm^2
Rs = 0.35;  %1.844; %0.4;             % Ohms
PM = 0.0393;            % Wb

%% Controller Parameters
rate = 20;

alpha = 2;
KqP = 0.01;
KqI = (Rs+KqP)^2/(4*Lq);
KdP = alpha*(Ld/Lq)*KqP + (alpha*(Ld/Lq) - 1)*Rs;
KdI = (Rs+KdP)^2/(4*Ld);

KdAW = 5;
KqAW = 5;

%% Load Parameters
TL = 0.01;
D = 0.04925;
ratio = 3.27;

%% Reference
TorqueRef = 10;