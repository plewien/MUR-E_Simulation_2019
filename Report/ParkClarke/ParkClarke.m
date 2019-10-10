%% Generate abc currents
w = 2;
t = linspace(0, 5);
delta = -pi/3;
ia = sin(w*t - delta);
ib = sin(w*t + 2*pi/3 - delta);
ic = sin(w*t - 2*pi/3 - delta);

%% Plot abc currents
figure(1);
iabc = [ia; ib; ic];
plot(t, iabc, 'LineWidth', 1.6);
title('abc-axis');

%% Clarke transform
figure(2);
X = (2*ia - ib - ic)*(1/sqrt(6));
Y = (ib - ic)*(1/sqrt(2));
Z = (ia + ib + ic)*(1/sqrt(3));
ialphabeta = [X;Y;Z];
plot(t, ialphabeta, 'LineWidth', 1.6);
title('\alpha\beta-axis');

%% Park transform
figure(3);
Tp = @(theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
idq = zeros(3,length(t));
for i = 1:length(t)
    theta = (w+0.1)*t(i);
    idq(:,i) = Tp(theta)*ialphabeta(:,i);
end
plot(t, idq, 'LineWidth', 1.6);
title('dq-axis');