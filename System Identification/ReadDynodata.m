% PLOT RAW DATA & TITLE:
 figure()
 stackedplot(outputTABLE1);
 title('2% Load,TorqueCommand, 200,500,1000');
 figure()
% stackedplot(outputTABLE2);
% title('3.5% Load,TorqueCommand, 200,500,1000');
% figure()
% stackedplot(outputTABLE3);
% title('5% Load,TorqueCommand, 400,1000,600');
% figure()
% stackedplot(outputTABLE4);
% title('2% Load,TorqueCommand, 200,1000,500');
% figure()
% stackedplot(outputTABLE5);
% title('2% Load,TorqueCommand, 400,1000,500');
% figure()
% stackedplot(outputTABLE6);
% title('15% Load,SpeedCommand, 600,6000,2000');
%% DISCRETE OUTPUT DATA & LEAVE INPUT BLANK
t = table2array(outputTABLE1(:,2));
axTorq1 = table2array(outputTABLE1(:,4));
u = (rem(t,15)<=5).*200+(rem(t,15)>5).*(rem(t,15)<=10).*500+(rem(t,15)>10).*(rem(t,15)<=15).*1000;
figure()
subplot(2,1,1)
plot(t,u);
title('Input 2 Step Torque Command(Res)');
subplot(2,1,2)
plot(t,axTorq1);
title('Axile speed(Nm)');
%%
