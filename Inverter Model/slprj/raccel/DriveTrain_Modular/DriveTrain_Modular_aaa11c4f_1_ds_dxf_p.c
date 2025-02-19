#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dxf_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_dxf_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXF_P ; out . mNumCol =
28ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 6 ; out . mJc [ 3 ] = 6 ; out . mJc [ 4 ] = 8 ; out . mJc [
5 ] = 13 ; out . mJc [ 6 ] = 18 ; out . mJc [ 7 ] = 23 ; out . mJc [ 8 ] = 23
; out . mJc [ 9 ] = 23 ; out . mJc [ 10 ] = 23 ; out . mJc [ 11 ] = 24 ; out
. mJc [ 12 ] = 25 ; out . mJc [ 13 ] = 26 ; out . mJc [ 14 ] = 32 ; out . mJc
[ 15 ] = 38 ; out . mJc [ 16 ] = 44 ; out . mJc [ 17 ] = 46 ; out . mJc [ 18
] = 48 ; out . mJc [ 19 ] = 50 ; out . mJc [ 20 ] = 52 ; out . mJc [ 21 ] =
54 ; out . mJc [ 22 ] = 56 ; out . mJc [ 23 ] = 58 ; out . mJc [ 24 ] = 60 ;
out . mJc [ 25 ] = 62 ; out . mJc [ 26 ] = 62 ; out . mJc [ 27 ] = 62 ; out .
mJc [ 28 ] = 62 ; out . mIr [ 0 ] = 10 ; out . mIr [ 1 ] = 11 ; out . mIr [ 2
] = 12 ; out . mIr [ 3 ] = 16 ; out . mIr [ 4 ] = 17 ; out . mIr [ 5 ] = 18 ;
out . mIr [ 6 ] = 4 ; out . mIr [ 7 ] = 5 ; out . mIr [ 8 ] = 4 ; out . mIr [
9 ] = 5 ; out . mIr [ 10 ] = 22 ; out . mIr [ 11 ] = 23 ; out . mIr [ 12 ] =
24 ; out . mIr [ 13 ] = 5 ; out . mIr [ 14 ] = 22 ; out . mIr [ 15 ] = 23 ;
out . mIr [ 16 ] = 24 ; out . mIr [ 17 ] = 25 ; out . mIr [ 18 ] = 4 ; out .
mIr [ 19 ] = 22 ; out . mIr [ 20 ] = 23 ; out . mIr [ 21 ] = 24 ; out . mIr [
22 ] = 25 ; out . mIr [ 23 ] = 13 ; out . mIr [ 24 ] = 14 ; out . mIr [ 25 ]
= 15 ; out . mIr [ 26 ] = 4 ; out . mIr [ 27 ] = 5 ; out . mIr [ 28 ] = 10 ;
out . mIr [ 29 ] = 14 ; out . mIr [ 30 ] = 17 ; out . mIr [ 31 ] = 20 ; out .
mIr [ 32 ] = 4 ; out . mIr [ 33 ] = 5 ; out . mIr [ 34 ] = 11 ; out . mIr [
35 ] = 13 ; out . mIr [ 36 ] = 16 ; out . mIr [ 37 ] = 19 ; out . mIr [ 38 ]
= 4 ; out . mIr [ 39 ] = 5 ; out . mIr [ 40 ] = 12 ; out . mIr [ 41 ] = 15 ;
out . mIr [ 42 ] = 18 ; out . mIr [ 43 ] = 21 ; out . mIr [ 44 ] = 10 ; out .
mIr [ 45 ] = 14 ; out . mIr [ 46 ] = 11 ; out . mIr [ 47 ] = 13 ; out . mIr [
48 ] = 12 ; out . mIr [ 49 ] = 15 ; out . mIr [ 50 ] = 13 ; out . mIr [ 51 ]
= 16 ; out . mIr [ 52 ] = 14 ; out . mIr [ 53 ] = 17 ; out . mIr [ 54 ] = 15
; out . mIr [ 55 ] = 18 ; out . mIr [ 56 ] = 13 ; out . mIr [ 57 ] = 19 ; out
. mIr [ 58 ] = 14 ; out . mIr [ 59 ] = 20 ; out . mIr [ 60 ] = 15 ; out . mIr
[ 61 ] = 21 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
