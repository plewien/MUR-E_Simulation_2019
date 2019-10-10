#include "__cf_DriveTrain_Modular.h"
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw.h"
#include "DriveTrain_Modular_aaa11c4f_1.h"
void DriveTrain_Modular_aaa11c4f_1_gateway ( void ) { NeModelParameters
modelparams = { ( NeSolverType ) 0 , 0.001 , 1 , 0.001 , 0 , 0 , 0 , 0 , (
SscLoggingSetting ) 0 , 491182404 , } ; NeSolverParameters solverparams = { 0
, 0 , 1 , 0 , 0 , 0.001 , 1e-06 , 1e-09 , 0 , 0 , 100 , 0 , 1 , 0 , 1e-09 , 0
, ( NeLocalSolverChoice ) 0 , 0.001 , 0 , 3 , 2 , ( NeLinearAlgebraChoice ) 0
, ( NeEquationFormulationChoice ) 0 , 1024 , 1 , 0.001 , (
NePartitionStorageMethod ) 0 , 1024 , ( NePartitionMethod ) 0 , } ; const
NeOutputParameters * outputparameters = NULL ; NeDae * dae ; size_t
numOutputs = 0 ; { static const NeOutputParameters outputparameters_init [ ]
= { { 0 , 0 , } , } ; outputparameters = outputparameters_init ; numOutputs =
sizeof ( outputparameters_init ) / sizeof ( outputparameters_init [ 0 ] ) ; }
DriveTrain_Modular_aaa11c4f_1_dae ( & dae , & modelparams , & solverparams )
; nesl_register_simulator_group ( "DriveTrain_Modular/Solver Configuration_1"
, 1 , & dae , & solverparams , & modelparams , numOutputs , outputparameters
) ; }
