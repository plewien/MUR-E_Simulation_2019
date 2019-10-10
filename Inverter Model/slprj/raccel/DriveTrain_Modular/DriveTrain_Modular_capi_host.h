#include "__cf_DriveTrain_Modular.h"
#ifndef RTW_HEADER_DriveTrain_Modular_cap_host_h_
#define RTW_HEADER_DriveTrain_Modular_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DriveTrain_Modular_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void DriveTrain_Modular_host_InitializeDataMapInfo (
DriveTrain_Modular_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
