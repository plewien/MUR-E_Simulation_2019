#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dtf.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_dtf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t104 , NeDsMethodOutput * t105 ) { PmRealVector
out ; real_T t9 [ 3 ] ; real_T t10 [ 3 ] ; real_T t11 [ 3 ] ; real_T t19 [ 2
] ; real_T t22 [ 2 ] ; real_T t70 ; real_T t71 ; real_T t72 ; real_T t73 ;
real_T t74 ; real_T t81 ; real_T t82 ; real_T t83 ; real_T t84 ; real_T t85 ;
real_T t86 ; real_T t94 ; real_T X_idx_14 ; real_T X_idx_13 ; real_T X_idx_15
; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_6 ; X_idx_4 = t104 -> mX .
mX [ 4 ] ; X_idx_5 = t104 -> mX . mX [ 5 ] ; X_idx_6 = t104 -> mX . mX [ 6 ]
; X_idx_13 = t104 -> mX . mX [ 13 ] ; X_idx_14 = t104 -> mX . mX [ 14 ] ;
X_idx_15 = t104 -> mX . mX [ 15 ] ; out = t105 -> mDTF ; t94 = X_idx_4 * 10.0
+ - 1.5707963267948966 ; t83 = t94 ; t85 = t94 + - 2.0943951023931953 ;
X_idx_4 = t94 + 2.0943951023931953 ; t94 = - sin ( t94 ) * 0.0 *
0.66666666666666663 ; t70 = - sin ( t85 ) * 0.0 * 0.66666666666666663 ; t71 =
- sin ( X_idx_4 ) * 0.0 * 0.66666666666666663 ; t72 = - ( cos ( t83 ) * 0.0 )
* 0.66666666666666663 ; t73 = - ( cos ( t85 ) * 0.0 ) * 0.66666666666666663 ;
t74 = - ( cos ( X_idx_4 ) * 0.0 ) * 0.66666666666666663 ; t81 = - sin ( t83 )
* 0.0 ; t82 = - ( cos ( t83 ) * 0.0 ) ; t83 = - sin ( t85 ) * 0.0 ; t84 = - (
cos ( t85 ) * 0.0 ) ; t85 = - sin ( X_idx_4 ) * 0.0 ; t86 = - ( cos ( X_idx_4
) * 0.0 ) ; t9 [ 0ULL ] = X_idx_14 ; t10 [ 1ULL ] = X_idx_13 ; t11 [ 2ULL ] =
X_idx_15 ; t70 = ( t9 [ 0ULL ] * t94 + t10 [ 1ULL ] * t70 ) + t11 [ 2ULL ] *
t71 ; t9 [ 0ULL ] = X_idx_14 ; t10 [ 1ULL ] = X_idx_13 ; t11 [ 2ULL ] =
X_idx_15 ; t22 [ 0ULL ] = X_idx_5 ; t19 [ 1ULL ] = X_idx_6 ; t94 = t22 [ 0ULL
] * t81 + t19 [ 1ULL ] * t82 ; t22 [ 0ULL ] = X_idx_5 ; t19 [ 1ULL ] =
X_idx_6 ; X_idx_4 = t22 [ 0ULL ] * t83 + t19 [ 1ULL ] * t84 ; t22 [ 0ULL ] =
X_idx_5 ; t19 [ 1ULL ] = X_idx_6 ; out . mX [ 0 ] = - ( t70 *
1.732050807568877 ) ; out . mX [ 1 ] = - ( ( ( t9 [ 0ULL ] * t72 + t10 [ 1ULL
] * t73 ) + t11 [ 2ULL ] * t74 ) * 1.5 ) ; out . mX [ 2 ] = - t94 ; out . mX
[ 3 ] = - X_idx_4 ; out . mX [ 4 ] = - ( t22 [ 0ULL ] * t85 + t19 [ 1ULL ] *
t86 ) ; ( void ) sys ; ( void ) t105 ; return 0 ; }
