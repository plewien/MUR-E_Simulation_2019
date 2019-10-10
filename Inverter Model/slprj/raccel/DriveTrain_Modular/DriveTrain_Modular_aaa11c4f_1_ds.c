#include "__cf_DriveTrain_Modular.h"
#include "ne_ds.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_zc.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_tdxy_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dxy_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_y.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_obs_il.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_obs_all.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_obs_act.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_obs_exp.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_m_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_log.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_tdxf_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_a_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dtf.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dxf_p.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_dxf.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_mode.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_f.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds.h"
#include "ssc_ml_fun.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_external_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_sys_struct.h"
#include "DriveTrain_Modular_aaa11c4f_1_ds_externals.h"
static int32_T ds_m ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxm_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dxm
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dum ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_a ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vmf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dnf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dnf ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dnf_v_x ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ic ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_im ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_id ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_icr_il ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_mdxy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_tduy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dxy
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_cache_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_cache_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_sfo ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_assert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_t ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_v ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxdelt_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dudelt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dudelt ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtdelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_l ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_j ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_r
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qx ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_qu ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qt ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_q1 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qx_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_var_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_eq_tol ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_slv ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_a_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_c ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_f ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tduf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dnf_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf_v_x ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_tduicr_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dty_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_zc ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cache_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_r
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_init_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_log ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_assert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_passert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_iassert (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_del_t ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v0 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_tmax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_act ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_all (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_il ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_l ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_j ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qu_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_var_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_eq_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_slv ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static void release_reference ( NeDynamicSystem * ds ) ; static void
get_reference ( NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics
( const NeDynamicSystem * ds ) ; static void expand ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , PmRealVector * out ) ; static
NeEquationData s_equation_data [ 28 ] = { { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "DriveTrain_Modular/Accumulator (Simple)/Battery" ,
2U , 0U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1U , 2U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Drivetrain Inertia" , 2U , 3U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 2U , 5U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 7U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 8U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 9U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 2U ,
10U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 2U , 12U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Accumulator (Simple)/Current Sensor" , 1U , 14U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 3U , 15U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 3U , 18U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 3U , 21U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 3U , 24U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 3U , 27U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 3U , 30U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 3U , 33U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 3U , 36U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 3U , 39U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 3U , 42U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 3U , 45U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 3U , 48U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 51U
, FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 52U
, FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 53U
, FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 54U
, FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"DriveTrain_Modular/Resolver/Ideal Torque Sensor" , 1U , 55U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 1 , NE_EQUATION_DOMAIN_TIME , "" , 4U , 56U , TRUE ,
1.0 , "1" , } } ; static NeVariableData s_variable_data [ 28 ] = { {
"Accumulator_Simple.Battery.charge" , 0U , 0 ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1.0 , "1" , 0.0 , TRUE ,
1U , 1U , NE_INIT_MODE_NONE , "Charge" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Capacitor_Bank.vc"
, 0U , 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Capacitor voltage"
, } , { "Drivetrain_Inertia.w" , 0U , 0 ,
"DriveTrain_Modular/Drivetrain Inertia" , 1.0 , "1" , 0.0 , TRUE , 1U , 1U ,
NE_INIT_MODE_MANDATORY , "Rotational velocity" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_velocity" ,
0U , 0 , "DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" ,
1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Rotor speed" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position_diff"
, 0U , 0 , "DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE ,
"angular_position_diff" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_d" , 0U , 0 ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1.0 , "1"
, 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "D-axis current" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_q" , 0U , 0 ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1.0 , "1"
, 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_NONE , "Q-axis current" , } , {
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.phi" , 0U , 0 ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1.0
, "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Angle" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.phi" , 0U , 0 ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1.0 , "1" ,
0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Angle" , } , {
"Accumulator_Simple.Battery.i" , 0U , 0 ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1.0 , "1" , 0.0 , FALSE ,
1U , 1U , NE_INIT_MODE_OPTIONAL , "Current (positive in)" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_a" , 0U , 0 ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1.0 , "1"
, 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "i_a" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_b" , 0U , 0 ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1.0 , "1"
, 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "i_b" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_c" , 0U , 0 ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1.0 , "1"
, 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "i_c" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1.p.v" ,
0U , 1 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2.p.v" ,
0U , 1 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3.p.v" ,
0U , 1 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.i" , 0U
, 0 ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Gear_Ratio.t_in" , 0U , 0 , "DriveTrain_Modular/Gear Ratio" , 1.0 , "1" ,
0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Input shaft incoming torque" , }
, {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.electrical_torque"
, 0U , 0 , "DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque"
, } , { "Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.torque" ,
0U , 0 , "DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" ,
1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } } ;
static NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 185 ] = { { "Accumulator_Simple.Battery.charge" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "hr*A" , 1.0 ,
"C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Charge" , } , {
"Accumulator_Simple.Battery.i" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_OPTIONAL , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Accumulator_Simple.Battery.n.v" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.Battery.num_cycles" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "1" , 1.0 , "1"
, NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Discharge cycles" , } , {
"Accumulator_Simple.Battery.p.v" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.Battery.power_dissipated" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Accumulator_Simple.Battery.v" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.Battery.vrc1" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc1" , } , {
"Accumulator_Simple.Battery.vrc2" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc2" , } , {
"Accumulator_Simple.Battery.vrc3" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc3" , } , {
"Accumulator_Simple.Battery.vrc4" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc4" , } , {
"Accumulator_Simple.Battery.vrc5" ,
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc5" , } , {
"Accumulator_Simple.Current_Sensor.I" ,
"DriveTrain_Modular/Accumulator (Simple)/Current Sensor" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Accumulator_Simple.Current_Sensor.i1" ,
"DriveTrain_Modular/Accumulator (Simple)/Current Sensor" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Accumulator_Simple.Current_Sensor.n.v" ,
"DriveTrain_Modular/Accumulator (Simple)/Current Sensor" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.Current_Sensor.p.v" ,
"DriveTrain_Modular/Accumulator (Simple)/Current Sensor" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.Current_Sensor.v1" ,
"DriveTrain_Modular/Accumulator (Simple)/Current Sensor" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.Electrical_Reference.V.v" ,
"DriveTrain_Modular/Accumulator (Simple)/Electrical Reference" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Accumulator_Simple.v0.v" , "DriveTrain_Modular/Accumulator (Simple)" , 1U ,
1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Accumulator_Simple.v1.v" , "DriveTrain_Modular/Accumulator (Simple)" , 1U ,
1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Current_Sensor.I" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Current Sensor"
, 1U , 3U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Current_Sensor.I_output" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Current Sensor"
, 1U , 3U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Current_Sensor.N1.V" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Current Sensor"
, 1U , 3U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Current_Sensor.N2.V" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Current Sensor"
, 1U , 3U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Capacitor_Bank.i"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Capacitor_Bank.n.v"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Capacitor_Bank.p.v"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Capacitor_Bank.v"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Capacitor_Bank.vc"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Capacitor Bank"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , }
, { "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode4.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode4.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode4.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode4.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode5.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode5.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode5.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode5.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode6.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode6.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode6.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode6.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.I"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 3U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.N.V"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 3U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.a.v"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.b.v"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.c.v"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.i_a"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_a" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.i_b"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_b" , } , {
 "Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Phase_Splitter.i_c"
,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Phase Splitter"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_c" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.vT" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.vT" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.vT" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.vT" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.vT" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.i" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.n.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.p.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.vT" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.v0.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.v1.v" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.x.V" ,
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter"
, 1U , 3U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.V" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.i1" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Voltage Sensor"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.n.v" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.p.v" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.v1" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.iabc.V" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" , 1U , 3U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.v0.v" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Bamocar_D3_Current_Control_Simple_IGBTs.v1.v" ,
"DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Drivetrain_Inertia.I.w" , "DriveTrain_Modular/Drivetrain Inertia" , 1U , 1U
, "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Drivetrain_Inertia.t" , "DriveTrain_Modular/Drivetrain Inertia" , 1U ,
1U , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Drivetrain_Inertia.w" , "DriveTrain_Modular/Drivetrain Inertia" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Emrax_208.Electrical_Reference1.V.v" ,
"DriveTrain_Modular/Emrax 208/Electrical Reference1" , 1U , 1U , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Emrax_208.Gmin.i" ,
"DriveTrain_Modular/Emrax 208/Gmin" , 1U , 1U , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Emrax_208.Gmin.n.v"
, "DriveTrain_Modular/Emrax 208/Gmin" , 1U , 1U , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Emrax_208.Gmin.p.v"
, "DriveTrain_Modular/Emrax 208/Gmin" , 1U , 1U , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Emrax_208.Gmin.v" ,
"DriveTrain_Modular/Emrax 208/Gmin" , 1U , 1U , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Emrax_208.Load.w" ,
"DriveTrain_Modular/Emrax 208" , 1U , 1U , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Mechanical_Rotational_Reference1.W.w" ,
"DriveTrain_Modular/Emrax 208/Mechanical Rotational Reference1" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.C.w" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.N.V" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 3U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.R.w" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.angular_position" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotor angle" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.angular_velocity" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rpm" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotor speed" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.i_d" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "D-axis current" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.i_q" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Q-axis current" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.n.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.I" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 3U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.N.V" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 3U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.a.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.b.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.c.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_a" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_a" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_b" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_b" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_c" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_c" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.C.w" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.R.w" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.a.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"deg" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotor angle" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position_diff"
, "DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U
, "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "angular_position_diff" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_velocity" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"rpm" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotor speed" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.b.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.c.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.electrical_torque"
, "DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U
, "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_a" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_a" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_b" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_b" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_c" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_c" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_d" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "D-axis current" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_n" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_n" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_q" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Q-axis current" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.n.v" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.torque" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_a" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v_a" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_b" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v_b" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_c" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v_c" , } , {
"Emrax_208.Permanent_Magnet_Synchronous_Motor.torque" ,
"DriveTrain_Modular/Emrax 208/Permanent Magnet Synchronous Motor" , 1U , 1U ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Emrax_208.Resolver.C.w" , "DriveTrain_Modular/Emrax 208/Resolver" , 1U , 1U
, "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" ,
} , { "Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.A" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A" , } , {
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.C.w" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.R.w" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.W" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W" , } , {
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.phi" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "deg" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angle" , } , {
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.t" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.w" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Rotational Motion Sensor" , 1U ,
1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , }
, { "Emrax_208.Resolver.Ideal_Torque_Sensor.C.w" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Torque Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Resolver.Ideal_Torque_Sensor.R.w" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Torque Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Emrax_208.Resolver.Ideal_Torque_Sensor.T" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Torque Sensor" , 1U , 1U , "N*m"
, 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Emrax_208.Resolver.Ideal_Torque_Sensor.t" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Torque Sensor" , 1U , 1U , "N*m"
, 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Emrax_208.Resolver.Ideal_Torque_Sensor.w" ,
"DriveTrain_Modular/Emrax 208/Resolver/Ideal Torque Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } , {
"Emrax_208.Resolver.Load.w" , "DriveTrain_Modular/Emrax 208/Resolver" , 1U ,
1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Emrax_208.Resolver.R.w" , "DriveTrain_Modular/Emrax 208/Resolver" ,
1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , { "Emrax_208.iabc.V" ,
"DriveTrain_Modular/Emrax 208" , 1U , 3U , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , { "Gear_Ratio.O.w" ,
"DriveTrain_Modular/Gear Ratio" , 1U , 1U , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Gear_Ratio.S.w" , "DriveTrain_Modular/Gear Ratio" , 1U , 1U , "rad/s" , 1.0
, "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Gear_Ratio.t_in" , "DriveTrain_Modular/Gear Ratio" , 1U , 1U , "N*m" , 1.0 ,
"N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input shaft incoming torque" , } , {
"Gear_Ratio.t_out" , "DriveTrain_Modular/Gear Ratio" , 1U , 1U , "N*m" , 1.0
, "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Output shaft incoming torque" , } , {
"Mechanical_Rotational_Reference.W.w" ,
"DriveTrain_Modular/Mechanical Rotational Reference" , 1U , 1U , "rad/s" ,
1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Resolver.C.w" , "DriveTrain_Modular/Resolver" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.A" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.C.w" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.R.w" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.W" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.phi" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"deg" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angle" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.t" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Resolver.Ideal_Rotational_Motion_Sensor.w" ,
"DriveTrain_Modular/Resolver/Ideal Rotational Motion Sensor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } , {
"Resolver.Ideal_Torque_Sensor.C.w" ,
"DriveTrain_Modular/Resolver/Ideal Torque Sensor" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Resolver.Ideal_Torque_Sensor.R.w" ,
"DriveTrain_Modular/Resolver/Ideal Torque Sensor" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Resolver.Ideal_Torque_Sensor.T" ,
"DriveTrain_Modular/Resolver/Ideal Torque Sensor" , 1U , 1U , "N*m" , 1.0 ,
"N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Resolver.Ideal_Torque_Sensor.t" ,
"DriveTrain_Modular/Resolver/Ideal Torque Sensor" , 1U , 1U , "N*m" , 1.0 ,
"N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Resolver.Ideal_Torque_Sensor.w" ,
"DriveTrain_Modular/Resolver/Ideal Torque Sensor" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } , {
"Resolver.Load.w" , "DriveTrain_Modular/Resolver" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Resolver.R.w" , "DriveTrain_Modular/Resolver" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 12 ] = {
{
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1U , 0U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1U , 1U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1U , 2U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 1U , 3U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode4" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 1U , 4U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode5" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 1U , 5U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode6" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 6U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 7U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 8U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 9U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 10U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 11U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 12 ] = { {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } } ; static NeAssertData
s_assert_data [ 14 ] = { { "DriveTrain_Modular/Accumulator (Simple)/Battery"
, 1U , 0U , "Accumulator_Simple.Battery" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+sources/battery.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
"DriveTrain_Modular/Accumulator (Simple)/Battery" , 1U , 1U ,
"Accumulator_Simple.Battery" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+sources/battery.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode1"
, 1U , 2U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode1" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode2"
, 1U , 3U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode2" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode3"
, 1U , 4U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode3" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode4"
, 1U , 5U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode4" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode5"
, 1U , 6U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode5" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Diode6"
, 1U , 7U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Diode6" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch"
, 1U , 8U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch1"
, 1U , 9U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch2"
, 1U , 10U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch3"
, 1U , 11U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch4"
, 1U , 12U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "DriveTrain_Modular/Bamocar D3 Current Control (Simple IGBTs)/Three-Phase Inverter/Switch5"
, 1U , 13U ,
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5" ,
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 14 ] = { {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+sources/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+sources/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 34U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 34U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 34U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 34U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 34U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 34U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 16U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 16U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 16U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 16U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 16U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 16U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 60 ] = { {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+sources/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+sources/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 32U , 5U , 32U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 31U , 5U , 31U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 31U , 20U , 31U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 42U , 5U , 42U , 12U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 42U , 9U , 42U , 17U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 42U , 5U , 42U , 12U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 42U , 9U , 42U , 17U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+sensors/current.ssc"
, 32U , 5U , 32U , 20U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 7U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 28U , 7U , 28U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 7U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 28U , 7U , 28U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 7U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 28U , 7U , 28U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 7U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 28U , 7U , 28U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 7U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 28U , 7U , 28U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 25U , 8U , 25U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 26U , 7U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 28U , 7U , 28U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 42U , 9U , 42U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 9U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 42U , 9U , 42U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 9U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 42U , 9U , 42U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 9U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 42U , 9U , 42U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 9U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 42U , 9U , 42U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 9U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 41U , 8U , 41U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 42U , 9U , 42U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 44U , 9U , 44U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+mechanisms/gear_box.ssc"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData s_real_parameter_data
[ 1 ] = { { "Vnom" , "" , "" , 0U , 1U , } } ; static NeDsMethodOutput *
ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P .
mNumCol = 28 ; out -> mM_P . mNumRow = 28 ; out -> mM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mM_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 9 ) ; return out ; } static NeDsMethodOutput * ds_output_m ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 9 ; out -> mM . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 9 ) ;
return out ; } static NeDsMethodOutput * ds_output_vmm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 9 ; out -> mVMM . mX
= ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T )
, 9 ) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 28 ; out ->
mDXM_P . mNumRow = 9 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 6 ; out ->
mDUM_P . mNumRow = 9 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 9 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 28 ; out ->
mA_P . mNumRow = 28 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 28 ) ;
return out ; } static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 28 ; out -> mA . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 28 ) ; return out
; } static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 6 ; out -> mB_P . mNumRow
= 28 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 7 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 0 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 28 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 28 ; out -> mF . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 28 ) ; return out
; } static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 28 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 28
) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 28 ; out -> mSLF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 28 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 28 ; out ->
mDXF_P . mNumRow = 28 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 62 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 62 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
62 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 6 ; out ->
mDUF_P . mNumRow = 28 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 28 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 5 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 28 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 6 ; out ->
mTDUF_P . mNumRow = 28 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 28 ; out ->
mTDXF_P . mNumRow = 28 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 90 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 15 ; out ->
mDNF_P . mNumRow = 28 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 0 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 28 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_ic
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 28 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 3 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 3 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 3 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 3 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 3 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 3 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 3 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 3 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 28 ; out ->
mDXICR_P . mNumRow = 3 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 )
; return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 6 ; out ->
mTDUICR_P . mNumRow = 3 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mduy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 6 ; out ->
mMDUY_P . mNumRow = 11 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mMDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_mdxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 28 ; out ->
mMDXY_P . mNumRow = 11 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mMDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 6 ; out ->
mTDUY_P . mNumRow = 11 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mTDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 28 ; out ->
mTDXY_P . mNumRow = 11 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; out -> mTDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 17 ) ;
return out ; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 11 ; out -> mY . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 11 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 28 ; out -> mDXY_P .
mNumRow = 11 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 29 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 17 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 17 ; out -> mDXY . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 17 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 6 ; out ->
mDUY_P . mNumRow = 11 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 11 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 12 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
12 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 12 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 12 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFO . mN = 0 ; out -> mSFO . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_sfp ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFP . mN = 0 ; out -> mSFP . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_init_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out ->
mINIT_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out
-> mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 209 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 209 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 14 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 14 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 28 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 29 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 6 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 209 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 209 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 209 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 209 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 209 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 209
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 209 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 209 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 1 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 1 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 28 ; out -> mQX_P .
mNumRow = 28 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 29 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 6 ; out -> mQU_P .
mNumRow = 28 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 7 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 28 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 28 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 28 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 28 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 28 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 28 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 28 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 28 ) ; return out ; } static void release_reference (
NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem *
) ds ; if ( -- _ds -> mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds ->
mAlloc , _ds ) ; } } static void get_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt
; } static NeDynamicSystem * diagnostics ( const NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ne_ds_get_reference ( &
_ds -> mBase ) ; return & _ds -> mBase ; } static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out )
{ ( void ) ds ; memcpy ( out -> mX , in -> mX . mX , sizeof ( real_T ) * out
-> mN ) ; } NeDynamicSystem * DriveTrain_Modular_aaa11c4f_1_dae_ds (
PmAllocator * allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ;
static NeDsIoInfo input_info [ 6 ] ; static NeDsIoInfo output_info [ 9 ] ;
_ds = ( _NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 28 ; ds ->
mNumDiscreteRealVariables = 0 ; ds -> mNumDifferentialVariables = 9 ; ds ->
mNumEquations = 28 ; ds -> mNumICResiduals = 3 ; ds -> mNumModes = 12 ; ds ->
mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds ->
mNumObservables = 185 ; ds -> mNumObservableElements = 209 ; ds -> mNumZcs =
12 ; ds -> mNumAsserts = 14 ; ds -> mNumAssertRanges = 14 ; ds ->
mNumParamAsserts = 0 ; ds -> mNumParamAssertRanges = 0 ; ds ->
mNumInitialAsserts = 0 ; ds -> mNumInitialAssertRanges = 0 ; ds -> mNumRanges
= 12 ; ds -> mNumEquationRanges = 60 ; ds -> mNumFundamentalSamples = 0 ; ds
-> mNumDelays = 0 ; ds -> mNumLogicalParameters = 0 ; ds ->
mNumIntegerParameters = 0 ; ds -> mNumIndexParameters = 0 ; ds ->
mNumRealParameters = 1 ; ds -> mNumLogicalDerivedParameters = 0 ; ds ->
mNumIntegerDerivedParameters = 0 ; ds -> mNumIndexDerivedParameters = 0 ; ds
-> mNumRealDerivedParameters = 1 ; ds -> mIsOutputLinear = TRUE ; ds ->
mIsOutputSwitchedLinear = TRUE ; ds -> mNumIo [ NE_INPUT_IO_TYPE ] = 6 ;
input_info [ 0 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.vT" ;
input_info [ 0 ] . mM = 1 ; input_info [ 0 ] . mN = 1 ; input_info [ 0 ] .
mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch.vT" ;
input_info [ 0 ] . mUnit = "1" ; input_info [ 1 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.vT" ;
input_info [ 1 ] . mM = 1 ; input_info [ 1 ] . mN = 1 ; input_info [ 1 ] .
mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch1.vT" ;
input_info [ 1 ] . mUnit = "1" ; input_info [ 2 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.vT" ;
input_info [ 2 ] . mM = 1 ; input_info [ 2 ] . mN = 1 ; input_info [ 2 ] .
mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch2.vT" ;
input_info [ 2 ] . mUnit = "1" ; input_info [ 3 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.vT" ;
input_info [ 3 ] . mM = 1 ; input_info [ 3 ] . mN = 1 ; input_info [ 3 ] .
mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch3.vT" ;
input_info [ 3 ] . mUnit = "1" ; input_info [ 4 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.vT" ;
input_info [ 4 ] . mM = 1 ; input_info [ 4 ] . mN = 1 ; input_info [ 4 ] .
mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch4.vT" ;
input_info [ 4 ] . mUnit = "1" ; input_info [ 5 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.vT" ;
input_info [ 5 ] . mM = 1 ; input_info [ 5 ] . mN = 1 ; input_info [ 5 ] .
mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Three_Phase_Inverter.Switch5.vT" ;
input_info [ 5 ] . mUnit = "1" ; ds -> mIo [ NE_INPUT_IO_TYPE ] = input_info
; ds -> mNumIo [ NE_OUTPUT_IO_TYPE ] = 9 ; output_info [ 0 ] . mIdentifier =
"Accumulator_Simple.Current_Sensor.I" ; output_info [ 0 ] . mM = 1 ;
output_info [ 0 ] . mN = 1 ; output_info [ 0 ] . mName =
"Accumulator_Simple.Current_Sensor.I" ; output_info [ 0 ] . mUnit = "A" ;
output_info [ 1 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Current_Sensor.I_output" ;
output_info [ 1 ] . mM = 1 ; output_info [ 1 ] . mN = 3 ; output_info [ 1 ] .
mName = "Bamocar_D3_Current_Control_Simple_IGBTs.Current_Sensor.I_output" ;
output_info [ 1 ] . mUnit = "A" ; output_info [ 2 ] . mIdentifier =
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.V" ; output_info [ 2
] . mM = 1 ; output_info [ 2 ] . mN = 1 ; output_info [ 2 ] . mName =
"Bamocar_D3_Current_Control_Simple_IGBTs.Voltage_Sensor.V" ; output_info [ 2
] . mUnit = "V" ; output_info [ 3 ] . mIdentifier =
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.A" ; output_info [ 3 ] .
mM = 1 ; output_info [ 3 ] . mN = 1 ; output_info [ 3 ] . mName =
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.A" ; output_info [ 3 ] .
mUnit = "rad" ; output_info [ 4 ] . mIdentifier =
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.W" ; output_info [ 4 ] .
mM = 1 ; output_info [ 4 ] . mN = 1 ; output_info [ 4 ] . mName =
"Emrax_208.Resolver.Ideal_Rotational_Motion_Sensor.W" ; output_info [ 4 ] .
mUnit = "rad/s" ; output_info [ 5 ] . mIdentifier =
"Emrax_208.Resolver.Ideal_Torque_Sensor.T" ; output_info [ 5 ] . mM = 1 ;
output_info [ 5 ] . mN = 1 ; output_info [ 5 ] . mName =
"Emrax_208.Resolver.Ideal_Torque_Sensor.T" ; output_info [ 5 ] . mUnit =
"N*m" ; output_info [ 6 ] . mIdentifier =
"Resolver.Ideal_Rotational_Motion_Sensor.A" ; output_info [ 6 ] . mM = 1 ;
output_info [ 6 ] . mN = 1 ; output_info [ 6 ] . mName =
"Resolver.Ideal_Rotational_Motion_Sensor.A" ; output_info [ 6 ] . mUnit =
"rad" ; output_info [ 7 ] . mIdentifier =
"Resolver.Ideal_Rotational_Motion_Sensor.W" ; output_info [ 7 ] . mM = 1 ;
output_info [ 7 ] . mN = 1 ; output_info [ 7 ] . mName =
"Resolver.Ideal_Rotational_Motion_Sensor.W" ; output_info [ 7 ] . mUnit =
"rad/s" ; output_info [ 8 ] . mIdentifier = "Resolver.Ideal_Torque_Sensor.T"
; output_info [ 8 ] . mM = 1 ; output_info [ 8 ] . mN = 1 ; output_info [ 8 ]
. mName = "Resolver.Ideal_Torque_Sensor.T" ; output_info [ 8 ] . mUnit =
"N*m" ; ds -> mIo [ NE_OUTPUT_IO_TYPE ] = output_info ; ds ->
mReleaseReference = release_reference ; ds -> mGetReference = get_reference ;
ds -> mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds ->
mMethods [ NE_DS_METHOD_M_P ] = DriveTrain_Modular_aaa11c4f_1_ds_m_p ; ds ->
mMakeOutput [ NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [
NE_DS_METHOD_M ] = ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m
; ds -> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [
NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds ->
mMethods [ NE_DS_METHOD_DXM ] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM
] = ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_A_P ] =
DriveTrain_Modular_aaa11c4f_1_ds_a_p ; ds -> mMakeOutput [ NE_DS_METHOD_A_P ]
= ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] = ds_a ; ds ->
mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a ; ds -> mMethods [
NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [ NE_DS_METHOD_B_P ] =
ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput
[ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [ NE_DS_METHOD_C_P ] =
ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] = ds_output_c_p ; ds ->
mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput [ NE_DS_METHOD_C ] =
ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] =
DriveTrain_Modular_aaa11c4f_1_ds_f ; ds -> mMakeOutput [ NE_DS_METHOD_F ] =
ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] = ds_vmf ; ds ->
mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [
NE_DS_METHOD_DXF_P ] = DriveTrain_Modular_aaa11c4f_1_ds_dxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [
NE_DS_METHOD_DXF ] = DriveTrain_Modular_aaa11c4f_1_ds_dxf ; ds -> mMakeOutput
[ NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ]
= ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds
-> mMethods [ NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [
NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] =
ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds ->
mMethods [ NE_DS_METHOD_DTF ] = DriveTrain_Modular_aaa11c4f_1_ds_dtf ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF ] = ds_output_dtf ; ds -> mMethods [
NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DDF_P ] =
ds_output_ddf_p ; ds -> mMethods [ NE_DS_METHOD_DDF ] = ds_ddf ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF ] = ds_output_ddf ; ds -> mMethods [
NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUF_P ]
= ds_output_tduf_p ; ds -> mMethods [ NE_DS_METHOD_TDXF_P ] =
DriveTrain_Modular_aaa11c4f_1_ds_tdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = ds_dnf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DNF_P ] =
ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ] = ds_dnf ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [
NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [ NE_DS_METHOD_IC
] = ds_ic ; ds -> mMakeOutput [ NE_DS_METHOD_IC ] = ds_output_ic ; ds ->
mMethods [ NE_DS_METHOD_ICR ] = ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR
] = ds_output_icr ; ds -> mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDUY_P ]
= ds_output_mduy_p ; ds -> mMethods [ NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
DriveTrain_Modular_aaa11c4f_1_ds_tdxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ]
= DriveTrain_Modular_aaa11c4f_1_ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] =
ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
DriveTrain_Modular_aaa11c4f_1_ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds ->
mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ]
= ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds ->
mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ]
= ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds ->
mMethods [ NE_DS_METHOD_MODE ] = DriveTrain_Modular_aaa11c4f_1_ds_mode ; ds
-> mMakeOutput [ NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [
NE_DS_METHOD_ZC ] = DriveTrain_Modular_aaa11c4f_1_ds_zc ; ds -> mMakeOutput [
NE_DS_METHOD_ZC ] = ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] =
ds_cache_r ; ds -> mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ;
ds -> mMethods [ NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = DriveTrain_Modular_aaa11c4f_1_ds_log ; ds -> mMakeOutput
[ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ]
= ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] = ds_output_assert ;
ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
DriveTrain_Modular_aaa11c4f_1_ds_obs_exp ; ds -> mMakeOutput [
NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = DriveTrain_Modular_aaa11c4f_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = DriveTrain_Modular_aaa11c4f_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = DriveTrain_Modular_aaa11c4f_1_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mEquationData = s_equation_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds
-> mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ;
return ( NeDynamicSystem * ) _ds ; } static int32_T ds_assert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmIntVector out ; ( void ) t1 ; out = t2 -> mASSERT ; out . mX [ 0 ] =
1 ; out . mX [ 1 ] = 1 ; out . mX [ 2 ] = 1 ; out . mX [ 3 ] = 1 ; out . mX [
4 ] = 1 ; out . mX [ 5 ] = 1 ; out . mX [ 6 ] = 1 ; out . mX [ 7 ] = 1 ; out
. mX [ 8 ] = 1 ; out . mX [ 9 ] = 1 ; out . mX [ 10 ] = 1 ; out . mX [ 11 ] =
1 ; out . mX [ 12 ] = 1 ; out . mX [ 13 ] = 1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_passert ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_iassert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_v0 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_del_tmax ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_t ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXDELT_P ; out .
mNumCol = 28ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out
. mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [
15 ] = 0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0
; out . mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out .
mJc [ 22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25
] = 0 ; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dudelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUDELT_P ; out . mNumCol = 6ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void
) t2 ; return 0 ; } static int32_T ds_dtdelt ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTDELT_P ; out .
mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_cache_r (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_sfo ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUF_P ; out . mNumCol = 6ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_dtf_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mDTF_P ; out . mNumCol = 1ULL ; out . mNumRow
= 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 5 ; out . mIr [ 0 ] = 4 ;
out . mIr [ 1 ] = 5 ; out . mIr [ 2 ] = 22 ; out . mIr [ 3 ] = 23 ; out . mIr
[ 4 ] = 24 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_a (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mA ;
out . mX [ 0 ] = - 0.0 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] = 1.0 ; out .
mX [ 3 ] = 0.3058103975535168 ; out . mX [ 4 ] = - 1.0 ; out . mX [ 5 ] = -
0.01 ; out . mX [ 6 ] = 1.0 ; out . mX [ 7 ] = - 0.99999999999999989 ; out .
mX [ 8 ] = 0.60621778264910686 ; out . mX [ 9 ] = 0.52499999999999991 ; out .
mX [ 10 ] = 1.0 ; out . mX [ 11 ] = 1.0 ; out . mX [ 12 ] = - 0.001 ; out .
mX [ 13 ] = - 1.0 ; out . mX [ 14 ] = - 1.0 ; out . mX [ 15 ] = - 1.0 ; out .
mX [ 16 ] = - 1.0 ; out . mX [ 17 ] = - 1.0 ; out . mX [ 18 ] = - 1.0 ; out .
mX [ 19 ] = 1.0 ; out . mX [ 20 ] = 1.0 ; out . mX [ 21 ] = 1.0 ; out . mX [
22 ] = 1.0 ; out . mX [ 23 ] = - 0.99999999999999989 ; out . mX [ 24 ] = 1.0
; out . mX [ 25 ] = 1.0 ; out . mX [ 26 ] = 1.0 ; out . mX [ 27 ] =
0.3058103975535168 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_b ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_b_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mB_P ; out . mNumCol = 6ULL ; out . mNumRow = 28ULL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc
[ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_c ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_c_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mC_P ; out . mNumCol = 1ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_tduf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out =
t2 -> mTDUF_P ; out . mNumCol = 6ULL ; out . mNumRow = 28ULL ; out . mJc [ 0
] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out
. mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out . mJc [ 6 ] = 6 ; out . mIr [ 0 ]
= 16 ; out . mIr [ 1 ] = 17 ; out . mIr [ 2 ] = 18 ; out . mIr [ 3 ] = 19 ;
out . mIr [ 4 ] = 20 ; out . mIr [ 5 ] = 21 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_ddf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDF_P ; out .
mNumCol = 0ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_vmf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mVMF ; out . mX [ 0 ] = false ;
out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = true ; out . mX [ 5 ] = true ; out . mX [ 6 ] = false ; out
. mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out .
mX [ 10 ] = true ; out . mX [ 11 ] = true ; out . mX [ 12 ] = true ; out . mX
[ 13 ] = true ; out . mX [ 14 ] = true ; out . mX [ 15 ] = true ; out . mX [
16 ] = true ; out . mX [ 17 ] = true ; out . mX [ 18 ] = true ; out . mX [ 19
] = true ; out . mX [ 20 ] = true ; out . mX [ 21 ] = true ; out . mX [ 22 ]
= true ; out . mX [ 23 ] = true ; out . mX [ 24 ] = true ; out . mX [ 25 ] =
true ; out . mX [ 26 ] = false ; out . mX [ 27 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_slf ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mSLF ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] =
false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ] =
false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ] =
false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19 ] =
false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; out . mX [ 22 ] =
false ; out . mX [ 23 ] = false ; out . mX [ 24 ] = false ; out . mX [ 25 ] =
false ; out . mX [ 26 ] = false ; out . mX [ 27 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_dnf ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDNF_P ; out .
mNumCol = 15ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out
. mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [
15 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dnf_v_x ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 ->
mDNF_V_X ; out . mX [ 0 ] = true ; out . mX [ 1 ] = true ; out . mX [ 2 ] =
true ; out . mX [ 3 ] = true ; out . mX [ 4 ] = true ; out . mX [ 5 ] = true
; out . mX [ 6 ] = true ; out . mX [ 7 ] = true ; out . mX [ 8 ] = true ; out
. mX [ 9 ] = false ; out . mX [ 10 ] = true ; out . mX [ 11 ] = true ; out .
mX [ 12 ] = true ; out . mX [ 13 ] = true ; out . mX [ 14 ] = true ; out . mX
[ 15 ] = true ; out . mX [ 16 ] = true ; out . mX [ 17 ] = true ; out . mX [
18 ] = true ; out . mX [ 19 ] = true ; out . mX [ 20 ] = true ; out . mX [ 21
] = true ; out . mX [ 22 ] = true ; out . mX [ 23 ] = true ; out . mX [ 24 ]
= true ; out . mX [ 25 ] = true ; out . mX [ 26 ] = false ; out . mX [ 27 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_slf0 (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLF0
; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ;
out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ;
out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [ 11 ] = false ;
out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [ 14 ] = false ;
out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX [ 17 ] = false ;
out . mX [ 18 ] = false ; out . mX [ 19 ] = false ; out . mX [ 20 ] = false ;
out . mX [ 21 ] = false ; out . mX [ 22 ] = false ; out . mX [ 23 ] = false ;
out . mX [ 24 ] = false ; out . mX [ 25 ] = false ; out . mX [ 26 ] = false ;
out . mX [ 27 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_ic ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mIC
; out . mX [ 0 ] = 2.52E+7 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ;
out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0 ; out . mX
[ 6 ] = 0.0 ; out . mX [ 7 ] = 0.0 ; out . mX [ 8 ] = 0.0 ; out . mX [ 9 ] =
0.0 ; out . mX [ 10 ] = 0.0 ; out . mX [ 11 ] = 0.0 ; out . mX [ 12 ] = 0.0 ;
out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = 0.0 ; out . mX [ 15 ] = 0.0 ; out .
mX [ 16 ] = 0.0 ; out . mX [ 17 ] = 0.0 ; out . mX [ 18 ] = 0.0 ; out . mX [
19 ] = 0.0 ; out . mX [ 20 ] = 0.0 ; out . mX [ 21 ] = 0.0 ; out . mX [ 22 ]
= 0.0 ; out . mX [ 23 ] = 0.0 ; out . mX [ 24 ] = 0.0 ; out . mX [ 25 ] = 0.0
; out . mX [ 26 ] = 0.0 ; out . mX [ 27 ] = 0.0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_icr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T DP_R_idx_0 ; real_T X_idx_9 ; real_T X_idx_3 ; real_T X_idx_4 ;
X_idx_3 = t1 -> mX . mX [ 3 ] ; X_idx_4 = t1 -> mX . mX [ 4 ] ; X_idx_9 = t1
-> mX . mX [ 9 ] ; DP_R_idx_0 = t1 -> mDP_R . mX [ 0 ] ; out = t2 -> mICR ;
out . mX [ 0 ] = ( X_idx_9 * 0.001 + 48.0 ) - DP_R_idx_0 ; out . mX [ 1 ] =
X_idx_4 ; out . mX [ 2 ] = X_idx_3 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_icr_im ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmIntVector out ; (
void ) t1 ; out = t2 -> mICR_IM ; out . mX [ 0 ] = 3 ; out . mX [ 1 ] = 3 ;
out . mX [ 2 ] = 3 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_id ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 ->
mICR_ID ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_il (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 ->
mICR_IL ; out . mX [ 0 ] = true ; out . mX [ 1 ] = true ; out . mX [ 2 ] =
true ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mDXICR
; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] = 0.001 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXICR_P ; out .
mNumCol = 28ULL ; out . mNumRow = 3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 1 ; out
. mJc [ 5 ] = 2 ; out . mJc [ 6 ] = 2 ; out . mJc [ 7 ] = 2 ; out . mJc [ 8 ]
= 2 ; out . mJc [ 9 ] = 2 ; out . mJc [ 10 ] = 3 ; out . mJc [ 11 ] = 3 ; out
. mJc [ 12 ] = 3 ; out . mJc [ 13 ] = 3 ; out . mJc [ 14 ] = 3 ; out . mJc [
15 ] = 3 ; out . mJc [ 16 ] = 3 ; out . mJc [ 17 ] = 3 ; out . mJc [ 18 ] = 3
; out . mJc [ 19 ] = 3 ; out . mJc [ 20 ] = 3 ; out . mJc [ 21 ] = 3 ; out .
mJc [ 22 ] = 3 ; out . mJc [ 23 ] = 3 ; out . mJc [ 24 ] = 3 ; out . mJc [ 25
] = 3 ; out . mJc [ 26 ] = 3 ; out . mJc [ 27 ] = 3 ; out . mJc [ 28 ] = 3 ;
out . mIr [ 0 ] = 2 ; out . mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 0 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_tduicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUICR_P ; out .
mNumCol = 6ULL ; out . mNumRow = 3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out .
mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_m ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mM ; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = -
0.00031999999999999997 ; out . mX [ 2 ] = - 0.01 ; out . mX [ 3 ] = 0.0256 ;
out . mX [ 4 ] = - 1.0 ; out . mX [ 5 ] = - 0.00021650635094610962 ; out . mX
[ 6 ] = - 0.00019499999999999997 ; out . mX [ 7 ] = 1.0 ; out . mX [ 8 ] =
1.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDXM_P ; out . mNumCol = 28ULL ; out . mNumRow = 9ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ;
out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc
[ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] =
0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out
. mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [
21 ] = 0 ; out . mJc [ 22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0
; out . mJc [ 25 ] = 0 ; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out .
mJc [ 28 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dum ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dum_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDUM_P ; out . mNumCol = 6ULL ; out . mNumRow =
9ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDTM_P ; out . mNumCol = 1ULL ; out . mNumRow = 9ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_vmm ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 ->
mVMM ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] =
false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ] =
false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_l (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dp_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_j ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dp_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; real_T P_R_idx_0 ; P_R_idx_0 =
t1 -> mP_R . mX [ 0 ] ; out = t2 -> mDP_R ; out . mX [ 0 ] = P_R_idx_0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qu ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_qt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_q1 ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQX_P ; out .
mNumCol = 28ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out
. mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [
15 ] = 0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0
; out . mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out .
mJc [ 22 ] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25
] = 0 ; out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQU_P ; out .
mNumCol = 6ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_qt_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQT_P ; out . mNumCol = 1ULL ; out . mNumRow =
28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_q1_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mQ1_P ; out . mNumCol = 1ULL ; out . mNumRow
= 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_var_tol ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; ( void ) t1 ; out = t2 -> mVAR_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1
] = 1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4
] = 1.0E-9 ; out . mX [ 5 ] = 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7
] = 1.0E-9 ; out . mX [ 8 ] = 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; out . mX [
10 ] = 1.0E-9 ; out . mX [ 11 ] = 1.0E-9 ; out . mX [ 12 ] = 1.0E-9 ; out .
mX [ 13 ] = 1.0E-9 ; out . mX [ 14 ] = 1.0E-9 ; out . mX [ 15 ] = 1.0E-9 ;
out . mX [ 16 ] = 1.0E-9 ; out . mX [ 17 ] = 1.0E-9 ; out . mX [ 18 ] =
1.0E-9 ; out . mX [ 19 ] = 1.0E-9 ; out . mX [ 20 ] = 1.0E-9 ; out . mX [ 21
] = 1.0E-9 ; out . mX [ 22 ] = 1.0E-9 ; out . mX [ 23 ] = 1.0E-9 ; out . mX [
24 ] = 1.0E-9 ; out . mX [ 25 ] = 1.0E-9 ; out . mX [ 26 ] = 1.0E-9 ; out .
mX [ 27 ] = 1.0E-9 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_eq_tol ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 ->
mEQ_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] = 1.0E-9 ; out . mX [ 2 ]
= 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] = 1.0E-9 ; out . mX [ 5 ]
= 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7 ] = 1.0E-9 ; out . mX [ 8 ]
= 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; out . mX [ 10 ] = 1.0E-9 ; out . mX [ 11
] = 1.0E-9 ; out . mX [ 12 ] = 1.0E-9 ; out . mX [ 13 ] = 1.0E-9 ; out . mX [
14 ] = 1.0E-9 ; out . mX [ 15 ] = 1.0E-9 ; out . mX [ 16 ] = 1.0E-9 ; out .
mX [ 17 ] = 1.0E-9 ; out . mX [ 18 ] = 1.0E-9 ; out . mX [ 19 ] = 1.0E-9 ;
out . mX [ 20 ] = 1.0E-9 ; out . mX [ 21 ] = 1.0E-9 ; out . mX [ 22 ] =
1.0E-9 ; out . mX [ 23 ] = 1.0E-9 ; out . mX [ 24 ] = 1.0E-9 ; out . mX [ 25
] = 1.0E-9 ; out . mX [ 26 ] = 1.0E-9 ; out . mX [ 27 ] = 1.0E-9 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_lv ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mLV ; out . mX [ 0 ] = false ;
out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ;
out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = true ; out
. mX [ 10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out
. mX [ 13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out
. mX [ 16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out
. mX [ 19 ] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; out
. mX [ 22 ] = false ; out . mX [ 23 ] = false ; out . mX [ 24 ] = false ; out
. mX [ 25 ] = true ; out . mX [ 26 ] = false ; out . mX [ 27 ] = true ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_slv ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLV ; out . mX [ 0 ] =
false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] =
false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] =
false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] =
true ; out . mX [ 10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] =
false ; out . mX [ 13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] =
false ; out . mX [ 16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] =
false ; out . mX [ 19 ] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] =
false ; out . mX [ 22 ] = false ; out . mX [ 23 ] = false ; out . mX [ 24 ] =
false ; out . mX [ 25 ] = true ; out . mX [ 26 ] = false ; out . mX [ 27 ] =
true ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxy (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mDXY ;
out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] = 1.0 ; out . mX
[ 3 ] = 1.0 ; out . mX [ 4 ] = 1.0 ; out . mX [ 5 ] = - 1.0 ; out . mX [ 6 ]
= - 1.0 ; out . mX [ 7 ] = 0.0 ; out . mX [ 8 ] = 0.0 ; out . mX [ 9 ] = 0.0
; out . mX [ 10 ] = - 1.0 ; out . mX [ 11 ] = 0.0 ; out . mX [ 12 ] = 0.0 ;
out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = - 1.0 ; out . mX [ 15 ] = - 1.0 ;
out . mX [ 16 ] = - 1.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_duy ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_duy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDUY_P ; out . mNumCol = 6ULL ; out . mNumRow =
11ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_mduy_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mMDUY_P ; out . mNumCol = 6ULL ; out . mNumRow = 11ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void
) t2 ; return 0 ; } static int32_T ds_mdxy_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mMDXY_P ; out . mNumCol = 28ULL ; out .
mNumRow = 11ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out .
mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] =
0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out
. mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [
16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0
; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; out .
mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25 ] = 0 ; out . mJc [ 26
] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_tduy_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mTDUY_P ; out . mNumCol = 6ULL ; out .
mNumRow = 11ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out .
mJc [ 6 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dty ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dty_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDTY_P ; out . mNumCol = 1ULL ; out . mNumRow =
11ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; }
