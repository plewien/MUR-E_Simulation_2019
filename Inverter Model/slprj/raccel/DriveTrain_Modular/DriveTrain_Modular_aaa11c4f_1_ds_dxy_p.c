#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dxy_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_dxy_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXY_P ; out . mNumCol =
28ULL ; out . mNumRow = 11ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 1 ; out . mJc [ 3 ] = 2 ; out . mJc [ 4 ] = 3 ; out . mJc [
5 ] = 3 ; out . mJc [ 6 ] = 3 ; out . mJc [ 7 ] = 3 ; out . mJc [ 8 ] = 4 ;
out . mJc [ 9 ] = 5 ; out . mJc [ 10 ] = 6 ; out . mJc [ 11 ] = 9 ; out . mJc
[ 12 ] = 12 ; out . mJc [ 13 ] = 15 ; out . mJc [ 14 ] = 15 ; out . mJc [ 15
] = 15 ; out . mJc [ 16 ] = 15 ; out . mJc [ 17 ] = 15 ; out . mJc [ 18 ] =
15 ; out . mJc [ 19 ] = 15 ; out . mJc [ 20 ] = 15 ; out . mJc [ 21 ] = 15 ;
out . mJc [ 22 ] = 15 ; out . mJc [ 23 ] = 15 ; out . mJc [ 24 ] = 15 ; out .
mJc [ 25 ] = 15 ; out . mJc [ 26 ] = 16 ; out . mJc [ 27 ] = 16 ; out . mJc [
28 ] = 17 ; out . mIr [ 0 ] = 4 ; out . mIr [ 1 ] = 9 ; out . mIr [ 2 ] = 6 ;
out . mIr [ 3 ] = 5 ; out . mIr [ 4 ] = 8 ; out . mIr [ 5 ] = 0 ; out . mIr [
6 ] = 1 ; out . mIr [ 7 ] = 2 ; out . mIr [ 8 ] = 3 ; out . mIr [ 9 ] = 1 ;
out . mIr [ 10 ] = 2 ; out . mIr [ 11 ] = 3 ; out . mIr [ 12 ] = 1 ; out .
mIr [ 13 ] = 2 ; out . mIr [ 14 ] = 3 ; out . mIr [ 15 ] = 10 ; out . mIr [
16 ] = 7 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
