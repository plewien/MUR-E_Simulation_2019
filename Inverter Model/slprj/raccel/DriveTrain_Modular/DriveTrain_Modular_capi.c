#include "__cf_DriveTrain_Modular.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DriveTrain_Modular_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "DriveTrain_Modular.h"
#include "DriveTrain_Modular_capi.h"
#include "DriveTrain_Modular_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/ZOH//1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/ZOH//3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Delay" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"DriveTrain_Modular/Errors/rad//s2rpm" ) , TARGET_STRING ( "Speed" ) , 0 , 0
, 3 , 0 , 2 } , { 4 , 0 , TARGET_STRING ( "DriveTrain_Modular/Errors/Sum" ) ,
TARGET_STRING ( "Torque" ) , 0 , 0 , 3 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"DriveTrain_Modular/Errors/Sum2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0
} , { 6 , 0 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/From Workspace1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/From Workspace2" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/rad//s2rpm" ) , TARGET_STRING (
"Speed" ) , 0 , 0 , 3 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/Register -> iq max percentage"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 16 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 17 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"DriveTrain_Modular/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING
( "" ) , 0 , 0 , 6 , 0 , 2 } , { 20 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 21 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Input interface/Relay"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Switch1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Unit Delay2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 3 , 0 , 3 } , { 26 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Sum4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Sum5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 31 , 13 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Switching Time Calculation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 13 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Switching Time Calculation"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/RTdc"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI id/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI iq/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Discrete PI Controller/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Bias"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 38 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Rate Transition"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Rate Transition1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Relational Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 3 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Torque limiter/Tq saturation/Switch2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 43 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Iq_max" ) , 0 , 3 , 0 } , { 44 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Vdc_on" ) , 0 , 3 , 0 } , { 45 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Kp_id" ) , 0 , 3 , 0 } , { 46 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Ki_id" ) , 0 , 3 , 0 } , { 47 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Kaw_id" ) , 0 , 3 , 0 } , { 48 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Kp_iq" ) , 0 , 3 , 0 } , { 49 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Ki_iq" ) , 0 , 3 , 0 } , { 50 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" ) ,
TARGET_STRING ( "Kaw_iq" ) , 0 , 3 , 0 } , { 51 , TARGET_STRING (
"DriveTrain_Modular/From Workspace" ) , TARGET_STRING ( "Time0" ) , 0 , 7 , 0
} , { 52 , TARGET_STRING ( "DriveTrain_Modular/From Workspace" ) ,
TARGET_STRING ( "Data0" ) , 0 , 7 , 0 } , { 53 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Delay" ) ,
TARGET_STRING ( "DelayLength" ) , 2 , 3 , 0 } , { 54 , TARGET_STRING (
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 55 , TARGET_STRING (
"DriveTrain_Modular/Errors/rad//s2rpm" ) , TARGET_STRING ( "Gain" ) , 0 , 3 ,
0 } , { 56 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1"
) , TARGET_STRING ( "K" ) , 0 , 3 , 0 } , { 57 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1"
) , TARGET_STRING ( "T" ) , 0 , 3 , 0 } , { 58 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/From Workspace1" ) , TARGET_STRING (
"Time0" ) , 0 , 7 , 0 } , { 59 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/From Workspace1" ) , TARGET_STRING (
"Data0" ) , 0 , 7 , 0 } , { 60 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/From Workspace2" ) , TARGET_STRING (
"Time0" ) , 0 , 7 , 0 } , { 61 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/From Workspace2" ) , TARGET_STRING (
"Data0" ) , 0 , 7 , 0 } , { 62 , TARGET_STRING (
"DriveTrain_Modular/Mechanical Signals/rad//s2rpm" ) , TARGET_STRING ( "Gain"
) , 0 , 3 , 0 } , { 63 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control"
) , TARGET_STRING ( "CtrlMode" ) , 0 , 3 , 0 } , { 64 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control"
) , TARGET_STRING ( "ActFF" ) , 0 , 3 , 0 } , { 65 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control"
) , TARGET_STRING ( "idVect" ) , 0 , 8 , 0 } , { 66 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control"
) , TARGET_STRING ( "iqVect" ) , 0 , 8 , 0 } , { 67 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control"
) , TARGET_STRING ( "LdMatrix" ) , 0 , 9 , 0 } , { 68 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control"
) , TARGET_STRING ( "LqMatrix" ) , 0 , 9 , 0 } , { 69 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control"
) , TARGET_STRING ( "psimMatrix" ) , 0 , 9 , 0 } , { 70 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 71 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 72 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Input interface/2*pi"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 73 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Input interface/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 0 , 3 , 0 } , { 74 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Input interface/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 0 , 3 , 0 } , { 75 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller"
) , TARGET_STRING ( "CtrlType" ) , 0 , 3 , 0 } , { 76 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller"
) , TARGET_STRING ( "Kp_w" ) , 0 , 3 , 0 } , { 77 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller"
) , TARGET_STRING ( "Ki_w" ) , 0 , 3 , 0 } , { 78 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller"
) , TARGET_STRING ( "Kaw_w" ) , 0 , 3 , 0 } , { 79 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 80 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 81 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Zero  vector"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 82 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Switch1"
) , TARGET_STRING ( "Threshold" ) , 0 , 3 , 0 } , { 83 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Unit Delay2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 84 , TARGET_STRING
(
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 85 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 3 , 0 } , { 86 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 3 , 0 } , { 87 ,
TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 3 , 0 } , { 88 ,
TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 89 , TARGET_STRING (
 "DriveTrain_Modular/Mechanical Signals/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 90 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI id"
) , TARGET_STRING ( "x0" ) , 0 , 3 , 0 } , { 91 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI iq"
) , TARGET_STRING ( "x0" ) , 0 , 3 , 0 } , { 92 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter"
) , TARGET_STRING ( "AxisPrio" ) , 0 , 3 , 0 } , { 93 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Zero-cancellation id"
) , TARGET_STRING ( "Numerator" ) , 0 , 3 , 0 } , { 94 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Zero-cancellation id"
) , TARGET_STRING ( "Denominator" ) , 0 , 8 , 0 } , { 95 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Zero-cancellation id"
) , TARGET_STRING ( "InitialStates" ) , 0 , 3 , 0 } , { 96 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Zero-cancellation iq"
) , TARGET_STRING ( "Numerator" ) , 0 , 3 , 0 } , { 97 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Zero-cancellation iq"
) , TARGET_STRING ( "Denominator" ) , 0 , 8 , 0 } , { 98 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Zero-cancellation iq"
) , TARGET_STRING ( "InitialStates" ) , 0 , 3 , 0 } , { 99 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/Park Transform/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 100 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 101 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/idRef"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 102 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/rad//s->rpm"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 103 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table id reference"
) , TARGET_STRING ( "Table" ) , 0 , 10 , 0 } , { 104 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table id reference"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 8 , 0 } , { 105 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table id reference"
) , TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 11 , 0 } , { 106 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table id reference"
) , TARGET_STRING ( "BreakpointsForDimension3" ) , 0 , 8 , 0 } , { 107 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table id reference"
) , TARGET_STRING ( "maxIndex" ) , 2 , 0 , 0 } , { 108 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table id reference"
) , TARGET_STRING ( "dimSizes" ) , 2 , 0 , 0 } , { 109 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table iq reference"
) , TARGET_STRING ( "Table" ) , 0 , 10 , 0 } , { 110 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table iq reference"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 8 , 0 } , { 111 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table iq reference"
) , TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 11 , 0 } , { 112 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table iq reference"
) , TARGET_STRING ( "BreakpointsForDimension3" ) , 0 , 8 , 0 } , { 113 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table iq reference"
) , TARGET_STRING ( "maxIndex" ) , 2 , 0 , 0 } , { 114 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Lookup Table iq reference"
) , TARGET_STRING ( "dimSizes" ) , 2 , 0 , 0 } , { 115 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 3 , 0 } , { 116 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Tq Selector/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 3 , 0 } , { 117 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 3 , 0 } , { 118 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Discrete PI Controller"
) , TARGET_STRING ( "x0" ) , 0 , 3 , 0 } , { 119 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 120 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Zero-cancellation  omega"
) , TARGET_STRING ( "Numerator" ) , 0 , 3 , 0 } , { 121 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Zero-cancellation  omega"
) , TARGET_STRING ( "Denominator" ) , 0 , 3 , 0 } , { 122 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Zero-cancellation  omega"
) , TARGET_STRING ( "InitialStates" ) , 0 , 3 , 0 } , { 123 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/Inverse Park Transform/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 124 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Switching Time Calculation"
) , TARGET_STRING ( "PWM" ) , 0 , 3 , 0 } , { 125 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Switching Time Calculation"
) , TARGET_STRING ( "fsw" ) , 0 , 3 , 0 } , { 126 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/avoid division by 0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 127 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/avoid division by 0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 128 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Feedforward pre-control/Zero vector"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 129 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Feedforward pre-control/2-D Lookup Table Ld"
) , TARGET_STRING ( "maxIndex" ) , 2 , 1 , 0 } , { 130 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Feedforward pre-control/2-D Lookup Table Lq"
) , TARGET_STRING ( "maxIndex" ) , 2 , 1 , 0 } , { 131 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Feedforward pre-control/2-D Lookup Table Psim"
) , TARGET_STRING ( "maxIndex" ) , 2 , 1 , 0 } , { 132 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Feedforward pre-control/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 3 , 0 } , { 133 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI id/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 3 , 0 } , { 134 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI id/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 135 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI iq/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 3 , 0 } , { 136 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI iq/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 137 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 138 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 139 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Sign Change"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 140 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Sign Change "
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 141 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Torque limiter/Sign Change"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 142 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Torque limiter/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 143 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Discrete PI Controller/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 3 , 0 } , { 144 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Discrete PI Controller/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 145 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 3 , 0 } , { 146 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 147 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 148 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Discrete-Time Integrator1"
) , TARGET_STRING ( "gainval" ) , 0 , 3 , 0 } , { 149 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Initial"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 150 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Rate Transition"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 151 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator/Rate Transition1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 152 ,
TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Axis prioritization/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 3 , 0 } , { 153 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Axis prioritization1/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 3 , 0 } , { 154 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Prevent division by zero/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 155 , TARGET_STRING (
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Inverter Controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Prevent division by zero/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 3 , 0 } , { 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] =
{ { 156 , TARGET_STRING ( "PM" ) , 0 , 3 , 0 } , { 157 , TARGET_STRING (
"Pmax" ) , 0 , 3 , 0 } , { 158 , TARGET_STRING ( "PolePairs" ) , 0 , 3 , 0 }
, { 159 , TARGET_STRING ( "Tmax" ) , 0 , 3 , 0 } , { 160 , TARGET_STRING (
"Vnom" ) , 0 , 3 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . dady3mgvo3 [ 0 ] , & rtB .
fd53xux2au [ 0 ] , & rtB . av2xxttqir [ 0 ] , & rtB . agyku0cq3i , & rtB .
curiaxnp04 , & rtB . ir0w0w2ryn [ 0 ] , & rtB . lryiwzldvm , & rtB .
bivredyivg , & rtB . brwfgw30z4 , & rtB . awgofo1wie , & rtB . gowqix4nxi , &
rtB . cbz2xft2xa , & rtB . nyv1k2xnif [ 0 ] , & rtB . ntbdtueknr [ 0 ] , &
rtB . pwkalunkv1 [ 0 ] , & rtB . f1ht3jmk15 [ 0 ] , & rtB . amrd3bzce3 [ 0 ]
, & rtB . p2q53n3lx3 [ 0 ] , & rtB . jgffd0qbyu [ 0 ] , & rtB . htfbbofj5g [
0 ] , & rtB . h5mzuz5mua , & rtB . nxygfdvmsu [ 0 ] , & rtB . ki1flhf3vw , &
rtB . hijwpfoqc4 [ 0 ] , & rtB . psnme1bdvi , & rtB . osxfukpdla , & rtB .
bzxj0do0da , & rtB . ddsvixvqjq , & rtB . a05qg3helq , & rtB . nfslrcdtc1 [ 0
] , & rtB . kxinowgu3f , & rtB . pgob4ywz5j [ 0 ] , & rtB . cgxj4ejtx2 [ 0 ]
, & rtB . chsbdd2oex , & rtB . g4hhoqvsau , & rtB . nx0dswm5xd , & rtB .
peigtllerh , & rtB . of0ejkckjg , & rtB . pv1wroaxz3 , & rtB . ixbetos54z [ 0
] , & rtB . bdl5rojgaf [ 0 ] , & rtB . kvpgre2043 , & rtB . jliptc4o1p , &
rtP . BamocarD3CurrentControlSimpleIGBTs_Iq_max , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Vdc_on , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Kp_id , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Ki_id , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Kaw_id , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Kp_iq , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Ki_iq , & rtP .
BamocarD3CurrentControlSimpleIGBTs_Kaw_iq , & rtP . FromWorkspace_Time0 [ 0 ]
, & rtP . FromWorkspace_Data0 [ 0 ] , & rtP . Delay_DelayLength , & rtP .
Delay_InitialCondition , & rtP . rads2rpm_Gain_fcqolhm04o , & rtP .
LowPassFilterDiscreteorContinuous1_K , & rtP .
LowPassFilterDiscreteorContinuous1_T , & rtP . FromWorkspace1_Time0 [ 0 ] , &
rtP . FromWorkspace1_Data0 [ 0 ] , & rtP . FromWorkspace2_Time0 [ 0 ] , & rtP
. FromWorkspace2_Data0 [ 0 ] , & rtP . rads2rpm_Gain , & rtP .
PMSMFieldOrientedControl_CtrlMode , & rtP .
PMSMCurrentControllerwithPreControl_ActFF , & rtP .
PMSMCurrentControllerwithPreControl_idVect [ 0 ] , & rtP .
PMSMCurrentControllerwithPreControl_iqVect [ 0 ] , & rtP .
PMSMCurrentControllerwithPreControl_LdMatrix [ 0 ] , & rtP .
PMSMCurrentControllerwithPreControl_LqMatrix [ 0 ] , & rtP .
PMSMCurrentControllerwithPreControl_psimMatrix [ 0 ] , & rtP .
Constant_Value_ptiyqv32aa , & rtP . Gain_Gain_mm5o1ytrdh , & rtP . upi_Value
, & rtP . Relay_YOn , & rtP . Relay_YOff , & rtP .
VelocityController_CtrlType , & rtP . VelocityController_Kp_w , & rtP .
VelocityController_Ki_w , & rtP . VelocityController_Kaw_w , & rtP .
Constant_Value , & rtP . Constant_Value_da4qccz0gh , & rtP .
Zerovector_Value_n3blgurhl0 [ 0 ] , & rtP . Switch1_Threshold , & rtP .
UnitDelay2_InitialCondition , & rtP . Constant_Value_hdjajt1smx , & rtP .
Integrator_gainval , & rtP . Integrator_UpperSat , & rtP .
Integrator_LowerSat , & rtP . Saturation_UpperSat_dqapmc31wv , & rtP .
Saturation_LowerSat , & rtP . PIid_x0 , & rtP . PIiq_x0 , & rtP .
dqVoltageLimiter_AxisPrio , & rtP . Zerocancellationid_NumCoef , & rtP .
Zerocancellationid_DenCoef [ 0 ] , & rtP . Zerocancellationid_InitialStates ,
& rtP . Zerocancellationiq_NumCoef , & rtP . Zerocancellationiq_DenCoef [ 0 ]
, & rtP . Zerocancellationiq_InitialStates , & rtP . Gain1_Gain_pbhnfhtcjb ,
& rtP . Constant_Value_ds3lzjlnhg , & rtP . idRef_Value , & rtP .
radsrpm_Gain , & rtP . LookupTableidreference_tableData [ 0 ] , & rtP .
LookupTableidreference_bp01Data [ 0 ] , & rtP .
LookupTableidreference_bp02Data [ 0 ] , & rtP .
LookupTableidreference_bp03Data [ 0 ] , & rtP .
LookupTableidreference_maxIndex [ 0 ] , & rtP .
LookupTableidreference_dimSizes [ 0 ] , & rtP .
LookupTableiqreference_tableData [ 0 ] , & rtP .
LookupTableiqreference_bp01Data [ 0 ] , & rtP .
LookupTableiqreference_bp02Data [ 0 ] , & rtP .
LookupTableiqreference_bp03Data [ 0 ] , & rtP .
LookupTableiqreference_maxIndex [ 0 ] , & rtP .
LookupTableiqreference_dimSizes [ 0 ] , & rtP . Switch_Threshold_pvvjocw1io ,
& rtP . Switch_Threshold , & rtP . CompareToConstant_const , & rtP .
DiscretePIController_x0 , & rtP . Gain_Gain_mowaew3v3s , & rtP .
Zerocancellationomega_NumCoef , & rtP . Zerocancellationomega_DenCoef , & rtP
. Zerocancellationomega_InitialStates , & rtP . Gain1_Gain_iw4zxuxmnh , & rtP
. SwitchingTimeCalculation_PWM , & rtP . SwitchingTimeCalculation_fsw , & rtP
. avoiddivisionby0_UpperSat , & rtP . avoiddivisionby0_LowerSat , & rtP .
Zerovector_Value [ 0 ] , & rtP . uDLookupTableLd_maxIndex [ 0 ] , & rtP .
uDLookupTableLq_maxIndex [ 0 ] , & rtP . uDLookupTablePsim_maxIndex [ 0 ] , &
rtP . Switch_Threshold_cfzg3c43m1 , & rtP .
DiscreteTimeIntegrator_gainval_b24mq5fxf3 , & rtP .
UnitDelay_InitialCondition_ehqag1nm24 , & rtP .
DiscreteTimeIntegrator_gainval_cbgt3mkwpb , & rtP .
UnitDelay_InitialCondition_blqzla0lar , & rtP . Gain_Gain , & rtP .
Gain1_Gain , & rtP . SignChange_Gain , & rtP . SignChange_Gain_c1c2mpblgd , &
rtP . SignChange_Gain_lyv0aexmoj , & rtP . Saturation_UpperSat , & rtP .
DiscreteTimeIntegrator_gainval , & rtP . UnitDelay_InitialCondition , & rtP .
Bias_Bias , & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP .
DiscreteTimeIntegrator1_gainval , & rtP . Initial_Value , & rtP .
RateTransition_InitialCondition , & rtP . RateTransition1_InitialCondition ,
& rtP . CompareToConstant_const_kknxiqu21y , & rtP .
CompareToConstant_const_g00dogawkd , & rtP . Constant1_Value , & rtP .
Switch_Threshold_lembmp0brf , & rtP . PM , & rtP . Pmax , & rtP . PolePairs ,
& rtP . Tmax , & rtP . Vnom , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) ,
SS_UINT32 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_SCALAR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR_ND , 20 , 3 , 0 } , { rtwCAPI_VECTOR , 23 , 2 , 0 }
} ; static const uint_T rtDimensionArray [ ] = { 3 , 1 , 2 , 1 , 6 , 1 , 1 ,
1 , 4 , 1 , 11 , 1 , 40 , 1 , 10812 , 1 , 1 , 2 , 2 , 2 , 2 , 3 , 2 , 1 , 3 }
; static const real_T rtcapiStoredFloats [ ] = { 5.0E-5 , 0.0 , 2.5E-6 , 1.0
} ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 3 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 2 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 1 ] , ( const void * ) & rtcapiStoredFloats [ 3 ] , 1 , 0 } , { ( NULL ) ,
( NULL ) , 4 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 43 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters ,
113 , rtModelParameters , 5 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1474043602U , 2150365644U , 1007489042U ,
2638531000U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
DriveTrain_Modular_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void DriveTrain_Modular_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DriveTrain_Modular_host_InitializeDataMapInfo (
DriveTrain_Modular_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
