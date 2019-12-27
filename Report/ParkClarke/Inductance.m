%% Symbolic Variable Declaration
syms Ls Lm th Ms

%% Parke Clarke Transform
T = @(t) sqrt(2/3)*[cos(t)   , cos(t-2*pi/3) , cos(t+2*pi/3); ...
                    -sin(t)  , -sin(t-2*pi/3), -sin(t+2*pi/3); ...
                    1/sqrt(2), 1/sqrt(2)     , 1/sqrt(2)];
Tdq = T(th); 

%% Inductance Matrix
L = [Ls + Lm*cos(2*th)       , -Ms - Lm*cos(2*th+pi/3) , -Ms - Lm*cos(2*th+5*pi/3); ...
    -Ms - Lm*cos(2*th+pi/3)  , Ls + Lm*cos(2*th-4*pi/3), -Ms - Lm*cos(2*th-pi); ...
    -Ms - Lm*cos(2*th+5*pi/3), -Ms - Lm*cos(2*th-pi)   , Ls + Lm*cos(2*th+4*pi/3)];

%% Simplification
Ldq = Tdq*L*inv(Tdq);
disp(simplify(Ldq));