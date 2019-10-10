#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_log.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_log ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t31 , NeDsMethodOutput * t32 ) { PmRealVector
out ; real_T Accumulator_Simple_Battery_p_v ; real_T
Bamocar_D3_Current_Control_Simple_IGBTs_Voltage_Sensor_V ; real_T t0 [ 209 ]
; int32_T b ; real_T X_idx_9 ; real_T X_idx_1 ; real_T X_idx_10 ; real_T
X_idx_11 ; real_T X_idx_12 ; real_T X_idx_14 ; real_T X_idx_13 ; real_T
X_idx_15 ; real_T X_idx_19 ; real_T X_idx_20 ; real_T X_idx_21 ; real_T
X_idx_16 ; real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_22 ; real_T
X_idx_23 ; real_T X_idx_24 ; real_T X_idx_25 ; real_T X_idx_3 ; real_T
X_idx_4 ; real_T X_idx_2 ; real_T X_idx_0 ; real_T U_idx_0 ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T
X_idx_5 ; real_T X_idx_6 ; real_T X_idx_26 ; real_T X_idx_27 ; real_T X_idx_7
; real_T X_idx_8 ; U_idx_0 = t31 -> mU . mX [ 0 ] ; U_idx_1 = t31 -> mU . mX
[ 1 ] ; U_idx_2 = t31 -> mU . mX [ 2 ] ; U_idx_3 = t31 -> mU . mX [ 3 ] ;
U_idx_4 = t31 -> mU . mX [ 4 ] ; U_idx_5 = t31 -> mU . mX [ 5 ] ; X_idx_0 =
t31 -> mX . mX [ 0 ] ; X_idx_1 = t31 -> mX . mX [ 1 ] ; X_idx_2 = t31 -> mX .
mX [ 2 ] ; X_idx_3 = t31 -> mX . mX [ 3 ] ; X_idx_4 = t31 -> mX . mX [ 4 ] ;
X_idx_5 = t31 -> mX . mX [ 5 ] ; X_idx_6 = t31 -> mX . mX [ 6 ] ; X_idx_7 =
t31 -> mX . mX [ 7 ] ; X_idx_8 = t31 -> mX . mX [ 8 ] ; X_idx_9 = t31 -> mX .
mX [ 9 ] ; X_idx_10 = t31 -> mX . mX [ 10 ] ; X_idx_11 = t31 -> mX . mX [ 11
] ; X_idx_12 = t31 -> mX . mX [ 12 ] ; X_idx_13 = t31 -> mX . mX [ 13 ] ;
X_idx_14 = t31 -> mX . mX [ 14 ] ; X_idx_15 = t31 -> mX . mX [ 15 ] ;
X_idx_16 = t31 -> mX . mX [ 16 ] ; X_idx_17 = t31 -> mX . mX [ 17 ] ;
X_idx_18 = t31 -> mX . mX [ 18 ] ; X_idx_19 = t31 -> mX . mX [ 19 ] ;
X_idx_20 = t31 -> mX . mX [ 20 ] ; X_idx_21 = t31 -> mX . mX [ 21 ] ;
X_idx_22 = t31 -> mX . mX [ 22 ] ; X_idx_23 = t31 -> mX . mX [ 23 ] ;
X_idx_24 = t31 -> mX . mX [ 24 ] ; X_idx_25 = t31 -> mX . mX [ 25 ] ;
X_idx_26 = t31 -> mX . mX [ 26 ] ; X_idx_27 = t31 -> mX . mX [ 27 ] ; out =
t32 -> mLOG ; Accumulator_Simple_Battery_p_v = X_idx_9 * 0.001 + 48.0 ;
Bamocar_D3_Current_Control_Simple_IGBTs_Voltage_Sensor_V = - X_idx_1 / - 1.0
; t0 [ 0ULL ] = X_idx_0 * 0.00027777777777777778 ; t0 [ 1ULL ] = X_idx_9 ; t0
[ 2ULL ] = 0.0 ; t0 [ 3ULL ] = 0.0 ; t0 [ 4ULL ] =
Accumulator_Simple_Battery_p_v ; t0 [ 5ULL ] = - ( X_idx_9 * X_idx_9 * 1.0E-6
) / - 1.0 * 1000.0 ; t0 [ 6ULL ] = Accumulator_Simple_Battery_p_v ; t0 [ 7ULL
] = 0.0 ; t0 [ 8ULL ] = 0.0 ; t0 [ 9ULL ] = 0.0 ; t0 [ 10ULL ] = 0.0 ; t0 [
11ULL ] = 0.0 ; t0 [ 12ULL ] = - X_idx_9 ; t0 [ 13ULL ] = - X_idx_9 ; t0 [
14ULL ] = X_idx_1 ; t0 [ 15ULL ] = Accumulator_Simple_Battery_p_v ; t0 [
16ULL ] = 0.0 ; t0 [ 17ULL ] = 0.0 ; t0 [ 18ULL ] = X_idx_1 ; t0 [ 19ULL ] =
0.0 ; t0 [ 20ULL ] = - X_idx_10 ; t0 [ 21ULL ] = - X_idx_11 ; t0 [ 22ULL ] =
- X_idx_12 ; t0 [ 23ULL ] = - X_idx_10 ; t0 [ 24ULL ] = - X_idx_11 ; t0 [
25ULL ] = - X_idx_12 ; t0 [ 26ULL ] = X_idx_14 ; t0 [ 27ULL ] = X_idx_13 ; t0
[ 28ULL ] = X_idx_15 ; t0 [ 29ULL ] = X_idx_14 ; t0 [ 30ULL ] = X_idx_13 ; t0
[ 31ULL ] = X_idx_15 ; t0 [ 32ULL ] = ( ( ( ( ( - X_idx_9 + - X_idx_19 ) + -
X_idx_20 ) + - X_idx_21 ) + X_idx_16 ) + X_idx_17 ) + X_idx_18 ; t0 [ 33ULL ]
= 0.0 ; t0 [ 34ULL ] = X_idx_1 ; t0 [ 35ULL ] = X_idx_1 ; t0 [ 36ULL ] =
X_idx_1 ; t0 [ 37ULL ] = X_idx_16 ; t0 [ 38ULL ] = X_idx_1 ; t0 [ 39ULL ] =
X_idx_13 ; t0 [ 40ULL ] = - X_idx_1 + X_idx_13 ; t0 [ 41ULL ] = X_idx_17 ; t0
[ 42ULL ] = X_idx_1 ; t0 [ 43ULL ] = X_idx_14 ; t0 [ 44ULL ] = - X_idx_1 +
X_idx_14 ; t0 [ 45ULL ] = X_idx_18 ; t0 [ 46ULL ] = X_idx_1 ; t0 [ 47ULL ] =
X_idx_15 ; t0 [ 48ULL ] = - X_idx_1 + X_idx_15 ; t0 [ 49ULL ] = ( ( -
X_idx_19 + - X_idx_10 ) + X_idx_17 ) + X_idx_22 ; t0 [ 50ULL ] = X_idx_14 ;
t0 [ 51ULL ] = 0.0 ; t0 [ 52ULL ] = - X_idx_14 ; t0 [ 53ULL ] = ( ( -
X_idx_20 + - X_idx_11 ) + X_idx_16 ) + X_idx_23 ; t0 [ 54ULL ] = X_idx_13 ;
t0 [ 55ULL ] = 0.0 ; t0 [ 56ULL ] = - X_idx_13 ; t0 [ 57ULL ] = ( ( -
X_idx_21 + - X_idx_12 ) + X_idx_18 ) + X_idx_24 ; t0 [ 58ULL ] = X_idx_15 ;
t0 [ 59ULL ] = 0.0 ; t0 [ 60ULL ] = - X_idx_15 ; t0 [ 61ULL ] = X_idx_10 ; t0
[ 62ULL ] = X_idx_11 ; t0 [ 63ULL ] = X_idx_12 ; t0 [ 64ULL ] = X_idx_14 ; t0
[ 65ULL ] = X_idx_13 ; t0 [ 66ULL ] = X_idx_15 ; t0 [ 67ULL ] = X_idx_14 ; t0
[ 68ULL ] = X_idx_13 ; t0 [ 69ULL ] = X_idx_15 ; t0 [ 70ULL ] = - X_idx_10 ;
t0 [ 71ULL ] = - X_idx_11 ; t0 [ 72ULL ] = - X_idx_12 ; t0 [ 73ULL ] =
X_idx_19 ; t0 [ 74ULL ] = X_idx_14 ; t0 [ 75ULL ] = X_idx_1 ; t0 [ 76ULL ] =
- X_idx_14 + X_idx_1 ; t0 [ 77ULL ] = U_idx_0 ; t0 [ 78ULL ] = X_idx_20 ; t0
[ 79ULL ] = X_idx_13 ; t0 [ 80ULL ] = X_idx_1 ; t0 [ 81ULL ] = - X_idx_13 +
X_idx_1 ; t0 [ 82ULL ] = U_idx_1 ; t0 [ 83ULL ] = X_idx_21 ; t0 [ 84ULL ] =
X_idx_15 ; t0 [ 85ULL ] = X_idx_1 ; t0 [ 86ULL ] = - X_idx_15 + X_idx_1 ; t0
[ 87ULL ] = U_idx_2 ; t0 [ 88ULL ] = X_idx_22 ; t0 [ 89ULL ] = 0.0 ; t0 [
90ULL ] = X_idx_14 ; t0 [ 91ULL ] = X_idx_14 ; t0 [ 92ULL ] = U_idx_3 ; t0 [
93ULL ] = X_idx_23 ; t0 [ 94ULL ] = 0.0 ; t0 [ 95ULL ] = X_idx_13 ; t0 [
96ULL ] = X_idx_13 ; t0 [ 97ULL ] = U_idx_4 ; t0 [ 98ULL ] = X_idx_24 ; t0 [
99ULL ] = 0.0 ; t0 [ 100ULL ] = X_idx_15 ; t0 [ 101ULL ] = X_idx_15 ; t0 [
102ULL ] = U_idx_5 ; t0 [ 103ULL ] = X_idx_1 ; t0 [ 104ULL ] = 0.0 ; t0 [
105ULL ] = X_idx_14 ; t0 [ 106ULL ] = X_idx_13 ; t0 [ 107ULL ] = X_idx_15 ;
t0 [ 108ULL ] = Bamocar_D3_Current_Control_Simple_IGBTs_Voltage_Sensor_V ; t0
[ 109ULL ] = 0.0 ; t0 [ 110ULL ] = 0.0 ; t0 [ 111ULL ] = X_idx_1 ; t0 [
112ULL ] = Bamocar_D3_Current_Control_Simple_IGBTs_Voltage_Sensor_V ; t0 [
113ULL ] = X_idx_14 ; t0 [ 114ULL ] = X_idx_13 ; t0 [ 115ULL ] = X_idx_15 ;
t0 [ 116ULL ] = X_idx_1 ; t0 [ 117ULL ] = 0.0 ; t0 [ 118ULL ] = X_idx_2 ; t0
[ 119ULL ] = - X_idx_25 ; t0 [ 120ULL ] = X_idx_2 ; t0 [ 121ULL ] = 0.0 ; t0
[ 122ULL ] = 0.0 ; t0 [ 123ULL ] = 0.0 ; t0 [ 124ULL ] = 0.0 ; t0 [ 125ULL ]
= 0.0 ; t0 [ 126ULL ] = X_idx_3 ; t0 [ 127ULL ] = 0.0 ; t0 [ 128ULL ] = 0.0 ;
t0 [ 129ULL ] = X_idx_14 ; t0 [ 130ULL ] = X_idx_13 ; t0 [ 131ULL ] =
X_idx_15 ; t0 [ 132ULL ] = X_idx_3 ; t0 [ 133ULL ] = X_idx_4 ; t0 [ 134ULL ]
= X_idx_3 * 9.5492965855137211 ; t0 [ 135ULL ] = X_idx_5 ; t0 [ 136ULL ] =
X_idx_6 ; t0 [ 137ULL ] = 0.0 ; t0 [ 138ULL ] = - X_idx_10 ; t0 [ 139ULL ] =
- X_idx_11 ; t0 [ 140ULL ] = - X_idx_12 ; t0 [ 141ULL ] = X_idx_14 ; t0 [
142ULL ] = X_idx_13 ; t0 [ 143ULL ] = X_idx_15 ; t0 [ 144ULL ] = X_idx_14 ;
t0 [ 145ULL ] = X_idx_13 ; t0 [ 146ULL ] = X_idx_15 ; t0 [ 147ULL ] =
X_idx_10 ; t0 [ 148ULL ] = X_idx_11 ; t0 [ 149ULL ] = X_idx_12 ; t0 [ 150ULL
] = 0.0 ; t0 [ 151ULL ] = X_idx_3 ; t0 [ 152ULL ] = X_idx_14 ; t0 [ 153ULL ]
= X_idx_4 * 57.295779513082323 ; t0 [ 154ULL ] = X_idx_4 ; t0 [ 155ULL ] =
X_idx_3 * 9.5492965855137211 ; t0 [ 156ULL ] = X_idx_13 ; t0 [ 157ULL ] =
X_idx_15 ; t0 [ 158ULL ] = X_idx_26 ; t0 [ 159ULL ] = - X_idx_10 ; t0 [
160ULL ] = - X_idx_11 ; t0 [ 161ULL ] = - X_idx_12 ; t0 [ 162ULL ] = X_idx_5
; t0 [ 163ULL ] = 0.0 ; t0 [ 164ULL ] = X_idx_6 ; t0 [ 165ULL ] = 0.0 ; t0 [
166ULL ] = X_idx_27 ; t0 [ 167ULL ] = X_idx_14 ; t0 [ 168ULL ] = X_idx_13 ;
t0 [ 169ULL ] = X_idx_15 ; t0 [ 170ULL ] = X_idx_27 ; t0 [ 171ULL ] = 0.0 ;
t0 [ 172ULL ] = X_idx_7 ; t0 [ 173ULL ] = 0.0 ; t0 [ 174ULL ] = X_idx_3 ; t0
[ 175ULL ] = X_idx_3 ; t0 [ 176ULL ] = X_idx_7 * 57.295779513082323 ; t0 [
177ULL ] = 0.0 ; t0 [ 178ULL ] = X_idx_3 ; t0 [ 179ULL ] = X_idx_3 ; t0 [
180ULL ] = X_idx_3 ; t0 [ 181ULL ] = - X_idx_27 ; t0 [ 182ULL ] = - X_idx_27
; t0 [ 183ULL ] = 0.0 ; t0 [ 184ULL ] = X_idx_3 ; t0 [ 185ULL ] = X_idx_3 ;
t0 [ 186ULL ] = X_idx_14 ; t0 [ 187ULL ] = X_idx_13 ; t0 [ 188ULL ] =
X_idx_15 ; t0 [ 189ULL ] = X_idx_3 ; t0 [ 190ULL ] = X_idx_3 * 3.27 ; t0 [
191ULL ] = X_idx_25 ; t0 [ 192ULL ] = X_idx_25 * - 3.27 ; t0 [ 193ULL ] = 0.0
; t0 [ 194ULL ] = 0.0 ; t0 [ 195ULL ] = X_idx_8 ; t0 [ 196ULL ] = 0.0 ; t0 [
197ULL ] = X_idx_2 ; t0 [ 198ULL ] = X_idx_2 ; t0 [ 199ULL ] = X_idx_8 *
57.295779513082323 ; t0 [ 200ULL ] = 0.0 ; t0 [ 201ULL ] = X_idx_2 ; t0 [
202ULL ] = X_idx_2 ; t0 [ 203ULL ] = X_idx_3 * 3.27 ; t0 [ 204ULL ] = -
X_idx_25 ; t0 [ 205ULL ] = - X_idx_25 ; t0 [ 206ULL ] = 0.0 ; t0 [ 207ULL ] =
X_idx_2 ; t0 [ 208ULL ] = X_idx_3 * 3.27 ; for ( b = 0 ; b < 209 ; b ++ ) {
out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t32 ; return 0 ; }
