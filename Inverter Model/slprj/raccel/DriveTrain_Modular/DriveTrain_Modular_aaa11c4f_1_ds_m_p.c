#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_m_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T DriveTrain_Modular_aaa11c4f_1_ds_m_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mM_P ; out . mNumCol = 28ULL ; out . mNumRow
= 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ;
out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out . mJc [
6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ] = 8 ; out . mJc [ 9 ] = 9 ;
out . mJc [ 10 ] = 9 ; out . mJc [ 11 ] = 9 ; out . mJc [ 12 ] = 9 ; out .
mJc [ 13 ] = 9 ; out . mJc [ 14 ] = 9 ; out . mJc [ 15 ] = 9 ; out . mJc [ 16
] = 9 ; out . mJc [ 17 ] = 9 ; out . mJc [ 18 ] = 9 ; out . mJc [ 19 ] = 9 ;
out . mJc [ 20 ] = 9 ; out . mJc [ 21 ] = 9 ; out . mJc [ 22 ] = 9 ; out .
mJc [ 23 ] = 9 ; out . mJc [ 24 ] = 9 ; out . mJc [ 25 ] = 9 ; out . mJc [ 26
] = 9 ; out . mJc [ 27 ] = 9 ; out . mJc [ 28 ] = 9 ; out . mIr [ 0 ] = 0 ;
out . mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 2 ; out . mIr [ 3 ] = 6 ; out . mIr [
4 ] = 3 ; out . mIr [ 5 ] = 4 ; out . mIr [ 6 ] = 5 ; out . mIr [ 7 ] = 7 ;
out . mIr [ 8 ] = 8 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
