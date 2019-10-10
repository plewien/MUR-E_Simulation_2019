#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dxf.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_dxf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t283 , NeDsMethodOutput * t284 ) { PmRealVector
out ; real_T t9 [ 62 ] ; real_T t30 [ 3 ] ; real_T t31 [ 3 ] ; real_T t32 [ 3
] ; real_T t35 [ 6 ] ; real_T t45 [ 2 ] ; real_T t46 [ 2 ] ; real_T t49 [ 5 ]
; real_T t56 [ 5 ] ; real_T t63 [ 5 ] ; real_T t64 [ 6 ] ; real_T t65 [ 6 ] ;
real_T t66 [ 6 ] ; size_t t133 ; real_T t170 ; real_T t171 ; real_T t172 ;
real_T t177 ; real_T t178 ; real_T t179 ; real_T t180 ; real_T t181 ; real_T
t182 ; real_T t190 ; real_T t191 ; real_T t198 ; real_T t199 ; real_T t200 ;
real_T t201 ; real_T t202 ; real_T t203 ; real_T t207 ; real_T t211 ; real_T
t215 ; real_T t219 ; real_T t223 ; real_T t227 ; real_T t231 ; real_T t235 ;
real_T t243 ; real_T t246 ; real_T t252 ; real_T t255 ; real_T t274 ; real_T
t276 ; real_T X_idx_14 ; real_T X_idx_13 ; real_T X_idx_15 ; real_T X_idx_4 ;
real_T X_idx_5 ; real_T X_idx_6 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T
M_idx_4 ; int32_T M_idx_6 ; int32_T M_idx_5 ; int32_T M_idx_7 ; real_T
X_idx_3 ; int32_T M_idx_8 ; int32_T M_idx_9 ; int32_T M_idx_10 ; int32_T
M_idx_11 ; int32_T M_idx_2 ; int32_T M_idx_3 ; M_idx_0 = t283 -> mM . mX [ 0
] ; M_idx_1 = t283 -> mM . mX [ 1 ] ; M_idx_2 = t283 -> mM . mX [ 2 ] ;
M_idx_3 = t283 -> mM . mX [ 3 ] ; M_idx_4 = t283 -> mM . mX [ 4 ] ; M_idx_5 =
t283 -> mM . mX [ 5 ] ; M_idx_6 = t283 -> mM . mX [ 6 ] ; M_idx_7 = t283 ->
mM . mX [ 7 ] ; M_idx_8 = t283 -> mM . mX [ 8 ] ; M_idx_9 = t283 -> mM . mX [
9 ] ; M_idx_10 = t283 -> mM . mX [ 10 ] ; M_idx_11 = t283 -> mM . mX [ 11 ] ;
X_idx_3 = t283 -> mX . mX [ 3 ] ; X_idx_4 = t283 -> mX . mX [ 4 ] ; X_idx_5 =
t283 -> mX . mX [ 5 ] ; X_idx_6 = t283 -> mX . mX [ 6 ] ; X_idx_13 = t283 ->
mX . mX [ 13 ] ; X_idx_14 = t283 -> mX . mX [ 14 ] ; X_idx_15 = t283 -> mX .
mX [ 15 ] ; out = t284 -> mDXF ; X_idx_4 = X_idx_4 * 10.0 + -
1.5707963267948966 ; t274 = X_idx_5 * 0.000125 + 0.04 ; t276 = X_idx_6 *
0.00013 ; t171 = cos ( X_idx_4 ) * 0.66666666666666663 ; t172 = cos ( X_idx_4
+ - 2.0943951023931953 ) * 0.66666666666666663 ; t223 = cos ( X_idx_4 +
2.0943951023931953 ) * 0.66666666666666663 ; t252 = - sin ( X_idx_4 ) *
0.66666666666666663 ; t255 = - sin ( X_idx_4 + - 2.0943951023931953 ) *
0.66666666666666663 ; t243 = - sin ( X_idx_4 + 2.0943951023931953 ) *
0.66666666666666663 ; t177 = cos ( X_idx_4 ) ; t178 = - sin ( X_idx_4 ) ;
t179 = cos ( X_idx_4 + - 2.0943951023931953 ) ; t180 = - sin ( X_idx_4 + -
2.0943951023931953 ) ; t181 = cos ( X_idx_4 + 2.0943951023931953 ) ; t182 = -
sin ( X_idx_4 + 2.0943951023931953 ) ; t227 = - sin ( X_idx_4 ) * 10.0 *
0.66666666666666663 ; t231 = - sin ( X_idx_4 + - 2.0943951023931953 ) * 10.0
* 0.66666666666666663 ; t235 = - sin ( X_idx_4 + 2.0943951023931953 ) * 10.0
* 0.66666666666666663 ; t246 = - ( cos ( X_idx_4 ) * 10.0 ) *
0.66666666666666663 ; t190 = - ( cos ( X_idx_4 + - 2.0943951023931953 ) *
10.0 ) * 0.66666666666666663 ; t191 = - ( cos ( X_idx_4 + 2.0943951023931953
) * 10.0 ) * 0.66666666666666663 ; t198 = - sin ( X_idx_4 ) * 10.0 ; t199 = -
( cos ( X_idx_4 ) * 10.0 ) ; t200 = - sin ( X_idx_4 + - 2.0943951023931953 )
* 10.0 ; t201 = - ( cos ( X_idx_4 + - 2.0943951023931953 ) * 10.0 ) ; t202 =
- sin ( X_idx_4 + 2.0943951023931953 ) * 10.0 ; t203 = - ( cos ( X_idx_4 +
2.0943951023931953 ) * 10.0 ) ; t207 = ( t171 * 0.0 + t172 * 0.0 ) + t223 ;
t211 = ( t171 * 0.0 + t172 ) + t223 * 0.0 ; t215 = ( t171 + t172 * 0.0 ) +
t223 * 0.0 ; t30 [ 0ULL ] = X_idx_14 ; t31 [ 1ULL ] = X_idx_13 ; t32 [ 2ULL ]
= X_idx_15 ; t219 = ( t30 [ 0ULL ] * t227 + t31 [ 1ULL ] * t231 ) + t32 [
2ULL ] * t235 ; t223 = ( t252 * 0.0 + t255 * 0.0 ) + t243 ; t227 = ( t252 *
0.0 + t255 ) + t243 * 0.0 ; t231 = ( t252 + t255 * 0.0 ) + t243 * 0.0 ; t30 [
0ULL ] = X_idx_14 ; t31 [ 1ULL ] = X_idx_13 ; t32 [ 2ULL ] = X_idx_15 ; if (
M_idx_0 != 0 ) { X_idx_4 = 100.0 ; } else { X_idx_4 = 1.0E-8 ; } if ( M_idx_1
!= 0 ) { t235 = 100.0 ; } else { t235 = 1.0E-8 ; } if ( M_idx_4 != 0 ) { t252
= 100.0 ; } else { t252 = 1.0E-8 ; } if ( M_idx_0 != 0 ) { X_idx_13 = - 100.0
; } else { X_idx_13 = - 1.0E-8 ; } if ( M_idx_6 != 0 ) { X_idx_14 = 100.0 ; }
else { X_idx_14 = 1.0E-8 ; } if ( M_idx_1 != 0 ) { X_idx_15 = - 100.0 ; }
else { X_idx_15 = - 1.0E-8 ; } if ( M_idx_5 != 0 ) { t170 = 100.0 ; } else {
t170 = 1.0E-8 ; } if ( M_idx_4 != 0 ) { t171 = - 100.0 ; } else { t171 = -
1.0E-8 ; } if ( M_idx_7 != 0 ) { t172 = 100.0 ; } else { t172 = 1.0E-8 ; }
t35 [ 0ULL ] = X_idx_4 ; t35 [ 1ULL ] = t235 ; t35 [ 2ULL ] = t252 ; t35 [
3ULL ] = 1.0E-8 ; t35 [ 4ULL ] = 1.0E-8 ; t35 [ 5ULL ] = 1.0E-8 ; t45 [ 0ULL
] = X_idx_5 ; t46 [ 1ULL ] = X_idx_6 ; t255 = t45 [ 0ULL ] * t198 + t46 [
1ULL ] * t199 ; t45 [ 0ULL ] = X_idx_5 ; t46 [ 1ULL ] = X_idx_6 ; t243 = t45
[ 0ULL ] * t200 + t46 [ 1ULL ] * t201 ; t45 [ 0ULL ] = X_idx_5 ; t46 [ 1ULL ]
= X_idx_6 ; t49 [ 0ULL ] = - ( t219 * 1.732050807568877 ) ; t49 [ 1ULL ] = -
( ( ( t30 [ 0ULL ] * t246 + t31 [ 1ULL ] * t190 ) + t32 [ 2ULL ] * t191 ) *
1.5 ) ; t49 [ 2ULL ] = - t255 ; t49 [ 3ULL ] = - t243 ; t49 [ 4ULL ] = - (
t45 [ 0ULL ] * t202 + t46 [ 1ULL ] * t203 ) ; t56 [ 0ULL ] = - ( - ( X_idx_3
* 0.000125 * 10.0 ) * 1.5 ) ; t56 [ 1ULL ] = - ( t177 + t178 * 0.0 ) ; t56 [
2ULL ] = - ( t179 + t180 * 0.0 ) ; t56 [ 3ULL ] = - ( t181 + t182 * 0.0 ) ;
t56 [ 4ULL ] = - ( ( X_idx_6 * 0.000125 - t276 ) * 15.0 ) ; t63 [ 0ULL ] = -
( X_idx_3 * 0.00013 * 17.320508075688771 ) ; t63 [ 1ULL ] = - ( t177 * 0.0 +
t178 ) ; t63 [ 2ULL ] = - ( t179 * 0.0 + t180 ) ; t63 [ 3ULL ] = - ( t181 *
0.0 + t182 ) ; t63 [ 4ULL ] = - ( ( t274 - X_idx_5 * 0.00013 ) * 15.0 ) ; t64
[ 0ULL ] = - ( t211 * 1.732050807568877 ) ; t64 [ 1ULL ] = - ( t227 * 1.5 ) ;
t64 [ 2ULL ] = X_idx_13 ; t64 [ 3ULL ] = X_idx_14 ; t64 [ 4ULL ] = - 1.0E-8 ;
t64 [ 5ULL ] = 1.0E-8 ; t65 [ 0ULL ] = - ( t215 * 1.732050807568877 ) ; t65 [
1ULL ] = - ( t231 * 1.5 ) ; t65 [ 2ULL ] = X_idx_15 ; t65 [ 3ULL ] = t170 ;
t65 [ 4ULL ] = - 1.0E-8 ; t65 [ 5ULL ] = 1.0E-8 ; t66 [ 0ULL ] = - ( t207 *
1.732050807568877 ) ; t66 [ 1ULL ] = - ( t223 * 1.5 ) ; t66 [ 2ULL ] = t171 ;
t66 [ 3ULL ] = t172 ; t66 [ 4ULL ] = - 1.0E-8 ; t66 [ 5ULL ] = 1.0E-8 ; for (
t133 = 0ULL ; t133 < 6ULL ; t133 ++ ) { t9 [ t133 ] = t35 [ t133 ] ; } t9 [
6ULL ] = - ( t276 * 17.320508075688771 ) ; t9 [ 7ULL ] = - ( - ( t274 * 10.0
) * 1.5 ) ; for ( t133 = 0ULL ; t133 < 5ULL ; t133 ++ ) { t9 [ t133 + 8ULL ]
= t49 [ t133 ] ; } for ( t133 = 0ULL ; t133 < 5ULL ; t133 ++ ) { t9 [ t133 +
13ULL ] = t56 [ t133 ] ; } for ( t133 = 0ULL ; t133 < 5ULL ; t133 ++ ) { t9 [
t133 + 18ULL ] = t63 [ t133 ] ; } t9 [ 23ULL ] = - 1.0 ; t9 [ 24ULL ] = - 1.0
; t9 [ 25ULL ] = - 1.0 ; for ( t133 = 0ULL ; t133 < 6ULL ; t133 ++ ) { t9 [
t133 + 26ULL ] = t64 [ t133 ] ; } for ( t133 = 0ULL ; t133 < 6ULL ; t133 ++ )
{ t9 [ t133 + 32ULL ] = t65 [ t133 ] ; } for ( t133 = 0ULL ; t133 < 6ULL ;
t133 ++ ) { t9 [ t133 + 38ULL ] = t66 [ t133 ] ; } out . mX [ 0 ] = t9 [ 0 ]
; out . mX [ 1 ] = t9 [ 1 ] ; out . mX [ 2 ] = t9 [ 2 ] ; out . mX [ 3 ] = t9
[ 3 ] ; out . mX [ 4 ] = t9 [ 4 ] ; out . mX [ 5 ] = t9 [ 5 ] ; out . mX [ 6
] = t9 [ 6 ] ; out . mX [ 7 ] = t9 [ 7 ] ; out . mX [ 8 ] = t9 [ 8 ] ; out .
mX [ 9 ] = t9 [ 9 ] ; out . mX [ 10 ] = t9 [ 10 ] ; out . mX [ 11 ] = t9 [ 11
] ; out . mX [ 12 ] = t9 [ 12 ] ; out . mX [ 13 ] = t9 [ 13 ] ; out . mX [ 14
] = t9 [ 14 ] ; out . mX [ 15 ] = t9 [ 15 ] ; out . mX [ 16 ] = t9 [ 16 ] ;
out . mX [ 17 ] = t9 [ 17 ] ; out . mX [ 18 ] = t9 [ 18 ] ; out . mX [ 19 ] =
t9 [ 19 ] ; out . mX [ 20 ] = t9 [ 20 ] ; out . mX [ 21 ] = t9 [ 21 ] ; out .
mX [ 22 ] = t9 [ 22 ] ; out . mX [ 23 ] = t9 [ 23 ] ; out . mX [ 24 ] = t9 [
24 ] ; out . mX [ 25 ] = t9 [ 25 ] ; out . mX [ 26 ] = t9 [ 26 ] ; out . mX [
27 ] = t9 [ 27 ] ; out . mX [ 28 ] = t9 [ 28 ] ; out . mX [ 29 ] = t9 [ 29 ]
; out . mX [ 30 ] = t9 [ 30 ] ; out . mX [ 31 ] = t9 [ 31 ] ; out . mX [ 32 ]
= t9 [ 32 ] ; out . mX [ 33 ] = t9 [ 33 ] ; out . mX [ 34 ] = t9 [ 34 ] ; out
. mX [ 35 ] = t9 [ 35 ] ; out . mX [ 36 ] = t9 [ 36 ] ; out . mX [ 37 ] = t9
[ 37 ] ; out . mX [ 38 ] = t9 [ 38 ] ; out . mX [ 39 ] = t9 [ 39 ] ; out . mX
[ 40 ] = t9 [ 40 ] ; out . mX [ 41 ] = t9 [ 41 ] ; out . mX [ 42 ] = t9 [ 42
] ; out . mX [ 43 ] = t9 [ 43 ] ; out . mX [ 44 ] = 1.0 ; out . mX [ 45 ] =
1.0 ; out . mX [ 46 ] = 1.0 ; out . mX [ 47 ] = 1.0 ; out . mX [ 48 ] = 1.0 ;
out . mX [ 49 ] = 1.0 ; out . mX [ 50 ] = - 1.0 ; out . mX [ 51 ] = ( M_idx_8
!= 0 ? - 0.01 : - 1.0E+8 ) * 1.0E-8 ; out . mX [ 52 ] = - 1.0 ; out . mX [ 53
] = ( M_idx_9 != 0 ? - 0.01 : - 1.0E+8 ) * 1.0E-8 ; out . mX [ 54 ] = - 1.0 ;
out . mX [ 55 ] = ( M_idx_10 != 0 ? - 0.01 : - 1.0E+8 ) * 1.0E-8 ; out . mX [
56 ] = 1.0 ; out . mX [ 57 ] = ( M_idx_11 != 0 ? - 0.01 : - 1.0E+8 ) * 1.0E-8
; out . mX [ 58 ] = 1.0 ; out . mX [ 59 ] = ( M_idx_2 != 0 ? - 0.01 : -
1.0E+8 ) * 1.0E-8 ; out . mX [ 60 ] = 1.0 ; out . mX [ 61 ] = ( M_idx_3 != 0
? - 0.01 : - 1.0E+8 ) * 1.0E-8 ; ( void ) sys ; ( void ) t284 ; return 0 ; }
