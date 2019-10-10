#include "__cf_DriveTrain_Modular.h"
#ifndef RTW_HEADER_DriveTrain_Modular_h_
#define RTW_HEADER_DriveTrain_Modular_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DriveTrain_Modular_COMMON_INCLUDES_
#define DriveTrain_Modular_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "DriveTrain_Modular_aaa11c4f_1_gateway.h"
#endif
#include "DriveTrain_Modular_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME DriveTrain_Modular
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (46) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (28)   
#elif NCSTATES != 28
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T av2xxttqir [ 6 ] ; real_T nyv1k2xnif [ 4 ] ; real_T
ntbdtueknr [ 4 ] ; real_T pwkalunkv1 [ 4 ] ; real_T f1ht3jmk15 [ 4 ] ; real_T
amrd3bzce3 [ 4 ] ; real_T p2q53n3lx3 [ 4 ] ; real_T htfbbofj5g [ 40 ] ;
real_T jgffd0qbyu [ 11 ] ; real_T fd53xux2au [ 2 ] ; real_T awgofo1wie ;
real_T peigtllerh ; real_T jliptc4o1p ; real_T nxygfdvmsu [ 2 ] ; real_T
gowqix4nxi ; real_T bzxj0do0da ; real_T lryiwzldvm ; real_T brwfgw30z4 ;
real_T bivredyivg ; real_T curiaxnp04 ; real_T agyku0cq3i ; real_T nfslrcdtc1
[ 2 ] ; real_T dady3mgvo3 [ 3 ] ; real_T ir0w0w2ryn [ 2 ] ; real_T g4hhoqvsau
; real_T nx0dswm5xd ; real_T ddsvixvqjq ; real_T a05qg3helq ; real_T
ki1flhf3vw ; real_T kxinowgu3f ; real_T of0ejkckjg ; real_T pv1wroaxz3 ;
real_T ixbetos54z [ 3 ] ; real_T bdl5rojgaf [ 3 ] ; real_T chsbdd2oex ;
real_T psnme1bdvi ; real_T hijwpfoqc4 [ 6 ] ; real_T h5mzuz5mua ; real_T
cbz2xft2xa ; real_T pgob4ywz5j [ 3 ] ; real_T cgxj4ejtx2 [ 3 ] ; boolean_T
osxfukpdla ; boolean_T kvpgre2043 ; } B ; typedef struct { real_T ijtyhzdpgc
[ 6 ] ; real_T ps50i03rnb [ 2 ] ; real_T etbdnpjxjn [ 2 ] ; real_T as34rxo2cg
[ 2 ] ; real_T mztddvmoie [ 2 ] ; real_T nzw3jrreau [ 2 ] ; real_T kmrr2ucbfz
[ 2 ] ; real_T pkiscc24z2 ; real_T a0fhdil5ww ; real_T j3rwl0mrcw ; real_T
pu4oqz11fc ; real_T ivskkakmbt ; real_T f0e1nwzdr2 ; real_T jxppjelsgv ;
real_T nbn0lw4fde ; real_T kknanrlagz ; real_T dvwxmmrgju ; real_T iqotqnp13e
; real_T gjqhhyie2z ; real_T eywxcqgbjh ; real_T mnsbhrjb31 [ 3 ] ; real_T
f3pxwtzu1c [ 3 ] ; real_T kdbjrt01qs [ 3 ] ; real_T gvphogcrbr [ 3 ] ; void *
gla2ikd2o3 ; void * fdk2esvn1i ; void * fyolw0a32b ; void * ctcuntguvz ; void
* ncgvk1bc4h ; void * add2lmxd0k ; void * pzowi24cum ; void * owtnu2yjca ;
void * ijmtinmhgw ; void * bbrl1posjr ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } bmcmlahdxq ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } lb1loe5xrv ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } a5wupdvues ; struct { void *
LoggedData [ 4 ] ; } i3fnkmeand ; struct { void * LoggedData [ 3 ] ; }
ia0bzbj3hs ; uint32_T mdwa3ns5ul [ 3 ] ; uint32_T pqge1csdhq [ 3 ] ; int_T
h5of2gf1by [ 12 ] ; int_T m3kipnj1xy ; struct { int_T PrevIndex ; }
jdqsqgygnx ; struct { int_T PrevIndex ; } ihuh0z1f3c ; struct { int_T
PrevIndex ; } nyjzi2qth2 ; int32_T hex3zemleh ; int8_T mp4psbhe4a ; int8_T
nzmsum4nlo ; int8_T c3m5srkyxf ; int8_T nmn04rxwtx ; int8_T psod05d2dh ;
int8_T dex1dzjvg2 ; int8_T gzayw0kzg2 ; uint8_T ion1jktvgf ; boolean_T
cy30ynmnz3 ; boolean_T a5ldsrx00z ; boolean_T j5wztzvpay ; boolean_T
d5gnfdhmzj ; } DW ; typedef struct { real_T gpl4yklfp5 [ 28 ] ; } X ; typedef
struct { real_T gpl4yklfp5 [ 28 ] ; } XDot ; typedef struct { boolean_T
gpl4yklfp5 [ 28 ] ; } XDis ; typedef struct { real_T gpl4yklfp5 [ 28 ] ; }
CStateAbsTol ; typedef struct { real_T do5v5iiu5u ; real_T berw4nx1pb ;
real_T kvma2f3wko ; real_T h0rr4szhgr ; real_T iwh10zmtiq ; real_T n4m2ojvujw
; real_T pz4vqh5laq ; real_T hgukfmbe44 ; real_T cxkevpuphh ; real_T
a1jqxfpmo2 ; real_T elf11uwvjw ; real_T bdaffr2ayl ; } ZCV ; typedef struct {
int_T ir [ 11 ] ; int_T jc [ 29 ] ; real_T pr [ 11 ] ; } MassMatrix ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T PM
; real_T Pmax ; real_T PolePairs ; real_T Tmax ; real_T Vnom ; real_T
PMSMCurrentControllerwithPreControl_ActFF ; real_T dqVoltageLimiter_AxisPrio
; real_T PMSMFieldOrientedControl_CtrlMode ; real_T
VelocityController_CtrlType ; real_T
BamocarD3CurrentControlSimpleIGBTs_Iq_max ; real_T
LowPassFilterDiscreteorContinuous1_K ; real_T
BamocarD3CurrentControlSimpleIGBTs_Kaw_id ; real_T
BamocarD3CurrentControlSimpleIGBTs_Kaw_iq ; real_T VelocityController_Kaw_w ;
real_T BamocarD3CurrentControlSimpleIGBTs_Ki_id ; real_T
BamocarD3CurrentControlSimpleIGBTs_Ki_iq ; real_T VelocityController_Ki_w ;
real_T BamocarD3CurrentControlSimpleIGBTs_Kp_id ; real_T
BamocarD3CurrentControlSimpleIGBTs_Kp_iq ; real_T VelocityController_Kp_w ;
real_T PMSMCurrentControllerwithPreControl_LdMatrix [ 4 ] ; real_T
PMSMCurrentControllerwithPreControl_LqMatrix [ 4 ] ; real_T
LowPassFilterDiscreteorContinuous1_T ; real_T
BamocarD3CurrentControlSimpleIGBTs_Vdc_on ; real_T CompareToConstant_const ;
real_T CompareToConstant_const_kknxiqu21y ; real_T
CompareToConstant_const_g00dogawkd ; real_T
PMSMCurrentControllerwithPreControl_idVect [ 2 ] ; real_T
PMSMCurrentControllerwithPreControl_iqVect [ 2 ] ; real_T
PMSMCurrentControllerwithPreControl_psimMatrix [ 4 ] ; real_T
DiscretePIController_x0 ; real_T PIid_x0 ; real_T PIiq_x0 ; real_T Gain_Gain
; real_T Gain1_Gain ; real_T SignChange_Gain ; real_T
SignChange_Gain_c1c2mpblgd ; real_T radsrpm_Gain ; real_T
LookupTableidreference_tableData [ 12 ] ; real_T
LookupTableidreference_bp01Data [ 2 ] ; real_T
LookupTableidreference_bp02Data [ 3 ] ; real_T
LookupTableidreference_bp03Data [ 2 ] ; real_T
LookupTableiqreference_tableData [ 12 ] ; real_T
LookupTableiqreference_bp01Data [ 2 ] ; real_T
LookupTableiqreference_bp02Data [ 3 ] ; real_T
LookupTableiqreference_bp03Data [ 2 ] ; real_T SignChange_Gain_lyv0aexmoj ;
real_T Gain_Gain_mowaew3v3s ; real_T SwitchingTimeCalculation_PWM ; real_T
SwitchingTimeCalculation_fsw ; real_T Delay_InitialCondition ; real_T
Saturation_UpperSat ; real_T FromWorkspace_Time0 [ 10812 ] ; real_T
FromWorkspace_Data0 [ 10812 ] ; real_T Zerocancellationomega_NumCoef ; real_T
Zerocancellationomega_DenCoef ; real_T Zerocancellationomega_InitialStates ;
real_T UnitDelay_InitialCondition ; real_T Constant_Value ; real_T
DiscreteTimeIntegrator_gainval ; real_T Switch_Threshold ; real_T
Constant_Value_hdjajt1smx ; real_T Integrator_gainval ; real_T
Integrator_UpperSat ; real_T Integrator_LowerSat ; real_T
Saturation_UpperSat_dqapmc31wv ; real_T Saturation_LowerSat ; real_T
FromWorkspace1_Time0 [ 10812 ] ; real_T FromWorkspace1_Data0 [ 10812 ] ;
real_T rads2rpm_Gain ; real_T FromWorkspace2_Time0 [ 10812 ] ; real_T
FromWorkspace2_Data0 [ 10812 ] ; real_T rads2rpm_Gain_fcqolhm04o ; real_T
idRef_Value ; real_T Constant_Value_ds3lzjlnhg ; real_T
Switch_Threshold_pvvjocw1io ; real_T upi_Value ; real_T Gain1_Gain_pbhnfhtcjb
; real_T Constant_Value_ptiyqv32aa ; real_T Gain_Gain_mm5o1ytrdh ; real_T
Zerovector_Value [ 2 ] ; real_T Switch_Threshold_cfzg3c43m1 ; real_T
Zerocancellationid_NumCoef ; real_T Zerocancellationid_DenCoef [ 2 ] ; real_T
Zerocancellationid_InitialStates ; real_T
UnitDelay_InitialCondition_ehqag1nm24 ; real_T
DiscreteTimeIntegrator_gainval_b24mq5fxf3 ; real_T Zerocancellationiq_NumCoef
; real_T Zerocancellationiq_DenCoef [ 2 ] ; real_T
Zerocancellationiq_InitialStates ; real_T
UnitDelay_InitialCondition_blqzla0lar ; real_T
DiscreteTimeIntegrator_gainval_cbgt3mkwpb ; real_T Constant1_Value ; real_T
Switch_Threshold_lembmp0brf ; real_T Relay_YOn ; real_T Relay_YOff ; real_T
Constant_Value_da4qccz0gh ; real_T Gain1_Gain_iw4zxuxmnh ; real_T
Constant3_Value ; real_T Bias_Bias ; real_T Initial_Value ; real_T
DiscreteTimeIntegrator1_gainval ; real_T RateTransition_InitialCondition ;
real_T RateTransition1_InitialCondition ; real_T Constant2_Value ; real_T
avoiddivisionby0_UpperSat ; real_T avoiddivisionby0_LowerSat ; real_T
UnitDelay2_InitialCondition ; real_T Zerovector_Value_n3blgurhl0 [ 6 ] ;
real_T Switch1_Threshold ; uint32_T uDLookupTableLq_maxIndex [ 2 ] ; uint32_T
uDLookupTablePsim_maxIndex [ 2 ] ; uint32_T uDLookupTableLd_maxIndex [ 2 ] ;
uint32_T LookupTableidreference_maxIndex [ 3 ] ; uint32_T
LookupTableidreference_dimSizes [ 3 ] ; uint32_T
LookupTableiqreference_maxIndex [ 3 ] ; uint32_T
LookupTableiqreference_dimSizes [ 3 ] ; uint32_T Delay_DelayLength ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX
; extern DW rtDW ; extern MassMatrix rtMassMatrix ; extern P rtP ; extern
const rtwCAPI_ModelMappingStaticInfo * DriveTrain_Modular_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
