#include "DriveTrain_Modular_capi_host.h"
static DriveTrain_Modular_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        DriveTrain_Modular_host_InitializeDataMapInfo(&(root), "DriveTrain_Modular");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
