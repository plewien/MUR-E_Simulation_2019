#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_tdxf_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_tdxf_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDXF_P ; out . mNumCol =
28ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 8 ; out . mJc [ 3 ] = 10 ; out . mJc [ 4 ] = 16 ; out . mJc
[ 5 ] = 21 ; out . mJc [ 6 ] = 27 ; out . mJc [ 7 ] = 33 ; out . mJc [ 8 ] =
33 ; out . mJc [ 9 ] = 33 ; out . mJc [ 10 ] = 36 ; out . mJc [ 11 ] = 38 ;
out . mJc [ 12 ] = 40 ; out . mJc [ 13 ] = 42 ; out . mJc [ 14 ] = 48 ; out .
mJc [ 15 ] = 54 ; out . mJc [ 16 ] = 60 ; out . mJc [ 17 ] = 63 ; out . mJc [
18 ] = 66 ; out . mJc [ 19 ] = 69 ; out . mJc [ 20 ] = 72 ; out . mJc [ 21 ]
= 75 ; out . mJc [ 22 ] = 78 ; out . mJc [ 23 ] = 80 ; out . mJc [ 24 ] = 82
; out . mJc [ 25 ] = 84 ; out . mJc [ 26 ] = 86 ; out . mJc [ 27 ] = 88 ; out
. mJc [ 28 ] = 90 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 9 ; out . mIr [ 2
] = 10 ; out . mIr [ 3 ] = 11 ; out . mIr [ 4 ] = 12 ; out . mIr [ 5 ] = 16 ;
out . mIr [ 6 ] = 17 ; out . mIr [ 7 ] = 18 ; out . mIr [ 8 ] = 8 ; out . mIr
[ 9 ] = 26 ; out . mIr [ 10 ] = 3 ; out . mIr [ 11 ] = 4 ; out . mIr [ 12 ] =
5 ; out . mIr [ 13 ] = 6 ; out . mIr [ 14 ] = 7 ; out . mIr [ 15 ] = 26 ; out
. mIr [ 16 ] = 4 ; out . mIr [ 17 ] = 5 ; out . mIr [ 18 ] = 22 ; out . mIr [
19 ] = 23 ; out . mIr [ 20 ] = 24 ; out . mIr [ 21 ] = 4 ; out . mIr [ 22 ] =
5 ; out . mIr [ 23 ] = 22 ; out . mIr [ 24 ] = 23 ; out . mIr [ 25 ] = 24 ;
out . mIr [ 26 ] = 25 ; out . mIr [ 27 ] = 4 ; out . mIr [ 28 ] = 5 ; out .
mIr [ 29 ] = 22 ; out . mIr [ 30 ] = 23 ; out . mIr [ 31 ] = 24 ; out . mIr [
32 ] = 25 ; out . mIr [ 33 ] = 0 ; out . mIr [ 34 ] = 1 ; out . mIr [ 35 ] =
9 ; out . mIr [ 36 ] = 13 ; out . mIr [ 37 ] = 22 ; out . mIr [ 38 ] = 14 ;
out . mIr [ 39 ] = 23 ; out . mIr [ 40 ] = 15 ; out . mIr [ 41 ] = 24 ; out .
mIr [ 42 ] = 4 ; out . mIr [ 43 ] = 5 ; out . mIr [ 44 ] = 10 ; out . mIr [
45 ] = 14 ; out . mIr [ 46 ] = 17 ; out . mIr [ 47 ] = 20 ; out . mIr [ 48 ]
= 4 ; out . mIr [ 49 ] = 5 ; out . mIr [ 50 ] = 11 ; out . mIr [ 51 ] = 13 ;
out . mIr [ 52 ] = 16 ; out . mIr [ 53 ] = 19 ; out . mIr [ 54 ] = 4 ; out .
mIr [ 55 ] = 5 ; out . mIr [ 56 ] = 12 ; out . mIr [ 57 ] = 15 ; out . mIr [
58 ] = 18 ; out . mIr [ 59 ] = 21 ; out . mIr [ 60 ] = 1 ; out . mIr [ 61 ] =
10 ; out . mIr [ 62 ] = 14 ; out . mIr [ 63 ] = 1 ; out . mIr [ 64 ] = 11 ;
out . mIr [ 65 ] = 13 ; out . mIr [ 66 ] = 1 ; out . mIr [ 67 ] = 12 ; out .
mIr [ 68 ] = 15 ; out . mIr [ 69 ] = 1 ; out . mIr [ 70 ] = 13 ; out . mIr [
71 ] = 16 ; out . mIr [ 72 ] = 1 ; out . mIr [ 73 ] = 14 ; out . mIr [ 74 ] =
17 ; out . mIr [ 75 ] = 1 ; out . mIr [ 76 ] = 15 ; out . mIr [ 77 ] = 18 ;
out . mIr [ 78 ] = 13 ; out . mIr [ 79 ] = 19 ; out . mIr [ 80 ] = 14 ; out .
mIr [ 81 ] = 20 ; out . mIr [ 82 ] = 15 ; out . mIr [ 83 ] = 21 ; out . mIr [
84 ] = 2 ; out . mIr [ 85 ] = 27 ; out . mIr [ 86 ] = 6 ; out . mIr [ 87 ] =
25 ; out . mIr [ 88 ] = 6 ; out . mIr [ 89 ] = 27 ; ( void ) sys ; ( void )
t2 ; return 0 ; }
