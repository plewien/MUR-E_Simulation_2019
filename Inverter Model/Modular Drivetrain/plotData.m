%% Get Data from Simulation
t = SDOSimTest_Log.tout;
torque = SDOSimTest_Log.MechData.signals(1).values;
speed = SDOSimTest_Log.MechData.signals(2).values;

%% Setup figure
figure(1);
set(gcf, 'Position', [100 100 1000 400])

%% Plot torque data
subplot(1,2,1);
plot(t, torque, 'LineWidth', 2.0);
xlabel('Time (sec)');
ylabel('Torque (Nm)');
legend('Torque Reference', 'Output Torque');
axis([0 max(t) -1 max(max(torque))+5]);

%% Plot speed data
subplot(1,2,2);
plot(t, speed, 'LineWidth', 2.0);
xlabel('Time (sec)');
ylabel('Speed (rpm)');
legend('Mechanical Speed');