#include "__cf_DriveTrain_Modular.h"
#include "rt_logging_mmi.h"
#include "DriveTrain_Modular_capi.h"
#include <math.h>
#include "DriveTrain_Modular.h"
#include "DriveTrain_Modular_private.h"
#include "DriveTrain_Modular_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 3 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.3 (R2019a) 23-Nov-2018" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\DriveTrain_Modular\\DriveTrain_Modular_Jpattern.mat" ; const
int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ; static SimStruct model_S
; SimStruct * const rtS = & model_S ; real_T look2_binlcpw ( real_T u0 ,
real_T u1 , const real_T bp0 [ ] , const real_T bp1 [ ] , const real_T table
[ ] , const uint32_T maxIndex [ ] , uint32_T stride ) { real_T frac ;
uint32_T bpIndices [ 2 ] ; real_T fractions [ 2 ] ; real_T yL_1d ; uint32_T
iRght ; uint32_T bpIdx ; uint32_T iLeft ; if ( u0 <= bp0 [ 0U ] ) { iLeft =
0U ; frac = 0.0 ; } else if ( u0 < bp0 [ maxIndex [ 0U ] ] ) { bpIdx =
maxIndex [ 0U ] >> 1U ; iLeft = 0U ; iRght = maxIndex [ 0U ] ; while ( iRght
- iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft =
bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) /
( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex [ 0U ] -
1U ; frac = 1.0 ; } fractions [ 0U ] = frac ; bpIndices [ 0U ] = iLeft ; if (
u1 <= bp1 [ 0U ] ) { iLeft = 0U ; frac = 0.0 ; } else if ( u1 < bp1 [
maxIndex [ 1U ] ] ) { bpIdx = maxIndex [ 1U ] >> 1U ; iLeft = 0U ; iRght =
maxIndex [ 1U ] ; while ( iRght - iLeft > 1U ) { if ( u1 < bp1 [ bpIdx ] ) {
iRght = bpIdx ; } else { iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ;
} frac = ( u1 - bp1 [ iLeft ] ) / ( bp1 [ iLeft + 1U ] - bp1 [ iLeft ] ) ; }
else { iLeft = maxIndex [ 1U ] - 1U ; frac = 1.0 ; } bpIdx = iLeft * stride +
bpIndices [ 0U ] ; yL_1d = ( table [ bpIdx + 1U ] - table [ bpIdx ] ) *
fractions [ 0U ] + table [ bpIdx ] ; bpIdx += stride ; return ( ( ( table [
bpIdx + 1U ] - table [ bpIdx ] ) * fractions [ 0U ] + table [ bpIdx ] ) -
yL_1d ) * frac + yL_1d ; } real_T look2_binlcapw ( real_T u0 , real_T u1 ,
const real_T bp0 [ ] , const real_T bp1 [ ] , const real_T table [ ] , const
uint32_T maxIndex [ ] , uint32_T stride ) { real_T y ; real_T frac ; uint32_T
bpIndices [ 2 ] ; real_T fractions [ 2 ] ; real_T yR_1d ; uint32_T iRght ;
uint32_T bpIdx ; uint32_T iLeft ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac
= 0.0 ; } else if ( u0 < bp0 [ maxIndex [ 0U ] ] ) { bpIdx = maxIndex [ 0U ]
>> 1U ; iLeft = 0U ; iRght = maxIndex [ 0U ] ; while ( iRght - iLeft > 1U ) {
if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; } bpIdx
= ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [ iLeft +
1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex [ 0U ] ; frac = 0.0 ; }
fractions [ 0U ] = frac ; bpIndices [ 0U ] = iLeft ; if ( u1 <= bp1 [ 0U ] )
{ iLeft = 0U ; frac = 0.0 ; } else if ( u1 < bp1 [ maxIndex [ 1U ] ] ) {
bpIdx = maxIndex [ 1U ] >> 1U ; iLeft = 0U ; iRght = maxIndex [ 1U ] ; while
( iRght - iLeft > 1U ) { if ( u1 < bp1 [ bpIdx ] ) { iRght = bpIdx ; } else {
iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u1 - bp1 [
iLeft ] ) / ( bp1 [ iLeft + 1U ] - bp1 [ iLeft ] ) ; } else { iLeft =
maxIndex [ 1U ] ; frac = 0.0 ; } bpIdx = iLeft * stride + bpIndices [ 0U ] ;
if ( bpIndices [ 0U ] == maxIndex [ 0U ] ) { y = table [ bpIdx ] ; } else { y
= ( table [ bpIdx + 1U ] - table [ bpIdx ] ) * fractions [ 0U ] + table [
bpIdx ] ; } if ( iLeft == maxIndex [ 1U ] ) { } else { bpIdx += stride ; if (
bpIndices [ 0U ] == maxIndex [ 0U ] ) { yR_1d = table [ bpIdx ] ; } else {
yR_1d = ( table [ bpIdx + 1U ] - table [ bpIdx ] ) * fractions [ 0U ] + table
[ bpIdx ] ; } y += ( yR_1d - y ) * frac ; } return y ; } uint32_T plook_binx
( real_T u , const real_T bp [ ] , uint32_T maxIndex , real_T * fraction ) {
uint32_T bpIndex ; if ( u <= bp [ 0U ] ) { bpIndex = 0U ; * fraction = ( u -
bp [ 0U ] ) / ( bp [ 1U ] - bp [ 0U ] ) ; } else if ( u < bp [ maxIndex ] ) {
bpIndex = binsearch_u32d ( u , bp , maxIndex >> 1U , maxIndex ) ; * fraction
= ( u - bp [ bpIndex ] ) / ( bp [ bpIndex + 1U ] - bp [ bpIndex ] ) ; } else
{ bpIndex = maxIndex - 1U ; * fraction = ( u - bp [ maxIndex - 1U ] ) / ( bp
[ maxIndex ] - bp [ maxIndex - 1U ] ) ; } return bpIndex ; } real_T
intrp3d_l_pw ( const uint32_T bpIndex [ ] , const real_T frac [ ] , const
real_T table [ ] , const uint32_T stride [ ] ) { real_T yL_2d ; uint32_T
offset_2d ; real_T yL_1d ; uint32_T offset_0d ; offset_2d = ( bpIndex [ 2U ]
* stride [ 2U ] + bpIndex [ 1U ] * stride [ 1U ] ) + bpIndex [ 0U ] ; yL_1d =
( table [ offset_2d + 1U ] - table [ offset_2d ] ) * frac [ 0U ] + table [
offset_2d ] ; offset_0d = offset_2d + stride [ 1U ] ; yL_2d = ( ( ( table [
offset_0d + 1U ] - table [ offset_0d ] ) * frac [ 0U ] + table [ offset_0d ]
) - yL_1d ) * frac [ 1U ] + yL_1d ; offset_2d += stride [ 2U ] ; yL_1d = (
table [ offset_2d + 1U ] - table [ offset_2d ] ) * frac [ 0U ] + table [
offset_2d ] ; offset_0d = offset_2d + stride [ 1U ] ; return ( ( ( ( ( table
[ offset_0d + 1U ] - table [ offset_0d ] ) * frac [ 0U ] + table [ offset_0d
] ) - yL_1d ) * frac [ 1U ] + yL_1d ) - yL_2d ) * frac [ 2U ] + yL_2d ; }
uint32_T binsearch_u32d ( real_T u , const real_T bp [ ] , uint32_T
startIndex , uint32_T maxIndex ) { uint32_T bpIndex ; uint32_T iRght ;
uint32_T bpIdx ; bpIdx = startIndex ; bpIndex = 0U ; iRght = maxIndex ; while
( iRght - bpIndex > 1U ) { if ( u < bp [ bpIdx ] ) { iRght = bpIdx ; } else {
bpIndex = bpIdx ; } bpIdx = ( iRght + bpIndex ) >> 1U ; } return bpIndex ; }
void MdlInitialize ( void ) { boolean_T tmp ; char * tmp_p ; int32_T i ; for
( i = 0 ; i < 6 ; i ++ ) { rtDW . ijtyhzdpgc [ i ] = rtP .
Delay_InitialCondition ; } tmp = false ; if ( tmp ) { i = strcmp ( "ode23t" ,
ssGetSolverName ( rtS ) ) ; if ( i != 0 ) { tmp_p = solver_mismatch_message (
"ode23t" , ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_p ) ; } }
rtDW . pkiscc24z2 = rtP . UnitDelay_InitialCondition ; rtDW . a0fhdil5ww =
rtP . DiscretePIController_x0 ; rtDW . mp4psbhe4a = 2 ; rtDW . ion1jktvgf =
1U ; rtDW . nzmsum4nlo = 0 ; rtDW . pu4oqz11fc = rtP .
Zerocancellationid_InitialStates ; rtDW . ivskkakmbt = rtP .
UnitDelay_InitialCondition_ehqag1nm24 ; rtDW . f0e1nwzdr2 = rtP . PIid_x0 ;
rtDW . c3m5srkyxf = 2 ; rtDW . jxppjelsgv = rtP .
Zerocancellationiq_InitialStates ; rtDW . nbn0lw4fde = rtP .
UnitDelay_InitialCondition_blqzla0lar ; rtDW . kknanrlagz = rtP . PIiq_x0 ;
rtDW . nmn04rxwtx = 2 ; rtDW . dvwxmmrgju = rtB . pv1wroaxz3 ; rtDW .
gzayw0kzg2 = 2 ; rtDW . mnsbhrjb31 [ 0 ] = rtP .
RateTransition_InitialCondition ; rtDW . f3pxwtzu1c [ 0 ] = rtP .
RateTransition1_InitialCondition ; rtDW . mnsbhrjb31 [ 1 ] = rtP .
RateTransition_InitialCondition ; rtDW . f3pxwtzu1c [ 1 ] = rtP .
RateTransition1_InitialCondition ; rtDW . mnsbhrjb31 [ 2 ] = rtP .
RateTransition_InitialCondition ; rtDW . f3pxwtzu1c [ 2 ] = rtP .
RateTransition1_InitialCondition ; rtDW . iqotqnp13e = rtP .
UnitDelay2_InitialCondition ; { static int_T modelMassMatrixIr [ 11 ] = { 0 ,
1 , 2 , 26 , 6 , 26 , 3 , 4 , 5 , 7 , 8 } ; static int_T modelMassMatrixJc [
29 ] = { 0 , 1 , 2 , 4 , 6 , 7 , 8 , 9 , 10 , 11 , 11 , 11 , 11 , 11 , 11 ,
11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 } ;
static real_T modelMassMatrixPr [ 11 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix . ir ,
modelMassMatrixIr , 11 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix
. jc , modelMassMatrixJc , 29 * sizeof ( int_T ) ) ; ( void ) memcpy (
rtMassMatrix . pr , modelMassMatrixPr , 11 * sizeof ( real_T ) ) ; } } void
MdlStart ( void ) { NeslSimulator * tmp ; boolean_T tmp_p ;
NeuDiagnosticManager * diagnosticManager ; NeModelParameters modelParameters
; real_T tmp_e ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T *
parameterBundle_mRealParameters_mX ; real_T tmp_i ; int_T j ;
NeslSimulationData * simulationData ; real_T time ; NeModelParameters
modelParameters_p ; real_T time_p ; NeParameterBundle expl_temp ; { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } tmp = nesl_lease_simulator (
"DriveTrain_Modular/Solver Configuration_1" , 0 , 0 ) ; rtDW . gla2ikd2o3 = (
void * ) tmp ; tmp_p = pointer_is_null ( rtDW . gla2ikd2o3 ) ; if ( tmp_p ) {
DriveTrain_Modular_aaa11c4f_1_gateway ( ) ; tmp = nesl_lease_simulator (
"DriveTrain_Modular/Solver Configuration_1" , 0 , 0 ) ; rtDW . gla2ikd2o3 = (
void * ) tmp ; } simulationData = nesl_create_simulation_data ( ) ; rtDW .
fdk2esvn1i = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . fyolw0a32b = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverTolerance = 0.001 ; modelParameters . mVariableStepSolver = true ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 4.91182404E+8 ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fyolw0a32b ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; j = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . gla2ikd2o3 , &
modelParameters , diagnosticManager ) ; if ( j != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp_i = rtP . Vnom ; parameterBundle_mRealParameters_mX = & tmp_i ; expl_temp
. mRealParameters . mN = 1 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . gla2ikd2o3 , expl_temp )
; simulationData = ( NeslSimulationData * ) rtDW . fdk2esvn1i ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gjqhhyie2z ; simulationData -> mData ->
mModeVector . mN = 12 ; simulationData -> mData -> mModeVector . mX = & rtDW
. h5of2gf1by [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp_p ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp_p ; tmp_p = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . fyolw0a32b ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; j =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( j != 0
) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p )
{ msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg
) ; } } tmp = nesl_lease_simulator (
"DriveTrain_Modular/Solver Configuration_1" , 1 , 0 ) ; rtDW . add2lmxd0k = (
void * ) tmp ; tmp_p = pointer_is_null ( rtDW . add2lmxd0k ) ; if ( tmp_p ) {
DriveTrain_Modular_aaa11c4f_1_gateway ( ) ; tmp = nesl_lease_simulator (
"DriveTrain_Modular/Solver Configuration_1" , 1 , 0 ) ; rtDW . add2lmxd0k = (
void * ) tmp ; } simulationData = nesl_create_simulation_data ( ) ; rtDW .
pzowi24cum = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . owtnu2yjca = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverTolerance = 0.001 ; modelParameters_p . mVariableStepSolver = true ;
modelParameters_p . mFixedStepSize = 0.001 ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 4.91182404E+8 ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . owtnu2yjca ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; j = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . add2lmxd0k , &
modelParameters_p , diagnosticManager ) ; if ( j != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . pzowi24cum ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . eywxcqgbjh ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . m3kipnj1xy ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . owtnu2yjca ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; j =
ne_simulator_method ( ( NeslSimulator * ) rtDW . add2lmxd0k ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( j != 0
) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p )
{ msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg
) ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc
( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sim.input" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints =
10812 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW .
bmcmlahdxq . TimePtr = fromwksInfo -> time ; rtDW . bmcmlahdxq . DataPtr =
fromwksInfo -> data ; rtDW . bmcmlahdxq . RSimInfoPtr = fromwksInfo ; } rtDW
. jdqsqgygnx . PrevIndex = 0 ; } rtB . nxygfdvmsu [ 0 ] = 2.5E-6 ; rtB .
nxygfdvmsu [ 1 ] = 0.0 ; { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = (
FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) {
ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sim.torque" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints
= 10812 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ;
rtDW . lb1loe5xrv . TimePtr = fromwksInfo -> time ; rtDW . lb1loe5xrv .
DataPtr = fromwksInfo -> data ; rtDW . lb1loe5xrv . RSimInfoPtr = fromwksInfo
; } rtDW . ihuh0z1f3c . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sim.speed" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo -> nDataPoints
= 10812 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace2_Time0 ;
rtDW . a5wupdvues . TimePtr = fromwksInfo -> time ; rtDW . a5wupdvues .
DataPtr = fromwksInfo -> data ; rtDW . a5wupdvues . RSimInfoPtr = fromwksInfo
; } rtDW . nyjzi2qth2 . PrevIndex = 0 ; } rtDW . psod05d2dh = 0 ; rtDW .
dex1dzjvg2 = 0 ; rtB . pv1wroaxz3 = rtP . Initial_Value ; rtDW . d5gnfdhmzj =
true ; rtB . ixbetos54z [ 0 ] = rtP . RateTransition_InitialCondition ; rtB .
bdl5rojgaf [ 0 ] = rtP . RateTransition1_InitialCondition ; rtB . ixbetos54z
[ 1 ] = rtP . RateTransition_InitialCondition ; rtB . bdl5rojgaf [ 1 ] = rtP
. RateTransition1_InitialCondition ; rtB . ixbetos54z [ 2 ] = rtP .
RateTransition_InitialCondition ; rtB . bdl5rojgaf [ 2 ] = rtP .
RateTransition1_InitialCondition ; rtB . psnme1bdvi = rtP .
UnitDelay2_InitialCondition ; MdlInitialize ( ) ; } void MdlOutputs ( int_T
tid ) { real_T atwcoe5sz0 ; NeslSimulationData * simulationData ; real_T time
; real_T tmp [ 24 ] ; int_T tmp_p [ 7 ] ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
time_p ; real_T tmp_e [ 64 ] ; int_T tmp_i [ 8 ] ; real_T Toffset ; int32_T
idx ; uint32_T bpIndices [ 3 ] ; uint32_T bpIndices_p [ 3 ] ; real_T
fractions [ 3 ] ; real_T cbvgbmtzvx ; real_T f4syyu2jv3 ; real_T aemcghwbkd ;
real_T jjwwjmmu4v ; real_T bmnlsgroez ; real_T bxb5nw013c [ 3 ] ; real_T
lprsxvcmsv ; real_T jvu20sruxe ; real_T ez3ia5q2as [ 3 ] ; real_T io2kxcvz2p
; real_T exqmocqk50 ; int32_T i ; boolean_T fgwyszml32 ; real_T
cwnxmb4pmy_idx_0 ; boolean_T ckdmbezvfh_idx_0 ; boolean_T lp3shp45zx_idx_0 ;
boolean_T ckdmbezvfh_idx_1 ; boolean_T lp3shp45zx_idx_1 ; boolean_T exitg1 ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
av2xxttqir [ i ] = rtDW . ijtyhzdpgc [ i ] ; } } rtB . nyv1k2xnif [ 0 ] = rtB
. av2xxttqir [ 0 ] ; rtB . nyv1k2xnif [ 1 ] = 0.0 ; rtB . nyv1k2xnif [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ps50i03rnb [ 0 ] = ! ( rtB .
nyv1k2xnif [ 0 ] == rtDW . ps50i03rnb [ 1 ] ) ; rtDW . ps50i03rnb [ 1 ] = rtB
. nyv1k2xnif [ 0 ] ; } rtB . nyv1k2xnif [ 0 ] = rtDW . ps50i03rnb [ 1 ] ; rtB
. nyv1k2xnif [ 3 ] = rtDW . ps50i03rnb [ 0 ] ; rtB . ntbdtueknr [ 0 ] = rtB .
av2xxttqir [ 2 ] ; rtB . ntbdtueknr [ 1 ] = 0.0 ; rtB . ntbdtueknr [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . etbdnpjxjn [ 0 ] = ! ( rtB .
ntbdtueknr [ 0 ] == rtDW . etbdnpjxjn [ 1 ] ) ; rtDW . etbdnpjxjn [ 1 ] = rtB
. ntbdtueknr [ 0 ] ; } rtB . ntbdtueknr [ 0 ] = rtDW . etbdnpjxjn [ 1 ] ; rtB
. ntbdtueknr [ 3 ] = rtDW . etbdnpjxjn [ 0 ] ; rtB . pwkalunkv1 [ 0 ] = rtB .
av2xxttqir [ 4 ] ; rtB . pwkalunkv1 [ 1 ] = 0.0 ; rtB . pwkalunkv1 [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . as34rxo2cg [ 0 ] = ! ( rtB .
pwkalunkv1 [ 0 ] == rtDW . as34rxo2cg [ 1 ] ) ; rtDW . as34rxo2cg [ 1 ] = rtB
. pwkalunkv1 [ 0 ] ; } rtB . pwkalunkv1 [ 0 ] = rtDW . as34rxo2cg [ 1 ] ; rtB
. pwkalunkv1 [ 3 ] = rtDW . as34rxo2cg [ 0 ] ; rtB . f1ht3jmk15 [ 0 ] = rtB .
av2xxttqir [ 1 ] ; rtB . f1ht3jmk15 [ 1 ] = 0.0 ; rtB . f1ht3jmk15 [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mztddvmoie [ 0 ] = ! ( rtB .
f1ht3jmk15 [ 0 ] == rtDW . mztddvmoie [ 1 ] ) ; rtDW . mztddvmoie [ 1 ] = rtB
. f1ht3jmk15 [ 0 ] ; } rtB . f1ht3jmk15 [ 0 ] = rtDW . mztddvmoie [ 1 ] ; rtB
. f1ht3jmk15 [ 3 ] = rtDW . mztddvmoie [ 0 ] ; rtB . amrd3bzce3 [ 0 ] = rtB .
av2xxttqir [ 3 ] ; rtB . amrd3bzce3 [ 1 ] = 0.0 ; rtB . amrd3bzce3 [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . nzw3jrreau [ 0 ] = ! ( rtB .
amrd3bzce3 [ 0 ] == rtDW . nzw3jrreau [ 1 ] ) ; rtDW . nzw3jrreau [ 1 ] = rtB
. amrd3bzce3 [ 0 ] ; } rtB . amrd3bzce3 [ 0 ] = rtDW . nzw3jrreau [ 1 ] ; rtB
. amrd3bzce3 [ 3 ] = rtDW . nzw3jrreau [ 0 ] ; rtB . p2q53n3lx3 [ 0 ] = rtB .
av2xxttqir [ 5 ] ; rtB . p2q53n3lx3 [ 1 ] = 0.0 ; rtB . p2q53n3lx3 [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kmrr2ucbfz [ 0 ] = ! ( rtB .
p2q53n3lx3 [ 0 ] == rtDW . kmrr2ucbfz [ 1 ] ) ; rtDW . kmrr2ucbfz [ 1 ] = rtB
. p2q53n3lx3 [ 0 ] ; } rtB . p2q53n3lx3 [ 0 ] = rtDW . kmrr2ucbfz [ 1 ] ; rtB
. p2q53n3lx3 [ 3 ] = rtDW . kmrr2ucbfz [ 0 ] ; simulationData = (
NeslSimulationData * ) rtDW . fdk2esvn1i ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gjqhhyie2z ; simulationData -> mData ->
mModeVector . mN = 12 ; simulationData -> mData -> mModeVector . mX = & rtDW
. h5of2gf1by [ 0 ] ; fgwyszml32 = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = fgwyszml32 ; simulationData -> mData -> mIsMajorTimeStep
= ssIsMajorTimeStep ( rtS ) ; fgwyszml32 = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = fgwyszml32 ; fgwyszml32 = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = fgwyszml32 ; fgwyszml32
= ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = fgwyszml32 ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; fgwyszml32
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = fgwyszml32 ; tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB .
nyv1k2xnif [ 0 ] ; tmp [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp [ 2 ] = rtB .
nyv1k2xnif [ 2 ] ; tmp [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp
[ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp [ 5 ] = rtB . ntbdtueknr [ 1 ] ; tmp [ 6
] = rtB . ntbdtueknr [ 2 ] ; tmp [ 7 ] = rtB . ntbdtueknr [ 3 ] ; tmp_p [ 2 ]
= 8 ; tmp [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp [ 9 ] = rtB . pwkalunkv1 [ 1 ]
; tmp [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp [ 11 ] = rtB . pwkalunkv1 [ 3 ] ;
tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . f1ht3jmk15 [ 0 ] ; tmp [ 13 ] = rtB .
f1ht3jmk15 [ 1 ] ; tmp [ 14 ] = rtB . f1ht3jmk15 [ 2 ] ; tmp [ 15 ] = rtB .
f1ht3jmk15 [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB . amrd3bzce3 [ 0 ] ;
tmp [ 17 ] = rtB . amrd3bzce3 [ 1 ] ; tmp [ 18 ] = rtB . amrd3bzce3 [ 2 ] ;
tmp [ 19 ] = rtB . amrd3bzce3 [ 3 ] ; tmp_p [ 5 ] = 20 ; tmp [ 20 ] = rtB .
p2q53n3lx3 [ 0 ] ; tmp [ 21 ] = rtB . p2q53n3lx3 [ 1 ] ; tmp [ 22 ] = rtB .
p2q53n3lx3 [ 2 ] ; tmp [ 23 ] = rtB . p2q53n3lx3 [ 3 ] ; tmp_p [ 6 ] = 24 ;
simulationData -> mData -> mInputValues . mN = 24 ; simulationData -> mData
-> mInputValues . mX = & tmp [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 7 ; simulationData -> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 40 ; simulationData -> mData ->
mOutputs . mX = & rtB . htfbbofj5g [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fyolw0a32b ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
fgwyszml32 = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
fgwyszml32 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . pzowi24cum ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . eywxcqgbjh ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . m3kipnj1xy ;
fgwyszml32 = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = fgwyszml32
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
fgwyszml32 = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U
) ; simulationData -> mData -> mIsSolverAssertCheck = fgwyszml32 ; fgwyszml32
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = fgwyszml32 ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; fgwyszml32 = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = fgwyszml32 ; tmp_i [ 0 ] = 0 ; tmp_e [ 0
] = rtB . nyv1k2xnif [ 0 ] ; tmp_e [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp_e [ 2
] = rtB . nyv1k2xnif [ 2 ] ; tmp_e [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_i [ 1
] = 4 ; tmp_e [ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp_e [ 5 ] = rtB . ntbdtueknr
[ 1 ] ; tmp_e [ 6 ] = rtB . ntbdtueknr [ 2 ] ; tmp_e [ 7 ] = rtB . ntbdtueknr
[ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp_e [ 9 ]
= rtB . pwkalunkv1 [ 1 ] ; tmp_e [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp_e [ 11
] = rtB . pwkalunkv1 [ 3 ] ; tmp_i [ 3 ] = 12 ; tmp_e [ 12 ] = rtB .
f1ht3jmk15 [ 0 ] ; tmp_e [ 13 ] = rtB . f1ht3jmk15 [ 1 ] ; tmp_e [ 14 ] = rtB
. f1ht3jmk15 [ 2 ] ; tmp_e [ 15 ] = rtB . f1ht3jmk15 [ 3 ] ; tmp_i [ 4 ] = 16
; tmp_e [ 16 ] = rtB . amrd3bzce3 [ 0 ] ; tmp_e [ 17 ] = rtB . amrd3bzce3 [ 1
] ; tmp_e [ 18 ] = rtB . amrd3bzce3 [ 2 ] ; tmp_e [ 19 ] = rtB . amrd3bzce3 [
3 ] ; tmp_i [ 5 ] = 20 ; tmp_e [ 20 ] = rtB . p2q53n3lx3 [ 0 ] ; tmp_e [ 21 ]
= rtB . p2q53n3lx3 [ 1 ] ; tmp_e [ 22 ] = rtB . p2q53n3lx3 [ 2 ] ; tmp_e [ 23
] = rtB . p2q53n3lx3 [ 3 ] ; tmp_i [ 6 ] = 24 ; memcpy ( & tmp_e [ 24 ] , &
rtB . htfbbofj5g [ 0 ] , 40U * sizeof ( real_T ) ) ; tmp_i [ 7 ] = 64 ;
simulationData -> mData -> mInputValues . mN = 64 ; simulationData -> mData
-> mInputValues . mX = & tmp_e [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_i [ 0 ] ; simulationData -> mData -> mOutputs . mN = 11 ; simulationData
-> mData -> mOutputs . mX = & rtB . jgffd0qbyu [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . owtnu2yjca ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . add2lmxd0k ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
fgwyszml32 = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
fgwyszml32 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { rtB . fd53xux2au [ 0 ] = rtB . jgffd0qbyu [ 6 ] ; rtB .
fd53xux2au [ 1 ] = rtB . jgffd0qbyu [ 5 ] ; cbvgbmtzvx = rtP . PolePairs *
rtB . fd53xux2au [ 0 ] ; f4syyu2jv3 = 1.0 / rtP . PolePairs * cbvgbmtzvx ;
aemcghwbkd = muDoubleScalarAbs ( f4syyu2jv3 ) ; jjwwjmmu4v = 1.0 / rtP . Vnom
* rtB . jgffd0qbyu [ 4 ] ; lprsxvcmsv = rtP . Pmax / rtP . Tmax ; if (
aemcghwbkd > rtP . Saturation_UpperSat ) { lprsxvcmsv = rtP .
Saturation_UpperSat ; } else { if ( ! ( aemcghwbkd < lprsxvcmsv ) ) {
lprsxvcmsv = aemcghwbkd ; } } jjwwjmmu4v *= muDoubleScalarMin ( rtP . Pmax /
lprsxvcmsv , rtP . Tmax ) ; { real_T * pDataValues = ( real_T * ) rtDW .
bmcmlahdxq . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . bmcmlahdxq
. TimePtr ; int_T currTimeIndex = rtDW . jdqsqgygnx . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 3 ) ; if ( t >= pTimeValues [ 10811 ] ) { atwcoe5sz0 =
pDataValues [ 10811 ] ; } else { int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . bmcmlahdxq . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jdqsqgygnx . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { atwcoe5sz0 =
pDataValues [ currTimeIndex ] ; } else { atwcoe5sz0 = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; atwcoe5sz0 = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } } rtB . awgofo1wie = rtP .
BamocarD3CurrentControlSimpleIGBTs_Iq_max / 32787.0 * atwcoe5sz0 ; bmnlsgroez
= rtB . awgofo1wie * rtP . Zerocancellationomega_NumCoef / rtP .
Zerocancellationomega_DenCoef - f4syyu2jv3 ; if ( ( rtP . Constant_Value >
0.0 ) && ( rtDW . mp4psbhe4a <= 0 ) ) { rtDW . a0fhdil5ww = rtP .
DiscretePIController_x0 ; } rtB . peigtllerh = ( rtP .
VelocityController_Ki_w * bmnlsgroez + rtP . VelocityController_Kaw_w * rtDW
. pkiscc24z2 ) * rtP . DiscreteTimeIntegrator_gainval + rtDW . a0fhdil5ww ;
if ( rtP . VelocityController_CtrlType < rtP . CompareToConstant_const ) {
f4syyu2jv3 = rtP . VelocityController_Kp_w * bmnlsgroez + rtB . peigtllerh ;
} else { f4syyu2jv3 = ( ( rtP . VelocityController_Kp_w * bmnlsgroez + rtB .
peigtllerh ) - f4syyu2jv3 ) * rtP . Gain_Gain_mowaew3v3s ; } if ( rtP .
PMSMFieldOrientedControl_CtrlMode > rtP . Switch_Threshold ) { bmnlsgroez =
rtB . awgofo1wie ; } else { bmnlsgroez = f4syyu2jv3 ; } if ( bmnlsgroez >
jjwwjmmu4v ) { rtB . jliptc4o1p = jjwwjmmu4v ; } else { jjwwjmmu4v *= rtP .
SignChange_Gain_lyv0aexmoj ; if ( bmnlsgroez < jjwwjmmu4v ) { rtB .
jliptc4o1p = jjwwjmmu4v ; } else { rtB . jliptc4o1p = bmnlsgroez ; } } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . osxfukpdla = ( rtP .
LowPassFilterDiscreteorContinuous1_T - rtB . nxygfdvmsu [ 0 ] <= rtP .
Constant_Value_hdjajt1smx ) ; } rtB . gowqix4nxi = rtP .
LowPassFilterDiscreteorContinuous1_K * rtB . jgffd0qbyu [ 7 ] ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtDW . ion1jktvgf != 0 ) { rtDW .
j3rwl0mrcw = rtB . gowqix4nxi ; if ( rtDW . j3rwl0mrcw >= rtP .
Integrator_UpperSat ) { rtDW . j3rwl0mrcw = rtP . Integrator_UpperSat ; }
else { if ( rtDW . j3rwl0mrcw <= rtP . Integrator_LowerSat ) { rtDW .
j3rwl0mrcw = rtP . Integrator_LowerSat ; } } } if ( rtB . osxfukpdla || (
rtDW . nzmsum4nlo != 0 ) ) { rtDW . j3rwl0mrcw = rtB . gowqix4nxi ; if ( rtDW
. j3rwl0mrcw >= rtP . Integrator_UpperSat ) { rtDW . j3rwl0mrcw = rtP .
Integrator_UpperSat ; } else { if ( rtDW . j3rwl0mrcw <= rtP .
Integrator_LowerSat ) { rtDW . j3rwl0mrcw = rtP . Integrator_LowerSat ; } } }
if ( rtDW . j3rwl0mrcw >= rtP . Integrator_UpperSat ) { rtDW . j3rwl0mrcw =
rtP . Integrator_UpperSat ; } else { if ( rtDW . j3rwl0mrcw <= rtP .
Integrator_LowerSat ) { rtDW . j3rwl0mrcw = rtP . Integrator_LowerSat ; } }
if ( rtDW . j3rwl0mrcw > rtP . Saturation_UpperSat_dqapmc31wv ) { rtB .
bzxj0do0da = rtP . Saturation_UpperSat_dqapmc31wv ; } else if ( rtDW .
j3rwl0mrcw < rtP . Saturation_LowerSat ) { rtB . bzxj0do0da = rtP .
Saturation_LowerSat ; } else { rtB . bzxj0do0da = rtDW . j3rwl0mrcw ; } } {
real_T * pDataValues = ( real_T * ) rtDW . lb1loe5xrv . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . lb1loe5xrv . TimePtr ; int_T currTimeIndex
= rtDW . ihuh0z1f3c . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
lb1loe5xrv . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . ihuh0z1f3c .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { rtB . lryiwzldvm = pDataValues [ currTimeIndex ] ; } else { rtB .
lryiwzldvm = pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2
- t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T
TimeIndex = currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues
[ TimeIndex + 1 ] ; rtB . lryiwzldvm = ( real_T ) rtInterpolate ( d1 , d2 ,
f1 , f2 ) ; pDataValues += numPoints ; } } } rtB . brwfgw30z4 = rtP .
rads2rpm_Gain * rtB . jgffd0qbyu [ 6 ] ; { real_T * pDataValues = ( real_T *
) rtDW . a5wupdvues . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
a5wupdvues . TimePtr ; int_T currTimeIndex = rtDW . nyjzi2qth2 . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . a5wupdvues . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . nyjzi2qth2 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . bivredyivg =
pDataValues [ currTimeIndex ] ; } else { rtB . bivredyivg = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . bivredyivg = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . curiaxnp04 = rtB . jliptc4o1p - rtB .
jgffd0qbyu [ 7 ] ; jjwwjmmu4v = rtB . awgofo1wie - rtB . jgffd0qbyu [ 6 ] ;
rtB . agyku0cq3i = rtP . rads2rpm_Gain_fcqolhm04o * jjwwjmmu4v ; if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( rtP . Constant_Value_ds3lzjlnhg >= rtP
. Switch_Threshold_pvvjocw1io ) { rtB . nfslrcdtc1 [ 0 ] = rtP . idRef_Value
; rtB . nfslrcdtc1 [ 1 ] = 2.0 / ( 3.0 * rtP . PolePairs * rtP . PM ) * rtB .
jliptc4o1p ; } else { aemcghwbkd *= rtP . radsrpm_Gain ; bpIndices [ 0U ] =
plook_binx ( aemcghwbkd , rtP . LookupTableidreference_bp01Data , 1U , &
jjwwjmmu4v ) ; bxb5nw013c [ 0U ] = jjwwjmmu4v ; bpIndices [ 1U ] = plook_binx
( rtB . jliptc4o1p , rtP . LookupTableidreference_bp02Data , 2U , &
jjwwjmmu4v ) ; bxb5nw013c [ 1U ] = jjwwjmmu4v ; bpIndices [ 2U ] = plook_binx
( rtB . jgffd0qbyu [ 4 ] , rtP . LookupTableidreference_bp03Data , 1U , &
jjwwjmmu4v ) ; bxb5nw013c [ 2U ] = jjwwjmmu4v ; rtB . nfslrcdtc1 [ 0 ] =
intrp3d_l_pw ( bpIndices , bxb5nw013c , rtP .
LookupTableidreference_tableData , rtP . LookupTableidreference_dimSizes ) ;
bpIndices_p [ 0U ] = plook_binx ( aemcghwbkd , rtP .
LookupTableiqreference_bp01Data , 1U , & jjwwjmmu4v ) ; fractions [ 0U ] =
jjwwjmmu4v ; bpIndices_p [ 1U ] = plook_binx ( rtB . jliptc4o1p , rtP .
LookupTableiqreference_bp02Data , 2U , & jjwwjmmu4v ) ; fractions [ 1U ] =
jjwwjmmu4v ; bpIndices_p [ 2U ] = plook_binx ( rtB . jgffd0qbyu [ 4 ] , rtP .
LookupTableiqreference_bp03Data , 1U , & jjwwjmmu4v ) ; fractions [ 2U ] =
jjwwjmmu4v ; rtB . nfslrcdtc1 [ 1 ] = intrp3d_l_pw ( bpIndices_p , fractions
, rtP . LookupTableiqreference_tableData , rtP .
LookupTableiqreference_dimSizes ) ; } rtB . dady3mgvo3 [ 0 ] = rtB .
jgffd0qbyu [ 1 ] ; rtB . dady3mgvo3 [ 1 ] = rtB . jgffd0qbyu [ 2 ] ; rtB .
dady3mgvo3 [ 2 ] = rtB . jgffd0qbyu [ 3 ] ; exqmocqk50 = muDoubleScalarMod (
rtP . PolePairs * rtB . fd53xux2au [ 1 ] , rtP . upi_Value ) ; bxb5nw013c [ 0
] = ( ( muDoubleScalarSin ( exqmocqk50 - 2.0943951023931953 ) * rtB .
dady3mgvo3 [ 1 ] + muDoubleScalarSin ( exqmocqk50 ) * rtB . dady3mgvo3 [ 0 ]
) + muDoubleScalarSin ( exqmocqk50 + 2.0943951023931953 ) * rtB . dady3mgvo3
[ 2 ] ) * rtP . Gain1_Gain_pbhnfhtcjb ; bxb5nw013c [ 1 ] = ( (
muDoubleScalarCos ( exqmocqk50 - 2.0943951023931953 ) * rtB . dady3mgvo3 [ 1
] + muDoubleScalarCos ( exqmocqk50 ) * rtB . dady3mgvo3 [ 0 ] ) +
muDoubleScalarCos ( exqmocqk50 + 2.0943951023931953 ) * rtB . dady3mgvo3 [ 2
] ) * rtP . Gain1_Gain_pbhnfhtcjb ; rtB . ir0w0w2ryn [ 0 ] = rtB . nfslrcdtc1
[ 0 ] - bxb5nw013c [ 0 ] ; rtB . ir0w0w2ryn [ 1 ] = rtB . nfslrcdtc1 [ 1 ] -
bxb5nw013c [ 1 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { aemcghwbkd = rtP
. Gain_Gain_mm5o1ytrdh * rtB . jgffd0qbyu [ 4 ] ; if ( rtP .
PMSMCurrentControllerwithPreControl_ActFF > rtP . Switch_Threshold_cfzg3c43m1
) { cwnxmb4pmy_idx_0 = bxb5nw013c [ 1 ] * look2_binlcpw ( bxb5nw013c [ 0 ] ,
bxb5nw013c [ 1 ] , rtP . PMSMCurrentControllerwithPreControl_idVect , rtP .
PMSMCurrentControllerwithPreControl_iqVect , rtP .
PMSMCurrentControllerwithPreControl_LqMatrix , rtP . uDLookupTableLq_maxIndex
, 2U ) * cbvgbmtzvx ; jjwwjmmu4v = bxb5nw013c [ 0 ] * look2_binlcapw (
bxb5nw013c [ 0 ] , bxb5nw013c [ 1 ] , rtP .
PMSMCurrentControllerwithPreControl_idVect , rtP .
PMSMCurrentControllerwithPreControl_iqVect , rtP .
PMSMCurrentControllerwithPreControl_LdMatrix , rtP . uDLookupTableLd_maxIndex
, 2U ) * cbvgbmtzvx + look2_binlcpw ( bxb5nw013c [ 0 ] , bxb5nw013c [ 1 ] ,
rtP . PMSMCurrentControllerwithPreControl_idVect , rtP .
PMSMCurrentControllerwithPreControl_iqVect , rtP .
PMSMCurrentControllerwithPreControl_psimMatrix , rtP .
uDLookupTablePsim_maxIndex , 2U ) * cbvgbmtzvx ; } else { cwnxmb4pmy_idx_0 =
rtP . Zerovector_Value [ 0 ] ; jjwwjmmu4v = rtP . Zerovector_Value [ 1 ] ; }
cbvgbmtzvx = rtP . Zerocancellationid_NumCoef * rtDW . pu4oqz11fc -
bxb5nw013c [ 0 ] ; if ( ( rtP . Constant_Value_ptiyqv32aa > 0.0 ) && ( rtDW .
c3m5srkyxf <= 0 ) ) { rtDW . f0e1nwzdr2 = rtP . PIid_x0 ; } rtB . g4hhoqvsau
= ( rtP . BamocarD3CurrentControlSimpleIGBTs_Ki_id * cbvgbmtzvx + rtP .
BamocarD3CurrentControlSimpleIGBTs_Kaw_id * rtDW . ivskkakmbt ) * rtP .
DiscreteTimeIntegrator_gainval_b24mq5fxf3 + rtDW . f0e1nwzdr2 ; lprsxvcmsv =
rtP . Zerocancellationiq_NumCoef * rtDW . jxppjelsgv - bxb5nw013c [ 1 ] ; if
( ( rtP . Constant_Value_ptiyqv32aa > 0.0 ) && ( rtDW . nmn04rxwtx <= 0 ) ) {
rtDW . kknanrlagz = rtP . PIiq_x0 ; } rtB . nx0dswm5xd = ( rtP .
BamocarD3CurrentControlSimpleIGBTs_Ki_iq * lprsxvcmsv + rtP .
BamocarD3CurrentControlSimpleIGBTs_Kaw_iq * rtDW . nbn0lw4fde ) * rtP .
DiscreteTimeIntegrator_gainval_cbgt3mkwpb + rtDW . kknanrlagz ;
cwnxmb4pmy_idx_0 = ( rtP . BamocarD3CurrentControlSimpleIGBTs_Kp_id *
cbvgbmtzvx + rtB . g4hhoqvsau ) - cwnxmb4pmy_idx_0 ; cbvgbmtzvx = ( rtP .
BamocarD3CurrentControlSimpleIGBTs_Kp_iq * lprsxvcmsv + rtB . nx0dswm5xd ) +
jjwwjmmu4v ; if ( rtP . dqVoltageLimiter_AxisPrio == rtP .
CompareToConstant_const_kknxiqu21y ) { lprsxvcmsv = cwnxmb4pmy_idx_0 ; } else
{ lprsxvcmsv = cbvgbmtzvx ; } if ( lprsxvcmsv > aemcghwbkd ) { lprsxvcmsv =
aemcghwbkd ; } else { jjwwjmmu4v = rtP . SignChange_Gain * aemcghwbkd ; if (
lprsxvcmsv < jjwwjmmu4v ) { lprsxvcmsv = jjwwjmmu4v ; } } bmnlsgroez =
aemcghwbkd * aemcghwbkd - lprsxvcmsv * lprsxvcmsv ; if ( ssIsMajorTimeStep (
rtS ) ) { if ( rtDW . psod05d2dh != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . psod05d2dh = 0 ;
} jjwwjmmu4v = muDoubleScalarSqrt ( bmnlsgroez ) ; } else if ( bmnlsgroez <
0.0 ) { jjwwjmmu4v = - muDoubleScalarSqrt ( muDoubleScalarAbs ( bmnlsgroez )
) ; rtDW . psod05d2dh = 1 ; } else { jjwwjmmu4v = muDoubleScalarSqrt (
bmnlsgroez ) ; } if ( rtP . dqVoltageLimiter_AxisPrio == rtP .
CompareToConstant_const_g00dogawkd ) { bmnlsgroez = cbvgbmtzvx ; } else {
bmnlsgroez = cwnxmb4pmy_idx_0 ; } if ( ! ( bmnlsgroez > jjwwjmmu4v ) ) {
jjwwjmmu4v *= rtP . SignChange_Gain_c1c2mpblgd ; if ( ! ( bmnlsgroez <
jjwwjmmu4v ) ) { jjwwjmmu4v = bmnlsgroez ; } } bmnlsgroez = cwnxmb4pmy_idx_0
* cwnxmb4pmy_idx_0 + cbvgbmtzvx * cbvgbmtzvx ; if ( ssIsMajorTimeStep ( rtS )
) { if ( rtDW . dex1dzjvg2 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . dex1dzjvg2 = 0 ;
} jvu20sruxe = muDoubleScalarSqrt ( bmnlsgroez ) ; } else if ( bmnlsgroez <
0.0 ) { jvu20sruxe = - muDoubleScalarSqrt ( muDoubleScalarAbs ( bmnlsgroez )
) ; rtDW . dex1dzjvg2 = 1 ; } else { jvu20sruxe = muDoubleScalarSqrt (
bmnlsgroez ) ; } if ( ! ( jvu20sruxe > rtP . Switch_Threshold_lembmp0brf ) )
{ jvu20sruxe = rtP . Constant1_Value ; } switch ( ( int32_T ) rtP .
dqVoltageLimiter_AxisPrio ) { case 1 : bmnlsgroez = jjwwjmmu4v ; break ; case
2 : bmnlsgroez = lprsxvcmsv ; break ; default : bmnlsgroez = aemcghwbkd *
muDoubleScalarAbs ( cbvgbmtzvx ) / jvu20sruxe ; if ( ! ( cbvgbmtzvx >
bmnlsgroez ) ) { bmnlsgroez *= rtP . Gain_Gain ; if ( ! ( cbvgbmtzvx <
bmnlsgroez ) ) { bmnlsgroez = cbvgbmtzvx ; } } break ; } rtB . ddsvixvqjq =
bmnlsgroez - cbvgbmtzvx ; switch ( ( int32_T ) rtP .
dqVoltageLimiter_AxisPrio ) { case 1 : break ; case 2 : lprsxvcmsv =
jjwwjmmu4v ; break ; default : lprsxvcmsv = aemcghwbkd * muDoubleScalarAbs (
cwnxmb4pmy_idx_0 ) / jvu20sruxe ; if ( ! ( cwnxmb4pmy_idx_0 > lprsxvcmsv ) )
{ aemcghwbkd = rtP . Gain1_Gain * lprsxvcmsv ; if ( cwnxmb4pmy_idx_0 <
aemcghwbkd ) { lprsxvcmsv = aemcghwbkd ; } else { lprsxvcmsv =
cwnxmb4pmy_idx_0 ; } } break ; } rtB . a05qg3helq = lprsxvcmsv -
cwnxmb4pmy_idx_0 ; aemcghwbkd = rtB . jgffd0qbyu [ 4 ] ; if ( aemcghwbkd >=
rtP . BamocarD3CurrentControlSimpleIGBTs_Vdc_on ) { rtDW . j5wztzvpay = true
; } else { if ( aemcghwbkd <= 0.5 * rtP .
BamocarD3CurrentControlSimpleIGBTs_Vdc_on ) { rtDW . j5wztzvpay = false ; } }
if ( rtDW . j5wztzvpay ) { rtB . ki1flhf3vw = rtP . Relay_YOn ; } else { rtB
. ki1flhf3vw = rtP . Relay_YOff ; } rtB . kxinowgu3f = rtB . jliptc4o1p -
f4syyu2jv3 ; ez3ia5q2as [ 0 ] = ( ( muDoubleScalarSin ( exqmocqk50 ) *
lprsxvcmsv + muDoubleScalarCos ( exqmocqk50 ) * bmnlsgroez ) + rtP .
Constant_Value_da4qccz0gh ) * rtP . Gain1_Gain_iw4zxuxmnh ; ez3ia5q2as [ 1 ]
= ( ( muDoubleScalarSin ( exqmocqk50 - 2.0943951023931953 ) * lprsxvcmsv +
muDoubleScalarCos ( exqmocqk50 - 2.0943951023931953 ) * bmnlsgroez ) + rtP .
Constant_Value_da4qccz0gh ) * rtP . Gain1_Gain_iw4zxuxmnh ; ez3ia5q2as [ 2 ]
= ( ( muDoubleScalarSin ( exqmocqk50 + 2.0943951023931953 ) * lprsxvcmsv +
muDoubleScalarCos ( exqmocqk50 + 2.0943951023931953 ) * bmnlsgroez ) + rtP .
Constant_Value_da4qccz0gh ) * rtP . Gain1_Gain_iw4zxuxmnh ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . kvpgre2043 = ( rtDW . dvwxmmrgju >
rtB . of0ejkckjg ) ; if ( rtDW . d5gnfdhmzj ) { rtDW . d5gnfdhmzj = false ;
rtB . pv1wroaxz3 = rtP . Initial_Value ; } else { rtB . pv1wroaxz3 = rtDW .
dvwxmmrgju - rtP . Constant3_Value ; } if ( rtB . kvpgre2043 && ( rtDW .
gzayw0kzg2 <= 0 ) ) { rtDW . dvwxmmrgju = rtB . pv1wroaxz3 ; } io2kxcvz2p =
rtDW . dvwxmmrgju ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . ixbetos54z [
0 ] = rtDW . mnsbhrjb31 [ 0 ] ; rtB . bdl5rojgaf [ 0 ] = rtDW . f3pxwtzu1c [
0 ] ; rtB . ixbetos54z [ 1 ] = rtDW . mnsbhrjb31 [ 1 ] ; rtB . bdl5rojgaf [ 1
] = rtDW . f3pxwtzu1c [ 1 ] ; rtB . ixbetos54z [ 2 ] = rtDW . mnsbhrjb31 [ 2
] ; rtB . bdl5rojgaf [ 2 ] = rtDW . f3pxwtzu1c [ 2 ] ; } } if ( ssIsSampleHit
( rtS , 3 , 0 ) ) { rtB . chsbdd2oex = rtB . jgffd0qbyu [ 4 ] ; if ( rtB .
chsbdd2oex > rtP . avoiddivisionby0_UpperSat ) { cbvgbmtzvx = rtP .
avoiddivisionby0_UpperSat ; } else if ( rtB . chsbdd2oex < rtP .
avoiddivisionby0_LowerSat ) { cbvgbmtzvx = rtP . avoiddivisionby0_LowerSat ;
} else { cbvgbmtzvx = rtB . chsbdd2oex ; } f4syyu2jv3 = 1.0 / rtP .
SwitchingTimeCalculation_fsw ; exqmocqk50 = 0.5 * f4syyu2jv3 ; aemcghwbkd =
ez3ia5q2as [ 0 ] * exqmocqk50 / cbvgbmtzvx ; cwnxmb4pmy_idx_0 = ez3ia5q2as [
1 ] * exqmocqk50 / cbvgbmtzvx ; cbvgbmtzvx = ez3ia5q2as [ 2 ] * exqmocqk50 /
cbvgbmtzvx ; ez3ia5q2as [ 0 ] = aemcghwbkd ; ez3ia5q2as [ 1 ] =
cwnxmb4pmy_idx_0 ; ez3ia5q2as [ 2 ] = cbvgbmtzvx ; if ( ! muDoubleScalarIsNaN
( aemcghwbkd ) ) { idx = 1 ; } else { idx = 0 ; i = 2 ; exitg1 = false ;
while ( ( ! exitg1 ) && ( i < 4 ) ) { if ( ! muDoubleScalarIsNaN ( ez3ia5q2as
[ i - 1 ] ) ) { idx = i ; exitg1 = true ; } else { i ++ ; } } } if ( idx == 0
) { lprsxvcmsv = aemcghwbkd ; } else { lprsxvcmsv = ez3ia5q2as [ idx - 1 ] ;
while ( idx + 1 < 4 ) { if ( lprsxvcmsv < ez3ia5q2as [ idx ] ) { lprsxvcmsv =
ez3ia5q2as [ idx ] ; } idx ++ ; } } ez3ia5q2as [ 0 ] = aemcghwbkd ;
ez3ia5q2as [ 1 ] = cwnxmb4pmy_idx_0 ; ez3ia5q2as [ 2 ] = cbvgbmtzvx ; if ( !
muDoubleScalarIsNaN ( aemcghwbkd ) ) { i = 1 ; } else { i = 0 ; idx = 2 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( idx < 4 ) ) { if ( !
muDoubleScalarIsNaN ( ez3ia5q2as [ idx - 1 ] ) ) { i = idx ; exitg1 = true ;
} else { idx ++ ; } } } if ( i == 0 ) { jjwwjmmu4v = aemcghwbkd ; } else {
jjwwjmmu4v = ez3ia5q2as [ i - 1 ] ; while ( i + 1 < 4 ) { if ( jjwwjmmu4v >
ez3ia5q2as [ i ] ) { jjwwjmmu4v = ez3ia5q2as [ i ] ; } i ++ ; } } switch ( (
int32_T ) rtP . SwitchingTimeCalculation_PWM ) { case 1 : Toffset = 0.5 *
exqmocqk50 ; break ; case 2 : Toffset = ( exqmocqk50 - ( lprsxvcmsv -
jjwwjmmu4v ) ) / 2.0 - jjwwjmmu4v ; break ; case 3 : if ( jjwwjmmu4v +
lprsxvcmsv >= 0.0 ) { Toffset = exqmocqk50 - lprsxvcmsv ; } else { Toffset =
- jjwwjmmu4v ; } break ; case 4 : if ( ( aemcghwbkd == lprsxvcmsv ) && (
cbvgbmtzvx == jjwwjmmu4v ) ) { Toffset = exqmocqk50 - lprsxvcmsv ; } else if
( ( cwnxmb4pmy_idx_0 == lprsxvcmsv ) && ( cbvgbmtzvx == jjwwjmmu4v ) ) {
Toffset = - jjwwjmmu4v ; } else if ( ( cwnxmb4pmy_idx_0 == lprsxvcmsv ) && (
aemcghwbkd == jjwwjmmu4v ) ) { Toffset = exqmocqk50 - lprsxvcmsv ; } else if
( ( cbvgbmtzvx == lprsxvcmsv ) && ( aemcghwbkd == jjwwjmmu4v ) ) { Toffset =
- jjwwjmmu4v ; } else if ( ( cbvgbmtzvx == lprsxvcmsv ) && ( cwnxmb4pmy_idx_0
== jjwwjmmu4v ) ) { Toffset = exqmocqk50 - lprsxvcmsv ; } else { if ( (
aemcghwbkd == lprsxvcmsv ) && ( cwnxmb4pmy_idx_0 == jjwwjmmu4v ) ) { Toffset
= - jjwwjmmu4v ; } } break ; case 5 : if ( ( aemcghwbkd == lprsxvcmsv ) && (
cbvgbmtzvx == jjwwjmmu4v ) ) { Toffset = - jjwwjmmu4v ; } else if ( (
cwnxmb4pmy_idx_0 == lprsxvcmsv ) && ( cbvgbmtzvx == jjwwjmmu4v ) ) { Toffset
= exqmocqk50 - lprsxvcmsv ; } else if ( ( cwnxmb4pmy_idx_0 == lprsxvcmsv ) &&
( aemcghwbkd == jjwwjmmu4v ) ) { Toffset = - jjwwjmmu4v ; } else if ( (
cbvgbmtzvx == lprsxvcmsv ) && ( aemcghwbkd == jjwwjmmu4v ) ) { Toffset =
exqmocqk50 - lprsxvcmsv ; } else if ( ( cbvgbmtzvx == lprsxvcmsv ) && (
cwnxmb4pmy_idx_0 == jjwwjmmu4v ) ) { Toffset = - jjwwjmmu4v ; } else { if ( (
aemcghwbkd == lprsxvcmsv ) && ( cwnxmb4pmy_idx_0 == jjwwjmmu4v ) ) { Toffset
= exqmocqk50 - lprsxvcmsv ; } } break ; case 6 : if ( jjwwjmmu4v + lprsxvcmsv
>= 0.0 ) { Toffset = - jjwwjmmu4v ; } else { Toffset = exqmocqk50 -
lprsxvcmsv ; } break ; case 7 : Toffset = exqmocqk50 - lprsxvcmsv ; break ;
case 8 : Toffset = - jjwwjmmu4v ; break ; } aemcghwbkd += Toffset ;
cwnxmb4pmy_idx_0 += Toffset ; jjwwjmmu4v = cbvgbmtzvx + Toffset ; Toffset =
exqmocqk50 - aemcghwbkd ; if ( Toffset < 0.0 ) { Toffset = 0.0 ; } else { if
( Toffset > exqmocqk50 ) { Toffset = exqmocqk50 ; } } cbvgbmtzvx = exqmocqk50
- cwnxmb4pmy_idx_0 ; if ( cbvgbmtzvx < 0.0 ) { cbvgbmtzvx = 0.0 ; } else { if
( cbvgbmtzvx > exqmocqk50 ) { cbvgbmtzvx = exqmocqk50 ; } } lprsxvcmsv =
exqmocqk50 - jjwwjmmu4v ; if ( lprsxvcmsv < 0.0 ) { lprsxvcmsv = 0.0 ; } else
{ if ( lprsxvcmsv > exqmocqk50 ) { lprsxvcmsv = exqmocqk50 ; } } aemcghwbkd
+= exqmocqk50 ; if ( aemcghwbkd < exqmocqk50 ) { aemcghwbkd = exqmocqk50 ; }
else { if ( aemcghwbkd > f4syyu2jv3 ) { aemcghwbkd = f4syyu2jv3 ; } }
cwnxmb4pmy_idx_0 += exqmocqk50 ; if ( cwnxmb4pmy_idx_0 < exqmocqk50 ) {
cwnxmb4pmy_idx_0 = exqmocqk50 ; } else { if ( cwnxmb4pmy_idx_0 > f4syyu2jv3 )
{ cwnxmb4pmy_idx_0 = f4syyu2jv3 ; } } jjwwjmmu4v += exqmocqk50 ; if (
jjwwjmmu4v < exqmocqk50 ) { jjwwjmmu4v = exqmocqk50 ; } else { if (
jjwwjmmu4v > f4syyu2jv3 ) { jjwwjmmu4v = f4syyu2jv3 ; } } rtB . pgob4ywz5j [
0 ] = Toffset ; rtB . pgob4ywz5j [ 1 ] = cbvgbmtzvx ; rtB . pgob4ywz5j [ 2 ]
= lprsxvcmsv ; rtB . cgxj4ejtx2 [ 0 ] = aemcghwbkd ; rtB . cgxj4ejtx2 [ 1 ] =
cwnxmb4pmy_idx_0 ; rtB . cgxj4ejtx2 [ 2 ] = jjwwjmmu4v ; } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . psnme1bdvi =
rtDW . iqotqnp13e ; } if ( rtB . psnme1bdvi > rtP . Switch1_Threshold ) {
fgwyszml32 = ( io2kxcvz2p >= rtB . ixbetos54z [ 0 ] ) ^ ( io2kxcvz2p >= rtB .
bdl5rojgaf [ 0 ] ) ; lp3shp45zx_idx_0 = ! fgwyszml32 ; ckdmbezvfh_idx_0 =
fgwyszml32 ; fgwyszml32 = ( io2kxcvz2p >= rtB . ixbetos54z [ 1 ] ) ^ (
io2kxcvz2p >= rtB . bdl5rojgaf [ 1 ] ) ; lp3shp45zx_idx_1 = ! fgwyszml32 ;
ckdmbezvfh_idx_1 = fgwyszml32 ; fgwyszml32 = ( io2kxcvz2p >= rtB . ixbetos54z
[ 2 ] ) ^ ( io2kxcvz2p >= rtB . bdl5rojgaf [ 2 ] ) ; rtB . hijwpfoqc4 [ 0 ] =
ckdmbezvfh_idx_0 ; rtB . hijwpfoqc4 [ 1 ] = lp3shp45zx_idx_0 ; rtB .
hijwpfoqc4 [ 2 ] = ckdmbezvfh_idx_1 ; rtB . hijwpfoqc4 [ 3 ] =
lp3shp45zx_idx_1 ; rtB . hijwpfoqc4 [ 4 ] = fgwyszml32 ; rtB . hijwpfoqc4 [ 5
] = ! fgwyszml32 ; } else { for ( i = 0 ; i < 6 ; i ++ ) { rtB . hijwpfoqc4 [
i ] = rtP . Zerovector_Value_n3blgurhl0 [ i ] ; } } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { io2kxcvz2p = muDoubleScalarMax ( rtB . nxygfdvmsu [ 0 ] ,
rtP . LowPassFilterDiscreteorContinuous1_T ) ; rtB . h5mzuz5mua = ( real_T )
( io2kxcvz2p == 0.0 ) * 2.2204460492503131e-16 + io2kxcvz2p ; } rtB .
cbz2xft2xa = 1.0 / rtB . h5mzuz5mua * ( rtB . gowqix4nxi - rtB . bzxj0do0da )
; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID4 ( int_T tid ) { rtB .
of0ejkckjg = rtP . Constant3_Value + rtP . Bias_Bias ; UNUSED_PARAMETER ( tid
) ; } void MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; int32_T i ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0
; i < 6 ; i ++ ) { rtDW . ijtyhzdpgc [ i ] = rtB . hijwpfoqc4 [ i ] ; } }
simulationData = ( NeslSimulationData * ) rtDW . fdk2esvn1i ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gjqhhyie2z ; simulationData -> mData ->
mModeVector . mN = 12 ; simulationData -> mData -> mModeVector . mX = & rtDW
. h5of2gf1by [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
nyv1k2xnif [ 0 ] ; tmp_p [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp_p [ 2 ] = rtB .
nyv1k2xnif [ 2 ] ; tmp_p [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp_p [ 5 ] = rtB . ntbdtueknr [ 1 ] ;
tmp_p [ 6 ] = rtB . ntbdtueknr [ 2 ] ; tmp_p [ 7 ] = rtB . ntbdtueknr [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp_p [ 9 ] = rtB .
pwkalunkv1 [ 1 ] ; tmp_p [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp_p [ 11 ] = rtB
. pwkalunkv1 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . f1ht3jmk15 [ 0 ]
; tmp_p [ 13 ] = rtB . f1ht3jmk15 [ 1 ] ; tmp_p [ 14 ] = rtB . f1ht3jmk15 [ 2
] ; tmp_p [ 15 ] = rtB . f1ht3jmk15 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . amrd3bzce3 [ 0 ] ; tmp_p [ 17 ] = rtB . amrd3bzce3 [ 1 ] ; tmp_p [ 18 ]
= rtB . amrd3bzce3 [ 2 ] ; tmp_p [ 19 ] = rtB . amrd3bzce3 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . p2q53n3lx3 [ 0 ] ; tmp_p [ 21 ] = rtB .
p2q53n3lx3 [ 1 ] ; tmp_p [ 22 ] = rtB . p2q53n3lx3 [ 2 ] ; tmp_p [ 23 ] = rtB
. p2q53n3lx3 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fyolw0a32b ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtDW . pkiscc24z2 = rtB . kxinowgu3f ;
rtDW . a0fhdil5ww = rtB . peigtllerh ; if ( rtP . Constant_Value > 0.0 ) {
rtDW . mp4psbhe4a = 1 ; } else if ( rtP . Constant_Value < 0.0 ) { rtDW .
mp4psbhe4a = - 1 ; } else if ( rtP . Constant_Value == 0.0 ) { rtDW .
mp4psbhe4a = 0 ; } else { rtDW . mp4psbhe4a = 2 ; } rtDW . pu4oqz11fc = ( rtB
. nfslrcdtc1 [ 0 ] - rtP . Zerocancellationid_DenCoef [ 1 ] * rtDW .
pu4oqz11fc ) / rtP . Zerocancellationid_DenCoef [ 0 ] ; rtDW . ivskkakmbt =
rtB . a05qg3helq ; rtDW . f0e1nwzdr2 = rtB . g4hhoqvsau ; if ( rtP .
Constant_Value_ptiyqv32aa > 0.0 ) { rtDW . c3m5srkyxf = 1 ; rtDW . nmn04rxwtx
= 1 ; } else { if ( rtP . Constant_Value_ptiyqv32aa < 0.0 ) { rtDW .
c3m5srkyxf = - 1 ; } else if ( rtP . Constant_Value_ptiyqv32aa == 0.0 ) {
rtDW . c3m5srkyxf = 0 ; } else { rtDW . c3m5srkyxf = 2 ; } if ( rtP .
Constant_Value_ptiyqv32aa < 0.0 ) { rtDW . nmn04rxwtx = - 1 ; } else if ( rtP
. Constant_Value_ptiyqv32aa == 0.0 ) { rtDW . nmn04rxwtx = 0 ; } else { rtDW
. nmn04rxwtx = 2 ; } } rtDW . jxppjelsgv = ( rtB . nfslrcdtc1 [ 1 ] - rtP .
Zerocancellationiq_DenCoef [ 1 ] * rtDW . jxppjelsgv ) / rtP .
Zerocancellationiq_DenCoef [ 0 ] ; rtDW . nbn0lw4fde = rtB . ddsvixvqjq ;
rtDW . kknanrlagz = rtB . nx0dswm5xd ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ rtDW . ion1jktvgf = 0U ; rtDW . j3rwl0mrcw += rtP . Integrator_gainval *
rtB . cbz2xft2xa ; if ( rtDW . j3rwl0mrcw >= rtP . Integrator_UpperSat ) {
rtDW . j3rwl0mrcw = rtP . Integrator_UpperSat ; } else { if ( rtDW .
j3rwl0mrcw <= rtP . Integrator_LowerSat ) { rtDW . j3rwl0mrcw = rtP .
Integrator_LowerSat ; } } rtDW . nzmsum4nlo = ( int8_T ) rtB . osxfukpdla ;
rtDW . dvwxmmrgju += rtP . DiscreteTimeIntegrator1_gainval * rtP .
Constant2_Value ; rtDW . gzayw0kzg2 = ( int8_T ) rtB . kvpgre2043 ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { rtDW . mnsbhrjb31 [ 0 ] = rtB . pgob4ywz5j
[ 0 ] ; rtDW . f3pxwtzu1c [ 0 ] = rtB . cgxj4ejtx2 [ 0 ] ; rtDW . mnsbhrjb31
[ 1 ] = rtB . pgob4ywz5j [ 1 ] ; rtDW . f3pxwtzu1c [ 1 ] = rtB . cgxj4ejtx2 [
1 ] ; rtDW . mnsbhrjb31 [ 2 ] = rtB . pgob4ywz5j [ 2 ] ; rtDW . f3pxwtzu1c [
2 ] = rtB . cgxj4ejtx2 [ 2 ] ; rtDW . iqotqnp13e = rtB . ki1flhf3vw ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = (
NeslSimulationData * ) rtDW . fdk2esvn1i ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gjqhhyie2z ; simulationData -> mData ->
mModeVector . mN = 12 ; simulationData -> mData -> mModeVector . mX = & rtDW
. h5of2gf1by [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
nyv1k2xnif [ 0 ] ; tmp_p [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp_p [ 2 ] = rtB .
nyv1k2xnif [ 2 ] ; tmp_p [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp_p [ 5 ] = rtB . ntbdtueknr [ 1 ] ;
tmp_p [ 6 ] = rtB . ntbdtueknr [ 2 ] ; tmp_p [ 7 ] = rtB . ntbdtueknr [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp_p [ 9 ] = rtB .
pwkalunkv1 [ 1 ] ; tmp_p [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp_p [ 11 ] = rtB
. pwkalunkv1 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . f1ht3jmk15 [ 0 ]
; tmp_p [ 13 ] = rtB . f1ht3jmk15 [ 1 ] ; tmp_p [ 14 ] = rtB . f1ht3jmk15 [ 2
] ; tmp_p [ 15 ] = rtB . f1ht3jmk15 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . amrd3bzce3 [ 0 ] ; tmp_p [ 17 ] = rtB . amrd3bzce3 [ 1 ] ; tmp_p [ 18 ]
= rtB . amrd3bzce3 [ 2 ] ; tmp_p [ 19 ] = rtB . amrd3bzce3 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . p2q53n3lx3 [ 0 ] ; tmp_p [ 21 ] = rtB .
p2q53n3lx3 [ 1 ] ; tmp_p [ 22 ] = rtB . p2q53n3lx3 [ 2 ] ; tmp_p [ 23 ] = rtB
. p2q53n3lx3 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> gpl4yklfp5 [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fyolw0a32b ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. fdk2esvn1i ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX
= & rtX . gpl4yklfp5 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . gjqhhyie2z ;
simulationData -> mData -> mModeVector . mN = 12 ; simulationData -> mData ->
mModeVector . mX = & rtDW . h5of2gf1by [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [
0 ] = 0 ; tmp_p [ 0 ] = rtB . nyv1k2xnif [ 0 ] ; tmp_p [ 1 ] = rtB .
nyv1k2xnif [ 1 ] ; tmp_p [ 2 ] = rtB . nyv1k2xnif [ 2 ] ; tmp_p [ 3 ] = rtB .
nyv1k2xnif [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ntbdtueknr [ 0 ] ;
tmp_p [ 5 ] = rtB . ntbdtueknr [ 1 ] ; tmp_p [ 6 ] = rtB . ntbdtueknr [ 2 ] ;
tmp_p [ 7 ] = rtB . ntbdtueknr [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
pwkalunkv1 [ 0 ] ; tmp_p [ 9 ] = rtB . pwkalunkv1 [ 1 ] ; tmp_p [ 10 ] = rtB
. pwkalunkv1 [ 2 ] ; tmp_p [ 11 ] = rtB . pwkalunkv1 [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . f1ht3jmk15 [ 0 ] ; tmp_p [ 13 ] = rtB . f1ht3jmk15 [ 1
] ; tmp_p [ 14 ] = rtB . f1ht3jmk15 [ 2 ] ; tmp_p [ 15 ] = rtB . f1ht3jmk15 [
3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . amrd3bzce3 [ 0 ] ; tmp_p [ 17 ]
= rtB . amrd3bzce3 [ 1 ] ; tmp_p [ 18 ] = rtB . amrd3bzce3 [ 2 ] ; tmp_p [ 19
] = rtB . amrd3bzce3 [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB .
p2q53n3lx3 [ 0 ] ; tmp_p [ 21 ] = rtB . p2q53n3lx3 [ 1 ] ; tmp_p [ 22 ] = rtB
. p2q53n3lx3 [ 2 ] ; tmp_p [ 23 ] = rtB . p2q53n3lx3 [ 3 ] ; tmp_e [ 6 ] = 24
; simulationData -> mData -> mInputValues . mN = 24 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
fyolw0a32b ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. gla2ikd2o3 , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } } void MdlForcingFunction ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = (
NeslSimulationData * ) rtDW . fdk2esvn1i ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gjqhhyie2z ; simulationData -> mData ->
mModeVector . mN = 12 ; simulationData -> mData -> mModeVector . mX = & rtDW
. h5of2gf1by [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
nyv1k2xnif [ 0 ] ; tmp_p [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp_p [ 2 ] = rtB .
nyv1k2xnif [ 2 ] ; tmp_p [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp_p [ 5 ] = rtB . ntbdtueknr [ 1 ] ;
tmp_p [ 6 ] = rtB . ntbdtueknr [ 2 ] ; tmp_p [ 7 ] = rtB . ntbdtueknr [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp_p [ 9 ] = rtB .
pwkalunkv1 [ 1 ] ; tmp_p [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp_p [ 11 ] = rtB
. pwkalunkv1 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . f1ht3jmk15 [ 0 ]
; tmp_p [ 13 ] = rtB . f1ht3jmk15 [ 1 ] ; tmp_p [ 14 ] = rtB . f1ht3jmk15 [ 2
] ; tmp_p [ 15 ] = rtB . f1ht3jmk15 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . amrd3bzce3 [ 0 ] ; tmp_p [ 17 ] = rtB . amrd3bzce3 [ 1 ] ; tmp_p [ 18 ]
= rtB . amrd3bzce3 [ 2 ] ; tmp_p [ 19 ] = rtB . amrd3bzce3 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . p2q53n3lx3 [ 0 ] ; tmp_p [ 21 ] = rtB .
p2q53n3lx3 [ 1 ] ; tmp_p [ 22 ] = rtB . p2q53n3lx3 [ 2 ] ; tmp_p [ 23 ] = rtB
. p2q53n3lx3 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> gpl4yklfp5 [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fyolw0a32b ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T
tmp_e [ 7 ] ; real_T * tmp_i ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_m ; char * msg ;
simulationData = ( NeslSimulationData * ) rtDW . fdk2esvn1i ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . gjqhhyie2z ; simulationData -> mData ->
mModeVector . mN = 12 ; simulationData -> mData -> mModeVector . mX = & rtDW
. h5of2gf1by [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
nyv1k2xnif [ 0 ] ; tmp_p [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp_p [ 2 ] = rtB .
nyv1k2xnif [ 2 ] ; tmp_p [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp_p [ 5 ] = rtB . ntbdtueknr [ 1 ] ;
tmp_p [ 6 ] = rtB . ntbdtueknr [ 2 ] ; tmp_p [ 7 ] = rtB . ntbdtueknr [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp_p [ 9 ] = rtB .
pwkalunkv1 [ 1 ] ; tmp_p [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp_p [ 11 ] = rtB
. pwkalunkv1 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . f1ht3jmk15 [ 0 ]
; tmp_p [ 13 ] = rtB . f1ht3jmk15 [ 1 ] ; tmp_p [ 14 ] = rtB . f1ht3jmk15 [ 2
] ; tmp_p [ 15 ] = rtB . f1ht3jmk15 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . amrd3bzce3 [ 0 ] ; tmp_p [ 17 ] = rtB . amrd3bzce3 [ 1 ] ; tmp_p [ 18 ]
= rtB . amrd3bzce3 [ 2 ] ; tmp_p [ 19 ] = rtB . amrd3bzce3 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . p2q53n3lx3 [ 0 ] ; tmp_p [ 21 ] = rtB .
p2q53n3lx3 [ 1 ] ; tmp_p [ 22 ] = rtB . p2q53n3lx3 [ 2 ] ; tmp_p [ 23 ] = rtB
. p2q53n3lx3 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . hex3zemleh
) ; simulationData -> mData -> mMassMatrixPr . mN = 11 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fyolw0a32b ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; real_T time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; simulationData = ( NeslSimulationData *
) rtDW . fdk2esvn1i ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 28 ; simulationData -> mData ->
mContStates . mX = & rtX . gpl4yklfp5 [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
gjqhhyie2z ; simulationData -> mData -> mModeVector . mN = 12 ;
simulationData -> mData -> mModeVector . mX = & rtDW . h5of2gf1by [ 0 ] ; tmp
= ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
nyv1k2xnif [ 0 ] ; tmp_p [ 1 ] = rtB . nyv1k2xnif [ 1 ] ; tmp_p [ 2 ] = rtB .
nyv1k2xnif [ 2 ] ; tmp_p [ 3 ] = rtB . nyv1k2xnif [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ntbdtueknr [ 0 ] ; tmp_p [ 5 ] = rtB . ntbdtueknr [ 1 ] ;
tmp_p [ 6 ] = rtB . ntbdtueknr [ 2 ] ; tmp_p [ 7 ] = rtB . ntbdtueknr [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pwkalunkv1 [ 0 ] ; tmp_p [ 9 ] = rtB .
pwkalunkv1 [ 1 ] ; tmp_p [ 10 ] = rtB . pwkalunkv1 [ 2 ] ; tmp_p [ 11 ] = rtB
. pwkalunkv1 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . f1ht3jmk15 [ 0 ]
; tmp_p [ 13 ] = rtB . f1ht3jmk15 [ 1 ] ; tmp_p [ 14 ] = rtB . f1ht3jmk15 [ 2
] ; tmp_p [ 15 ] = rtB . f1ht3jmk15 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . amrd3bzce3 [ 0 ] ; tmp_p [ 17 ] = rtB . amrd3bzce3 [ 1 ] ; tmp_p [ 18 ]
= rtB . amrd3bzce3 [ 2 ] ; tmp_p [ 19 ] = rtB . amrd3bzce3 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . p2q53n3lx3 [ 0 ] ; tmp_p [ 21 ] = rtB .
p2q53n3lx3 [ 1 ] ; tmp_p [ 22 ] = rtB . p2q53n3lx3 [ 2 ] ; tmp_p [ 23 ] = rtB
. p2q53n3lx3 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 12 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> do5v5iiu5u ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fyolw0a32b ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gla2ikd2o3 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . fyolw0a32b ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . fdk2esvn1i ) ; nesl_erase_simulator (
"DriveTrain_Modular/Solver Configuration_1" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . owtnu2yjca
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . pzowi24cum
) ; nesl_erase_simulator ( "DriveTrain_Modular/Solver Configuration_1" ) ;
rt_FREE ( rtDW . bmcmlahdxq . RSimInfoPtr ) ; rt_FREE ( rtDW . lb1loe5xrv .
RSimInfoPtr ) ; rt_FREE ( rtDW . a5wupdvues . RSimInfoPtr ) ; if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 28 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 265 ) ; ssSetNumBlockIO ( rtS , 46 ) ;
ssSetNumBlockParams ( rtS , 65044 ) ; } void MdlInitializeSampleTimes ( void
) { ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 2.5E-6 ) ; ssSetSampleTime ( rtS , 3 , 5.0E-5 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1474043602U ) ;
ssSetChecksumVal ( rtS , 1 , 2150365644U ) ; ssSetChecksumVal ( rtS , 2 ,
1007489042U ) ; ssSetChecksumVal ( rtS , 3 , 2638531000U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . hex3zemleh = 0 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 15 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
DriveTrain_Modular_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "DriveTrain_Modular" ) ;
ssSetPath ( rtS , "DriveTrain_Modular" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 5.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) ,
( NULL ) ) ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3 ;
static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 28 ] ; static real_T absTol [ 28 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 28 ] = { 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static uint8_T zcAttributes [
12 ] = { ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 1 ] = { { 6 * sizeof ( real_T ) ,
( char * ) ( & rtB . av2xxttqir [ 0 ] ) , ( NULL ) } } ; ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 2.5E-6 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23t" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetSolverStateProjection ( rtS , 1 ) ; ( void ) memset ( ( void * ) &
mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , &
mdlMethods2 ) ; ( void ) memset ( ( void * ) & mdlMethods3 , 0 , sizeof (
mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ;
ssSetModelProjection ( rtS , MdlProjection ) ; ssSetMassMatrixType ( rtS , (
ssMatrixType ) 1 ) ; ssSetMassMatrixNzMax ( rtS , 11 ) ; ssSetModelMassMatrix
( rtS , MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS ,
MdlForcingFunction ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 )
; ssSetSolverMassMatrixNzMax ( rtS , 11 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 12 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 0.001 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 12 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 11 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 28 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 11 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 1474043602U ) ;
ssSetChecksumVal ( rtS , 1 , 2150365644U ) ; ssSetChecksumVal ( rtS , 2 ,
1007489042U ) ; ssSetChecksumVal ( rtS , 3 , 2638531000U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 14 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } rtP . Saturation_UpperSat = rtInf ; rtP .
Integrator_UpperSat = rtInf ; rtP . Integrator_LowerSat = rtMinusInf ; rtP .
Saturation_UpperSat_dqapmc31wv = rtInf ; rtP . Saturation_LowerSat =
rtMinusInf ; rtP . avoiddivisionby0_UpperSat = rtInf ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
