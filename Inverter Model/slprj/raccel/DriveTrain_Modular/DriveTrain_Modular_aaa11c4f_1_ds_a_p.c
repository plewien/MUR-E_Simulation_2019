#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_a_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_a_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mA_P ; out . mNumCol = 28ULL ; out . mNumRow
= 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 2 ;
out . mJc [ 3 ] = 4 ; out . mJc [ 4 ] = 8 ; out . mJc [ 5 ] = 8 ; out . mJc [
6 ] = 9 ; out . mJc [ 7 ] = 10 ; out . mJc [ 8 ] = 10 ; out . mJc [ 9 ] = 10
; out . mJc [ 10 ] = 13 ; out . mJc [ 11 ] = 14 ; out . mJc [ 12 ] = 15 ; out
. mJc [ 13 ] = 16 ; out . mJc [ 14 ] = 16 ; out . mJc [ 15 ] = 16 ; out . mJc
[ 16 ] = 16 ; out . mJc [ 17 ] = 17 ; out . mJc [ 18 ] = 18 ; out . mJc [ 19
] = 19 ; out . mJc [ 20 ] = 20 ; out . mJc [ 21 ] = 21 ; out . mJc [ 22 ] =
22 ; out . mJc [ 23 ] = 22 ; out . mJc [ 24 ] = 22 ; out . mJc [ 25 ] = 22 ;
out . mJc [ 26 ] = 24 ; out . mJc [ 27 ] = 26 ; out . mJc [ 28 ] = 28 ; out .
mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 9 ; out . mIr [ 2 ] = 8 ; out . mIr [ 3 ] =
26 ; out . mIr [ 4 ] = 3 ; out . mIr [ 5 ] = 6 ; out . mIr [ 6 ] = 7 ; out .
mIr [ 7 ] = 26 ; out . mIr [ 8 ] = 4 ; out . mIr [ 9 ] = 5 ; out . mIr [ 10 ]
= 0 ; out . mIr [ 11 ] = 1 ; out . mIr [ 12 ] = 9 ; out . mIr [ 13 ] = 22 ;
out . mIr [ 14 ] = 23 ; out . mIr [ 15 ] = 24 ; out . mIr [ 16 ] = 1 ; out .
mIr [ 17 ] = 1 ; out . mIr [ 18 ] = 1 ; out . mIr [ 19 ] = 1 ; out . mIr [ 20
] = 1 ; out . mIr [ 21 ] = 1 ; out . mIr [ 22 ] = 2 ; out . mIr [ 23 ] = 27 ;
out . mIr [ 24 ] = 6 ; out . mIr [ 25 ] = 25 ; out . mIr [ 26 ] = 6 ; out .
mIr [ 27 ] = 27 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
