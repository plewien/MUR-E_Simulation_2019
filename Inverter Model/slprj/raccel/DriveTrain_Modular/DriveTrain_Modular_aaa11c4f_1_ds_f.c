#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_f.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_f ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t89 , NeDsMethodOutput * t90 ) { PmRealVector
out ; real_T intrm_sf_mf_10 ; real_T intrm_sf_mf_11 ; real_T t1 ; real_T t2 ;
real_T t3 ; real_T t4 ; real_T t6 ; real_T t8 ; real_T t10 ; real_T t11 ;
real_T t49 ; real_T t50 ; real_T t51 ; real_T t52 ; real_T t53 ; real_T t54 ;
real_T t56 ; real_T t57 ; real_T t66 ; real_T t75 ; real_T t86 ; real_T t88 ;
real_T X_idx_1 ; real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ; real_T
X_idx_19 ; real_T X_idx_10 ; real_T X_idx_17 ; real_T X_idx_22 ; real_T
X_idx_20 ; real_T X_idx_11 ; real_T X_idx_16 ; real_T X_idx_23 ; real_T
X_idx_21 ; real_T X_idx_12 ; real_T X_idx_18 ; real_T X_idx_24 ; real_T
X_idx_4 ; real_T X_idx_5 ; real_T X_idx_6 ; int32_T M_idx_0 ; int32_T M_idx_1
; int32_T M_idx_4 ; int32_T M_idx_5 ; int32_T M_idx_6 ; int32_T M_idx_7 ;
int32_T M_idx_8 ; int32_T M_idx_9 ; int32_T M_idx_10 ; int32_T M_idx_11 ;
int32_T M_idx_2 ; int32_T M_idx_3 ; real_T X_idx_3 ; M_idx_0 = t89 -> mM . mX
[ 0 ] ; M_idx_1 = t89 -> mM . mX [ 1 ] ; M_idx_2 = t89 -> mM . mX [ 2 ] ;
M_idx_3 = t89 -> mM . mX [ 3 ] ; M_idx_4 = t89 -> mM . mX [ 4 ] ; M_idx_5 =
t89 -> mM . mX [ 5 ] ; M_idx_6 = t89 -> mM . mX [ 6 ] ; M_idx_7 = t89 -> mM .
mX [ 7 ] ; M_idx_8 = t89 -> mM . mX [ 8 ] ; M_idx_9 = t89 -> mM . mX [ 9 ] ;
M_idx_10 = t89 -> mM . mX [ 10 ] ; M_idx_11 = t89 -> mM . mX [ 11 ] ; X_idx_1
= t89 -> mX . mX [ 1 ] ; X_idx_3 = t89 -> mX . mX [ 3 ] ; X_idx_4 = t89 -> mX
. mX [ 4 ] ; X_idx_5 = t89 -> mX . mX [ 5 ] ; X_idx_6 = t89 -> mX . mX [ 6 ]
; X_idx_10 = t89 -> mX . mX [ 10 ] ; X_idx_11 = t89 -> mX . mX [ 11 ] ;
X_idx_12 = t89 -> mX . mX [ 12 ] ; X_idx_13 = t89 -> mX . mX [ 13 ] ;
X_idx_14 = t89 -> mX . mX [ 14 ] ; X_idx_15 = t89 -> mX . mX [ 15 ] ;
X_idx_16 = t89 -> mX . mX [ 16 ] ; X_idx_17 = t89 -> mX . mX [ 17 ] ;
X_idx_18 = t89 -> mX . mX [ 18 ] ; X_idx_19 = t89 -> mX . mX [ 19 ] ;
X_idx_20 = t89 -> mX . mX [ 20 ] ; X_idx_21 = t89 -> mX . mX [ 21 ] ;
X_idx_22 = t89 -> mX . mX [ 22 ] ; X_idx_23 = t89 -> mX . mX [ 23 ] ;
X_idx_24 = t89 -> mX . mX [ 24 ] ; out = t90 -> mF ; t1 = - X_idx_1 +
X_idx_13 ; t2 = - X_idx_1 + X_idx_14 ; t3 = - X_idx_1 + X_idx_15 ; t4 = ( ( -
X_idx_19 + - X_idx_10 ) + X_idx_17 ) + X_idx_22 ; t6 = ( ( - X_idx_20 + -
X_idx_11 ) + X_idx_16 ) + X_idx_23 ; t8 = ( ( - X_idx_21 + - X_idx_12 ) +
X_idx_18 ) + X_idx_24 ; t10 = - X_idx_14 + X_idx_1 ; t11 = - X_idx_13 +
X_idx_1 ; t88 = - X_idx_15 + X_idx_1 ; X_idx_10 = X_idx_4 * 10.0 + -
1.5707963267948966 ; intrm_sf_mf_10 = X_idx_5 * 0.000125 + 0.04 ;
intrm_sf_mf_11 = X_idx_6 * 0.00013 ; t66 = cos ( X_idx_10 ) *
0.66666666666666663 ; t86 = cos ( X_idx_10 + - 2.0943951023931953 ) *
0.66666666666666663 ; t49 = cos ( X_idx_10 + 2.0943951023931953 ) *
0.66666666666666663 ; t50 = - sin ( X_idx_10 ) * 0.66666666666666663 ; t51 =
- sin ( X_idx_10 + - 2.0943951023931953 ) * 0.66666666666666663 ; t52 = - sin
( X_idx_10 + 2.0943951023931953 ) * 0.66666666666666663 ; t53 = cos (
X_idx_10 ) ; t54 = - sin ( X_idx_10 ) ; t75 = cos ( X_idx_10 + -
2.0943951023931953 ) ; t56 = - sin ( X_idx_10 + - 2.0943951023931953 ) ; t57
= cos ( X_idx_10 + 2.0943951023931953 ) ; X_idx_4 = - sin ( X_idx_10 +
2.0943951023931953 ) ; if ( M_idx_0 != 0 ) { X_idx_1 = X_idx_16 - ( t1 -
1.549999999845 ) / 0.01 ; } else { X_idx_1 = X_idx_16 - t1 * 1.0E-8 ; } if (
M_idx_1 != 0 ) { t1 = X_idx_17 - ( t2 - 1.549999999845 ) / 0.01 ; } else { t1
= X_idx_17 - t2 * 1.0E-8 ; } if ( M_idx_4 != 0 ) { t2 = X_idx_18 - ( t3 -
1.549999999845 ) / 0.01 ; } else { t2 = X_idx_18 - t3 * 1.0E-8 ; } if (
M_idx_5 != 0 ) { t3 = t4 - ( - X_idx_14 - 1.549999999845 ) / 0.01 ; } else {
t3 = t4 - - X_idx_14 * 1.0E-8 ; } if ( M_idx_6 != 0 ) { t4 = t6 - ( -
X_idx_13 - 1.549999999845 ) / 0.01 ; } else { t4 = t6 - - X_idx_13 * 1.0E-8 ;
} if ( M_idx_7 != 0 ) { X_idx_12 = t8 - ( - X_idx_15 - 1.549999999845 ) /
0.01 ; } else { X_idx_12 = t8 - - X_idx_15 * 1.0E-8 ; } if ( M_idx_8 != 0 ) {
t6 = t10 - X_idx_19 * 0.01 ; } else { t6 = t10 - X_idx_19 / 1.0E-8 ; } if (
M_idx_9 != 0 ) { X_idx_11 = t11 - X_idx_20 * 0.01 ; } else { X_idx_11 = t11 -
X_idx_20 / 1.0E-8 ; } if ( M_idx_10 != 0 ) { t8 = t88 - X_idx_21 * 0.01 ; }
else { t8 = t88 - X_idx_21 / 1.0E-8 ; } if ( M_idx_11 != 0 ) { X_idx_10 =
X_idx_14 - X_idx_22 * 0.01 ; } else { X_idx_10 = X_idx_14 - X_idx_22 / 1.0E-8
; } if ( M_idx_2 != 0 ) { t10 = X_idx_13 - X_idx_23 * 0.01 ; } else { t10 =
X_idx_13 - X_idx_23 / 1.0E-8 ; } if ( M_idx_3 != 0 ) { t11 = X_idx_15 -
X_idx_24 * 0.01 ; } else { t11 = X_idx_15 - X_idx_24 / 1.0E-8 ; } out . mX [
0 ] = - 0.0 ; out . mX [ 1 ] = - 0.0 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3
] = 0.0 ; out . mX [ 4 ] = - ( ( ( ( t66 * X_idx_14 + t86 * X_idx_13 ) + t49
* X_idx_15 ) - ( - ( X_idx_3 * intrm_sf_mf_11 * 10.0 ) ) ) /
0.57735026918962584 ) ; out . mX [ 5 ] = - ( ( ( ( t50 * X_idx_14 + t51 *
X_idx_13 ) + t52 * X_idx_15 ) - X_idx_3 * intrm_sf_mf_10 * 10.0 ) /
0.66666666666666663 ) ; out . mX [ 6 ] = - 0.0 ; out . mX [ 7 ] = - 0.0 ; out
. mX [ 8 ] = - 0.0 ; out . mX [ 9 ] = - 48.0 ; out . mX [ 10 ] = X_idx_1 ;
out . mX [ 11 ] = t1 ; out . mX [ 12 ] = t2 ; out . mX [ 13 ] = t3 ; out . mX
[ 14 ] = t4 ; out . mX [ 15 ] = X_idx_12 ; out . mX [ 16 ] = t6 / 1.0E+8 ;
out . mX [ 17 ] = X_idx_11 / 1.0E+8 ; out . mX [ 18 ] = t8 / 1.0E+8 ; out .
mX [ 19 ] = X_idx_10 / 1.0E+8 ; out . mX [ 20 ] = t10 / 1.0E+8 ; out . mX [
21 ] = t11 / 1.0E+8 ; out . mX [ 22 ] = - ( t53 * X_idx_5 + t54 * X_idx_6 ) ;
out . mX [ 23 ] = - ( t75 * X_idx_5 + t56 * X_idx_6 ) ; out . mX [ 24 ] = - (
t57 * X_idx_5 + X_idx_4 * X_idx_6 ) ; out . mX [ 25 ] = - ( ( X_idx_6 *
intrm_sf_mf_10 - X_idx_5 * intrm_sf_mf_11 ) * 15.0 ) ; out . mX [ 26 ] = 0.0
; out . mX [ 27 ] = - 0.0 ; ( void ) sys ; ( void ) t90 ; return 0 ; }
