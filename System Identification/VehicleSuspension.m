function [A,B,C,D] = VehicleSuspension(ks, Ms, Bs, kus, Mus, Bus, Ts)
% State-space model representation of vehicle suspension for one wheel.
%
% System inputs:
% 1. Road Surface Velocity
% 2. Control Action (To be Designed)
% 
% System outputs:
% 1. z_s - z_us
% 2. z_us - z_r

A = [     0       1         0             -1;
     -ks/Ms  -Bs/Ms         0          Bs/Ms;
          0       0         0              1;
     ks/Mus  Bs/Mus  -kus/Mus  -(Bs+Bus)/Mus];
B = [      0       0;
           0    1/Ms;
          -1       0;
     Bus/Mus  -1/Mus];
% C = [     1       0  0      0;
%      -ks/Ms  -Bs/Ms  0  Bs/Ms];
% D = [0    0;
%      0 1/Ms];
C = [1 0 0 0; 
     0 0 1 0]; 
D = [0 0;
     0 0];
 
if nargin > 6 && Ts > 0 % implies discrete time
    sysd = c2d(ss(A,B,C,D),Ts);
    [A,B,C,D] = ssdata(sysd);
end
end