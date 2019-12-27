data = out.logsout;
figure(1)

%% Torque Control
subplot(2,3,[1 2]);
torque_ref = data{5}.Values;
torque = data{2}.Values;
plot(torque_ref, 'LineWidth', 1.6);
hold on
plot(torque, 'LineWidth', 1.6);
hold off
title('Reference and Output Torque');
xlabel('Time (seconds)');
ylabel('Torque (Nm)');

%% Speed Output
subplot(2,3, 4:5);
speed = data{1}.Values;
plot(speed, 'LineWidth', 1.6);
title('Wheel Speed');
ylabel('Speed (rpm)');

%% DQ Currents
subplot(2,3,3);
idq = data{4}.Values;
plot(idq, 'LineWidth', 1.6);
title('DQ-Axis Current');
ylabel('Current (A)');

%% ABC Currents
subplot(2,3,6);
iabc = data{3}.Values;
plot(iabc, 'LineWidth', 1.6);
title('ABC-Axis Current');
ylabel('Current (A)');