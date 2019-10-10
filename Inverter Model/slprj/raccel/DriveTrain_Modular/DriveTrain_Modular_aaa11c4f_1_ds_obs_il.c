#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_obs_il.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_obs_il ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; boolean_T t0 [ 209 ] ; int32_T b ; static boolean_T _cg_const_1 [ 209 ]
= { true , true , true , true , true , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , true , true , true , true , false , true , true , true , true
, false , true , true , true , true , false , true , true , true , true ,
false , true , true , true , true , false , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true } ; ( void ) t1 ; out = t2 -> mOBS_IL ; for ( b = 0 ; b < 209 ;
b ++ ) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 209 ; b ++ ) {
out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t2 ; return 0 ; }
