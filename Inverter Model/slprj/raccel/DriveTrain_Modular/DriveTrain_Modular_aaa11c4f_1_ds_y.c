#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_y.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_y ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t11 , NeDsMethodOutput * t12 ) { PmRealVector
out ; real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T X_idx_12 ;
real_T X_idx_3 ; real_T X_idx_2 ; real_T X_idx_9 ; real_T X_idx_7 ; real_T
X_idx_27 ; real_T X_idx_8 ; real_T X_idx_25 ; X_idx_1 = t11 -> mX . mX [ 1 ]
; X_idx_2 = t11 -> mX . mX [ 2 ] ; X_idx_3 = t11 -> mX . mX [ 3 ] ; X_idx_7 =
t11 -> mX . mX [ 7 ] ; X_idx_8 = t11 -> mX . mX [ 8 ] ; X_idx_9 = t11 -> mX .
mX [ 9 ] ; X_idx_10 = t11 -> mX . mX [ 10 ] ; X_idx_11 = t11 -> mX . mX [ 11
] ; X_idx_12 = t11 -> mX . mX [ 12 ] ; X_idx_25 = t11 -> mX . mX [ 25 ] ;
X_idx_27 = t11 -> mX . mX [ 27 ] ; out = t12 -> mY ; out . mX [ 0 ] = -
X_idx_9 ; out . mX [ 1 ] = - X_idx_10 ; out . mX [ 2 ] = - X_idx_11 ; out .
mX [ 3 ] = - X_idx_12 ; out . mX [ 4 ] = - X_idx_1 / - 1.0 ; out . mX [ 5 ] =
X_idx_7 ; out . mX [ 6 ] = X_idx_3 ; out . mX [ 7 ] = - X_idx_27 ; out . mX [
8 ] = X_idx_8 ; out . mX [ 9 ] = X_idx_2 ; out . mX [ 10 ] = - X_idx_25 ; (
void ) sys ; ( void ) t12 ; return 0 ; }
