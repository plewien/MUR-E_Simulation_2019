%% PMSM Parameters
np = 10;               % Pole Pairs
Ld = 125e-6;           % H
Lq = 130e-6;           % H
J = 256e-4;            % kg m^2
Rs = 0.35;             % Ohms
PM = 0.0393;           % Wb

%% Controller Parameters
Iq_max = 254.6;         % A (max 60%?)
KdI = 20;
KdP = 1;
KqI = 2;
KqP = 1;

%% Simulation Information
dt = 5e-6;
tfinal = .001;
idref = 0;
Tref = 1000;

%% Closed-Loop Transfer Function
s = tf('s');
Gcl_d = (KdP*s + KdI)/(Ld*s^2 + (Rs + KdP)*s + KdI);
Gcl_q = (KqP*s + KqI)/(Lq*s^2 + (Rs + KqP)*s + KqI);


%% Step Response
t = (0:dt:tfinal).';
id_input = idref*ones(length(t),1);
iq_input = Tref*ones(length(t),1)/(1.5*np*PM);

id = lsim(Gcl_d, id_input, t, 500) + 50*randn(size(t));
iq = lsim(Gcl_q, iq_input, t);
T = 1.5*np*PM*iq + 1.5*np*(Ld-Lq)*id.*iq;

figure(1);
subplot(2,1,1);
plot(t, [id, iq], t, [id_input, iq_input], 'k', 'LineWidth', 1.6);
title('Currents');

subplot(2,1,2);
plot(t, T, 'LineWidth', 1.6);
title('Torque');

%% Bode Plot
figure(2);
bode(Gcl_d, Gcl_q);

%% Poles and Zeros
figure(3);
pzplot(Gcl_d, Gcl_q);