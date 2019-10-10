#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_zc.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_zc ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; real_T X_idx_1 ; real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ;
real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
U_idx_4 ; real_T U_idx_5 ; U_idx_0 = t1 -> mU . mX [ 0 ] ; U_idx_1 = t1 -> mU
. mX [ 1 ] ; U_idx_2 = t1 -> mU . mX [ 2 ] ; U_idx_3 = t1 -> mU . mX [ 3 ] ;
U_idx_4 = t1 -> mU . mX [ 4 ] ; U_idx_5 = t1 -> mU . mX [ 5 ] ; X_idx_1 = t1
-> mX . mX [ 1 ] ; X_idx_13 = t1 -> mX . mX [ 13 ] ; X_idx_14 = t1 -> mX . mX
[ 14 ] ; X_idx_15 = t1 -> mX . mX [ 15 ] ; out = t2 -> mZC ; out . mX [ 0 ] =
( - X_idx_1 + X_idx_13 ) - 1.55 ; out . mX [ 1 ] = ( - X_idx_1 + X_idx_14 ) -
1.55 ; out . mX [ 2 ] = ( - X_idx_1 + X_idx_15 ) - 1.55 ; out . mX [ 3 ] = -
X_idx_14 - 1.55 ; out . mX [ 4 ] = - X_idx_13 - 1.55 ; out . mX [ 5 ] = -
X_idx_15 - 1.55 ; out . mX [ 6 ] = U_idx_0 - 0.5 ; out . mX [ 7 ] = U_idx_1 -
0.5 ; out . mX [ 8 ] = U_idx_2 - 0.5 ; out . mX [ 9 ] = U_idx_3 - 0.5 ; out .
mX [ 10 ] = U_idx_4 - 0.5 ; out . mX [ 11 ] = U_idx_5 - 0.5 ; ( void ) sys ;
( void ) t2 ; return 0 ; }
