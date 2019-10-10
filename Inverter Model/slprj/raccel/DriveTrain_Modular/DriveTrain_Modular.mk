# Copyright 1994-2018 The MathWorks, Inc.
#
# File    : raccel_lcc64.tmf   
#
# Abstract:
#       Template makefile for building a PC-based "rapid acceleration" 
#       executable from the generated C code for a Simulink model using 
#       generated C code and the
#			LCC compiler Version 2.4
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win32.
#
# 	Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#	build:
#	  OPT_OPTS       - Optimization options. Default is none. To enable
#                          debugging specify as OPT_OPTS=-g4.
#	  OPTS           - User specific compile options.
#	  USER_SRCS      - Additional user sources, such as files needed by
#			   S-functions.
#	  USER_INCLUDES  - Additional include paths
#			   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#			   (For Lcc, have a '/'as file separator before the
#			   file name instead of a '\' .
#			   i.e.,  d:\work\proj1/myfile.c - required for 'gmake')
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see raccel.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = raccel.tlc
BUILD_SUCCESS	= *** Created

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = "LCC-win64 v2.4.1 | gmake (64-bit Windows)"

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  BUILDARGS           - Options passed in at the command line.

MODEL               = DriveTrain_Modular
MODULES             = DriveTrain_Modular_aaa11c4f_1_ds.c DriveTrain_Modular_aaa11c4f_1_ds_zc.c DriveTrain_Modular_aaa11c4f_1_ds_tdxy_p.c DriveTrain_Modular_aaa11c4f_1_ds_dxy_p.c DriveTrain_Modular_aaa11c4f_1_ds_y.c DriveTrain_Modular_aaa11c4f_1_ds_obs_il.c DriveTrain_Modular_aaa11c4f_1_ds_obs_all.c DriveTrain_Modular_aaa11c4f_1_ds_obs_act.c DriveTrain_Modular_aaa11c4f_1_ds_obs_exp.c DriveTrain_Modular_aaa11c4f_1_ds_m_p.c DriveTrain_Modular_aaa11c4f_1_ds_log.c DriveTrain_Modular_aaa11c4f_1_ds_tdxf_p.c DriveTrain_Modular_aaa11c4f_1_ds_a_p.c DriveTrain_Modular_aaa11c4f_1_ds_dtf.c DriveTrain_Modular_aaa11c4f_1_ds_dxf_p.c DriveTrain_Modular_aaa11c4f_1_ds_dxf.c DriveTrain_Modular_aaa11c4f_1_ds_mode.c DriveTrain_Modular_aaa11c4f_1_ds_f.c DriveTrain_Modular_aaa11c4f_1.c DriveTrain_Modular_aaa11c4f_1_gateway.c pm_printf.c rt_logging.c rt_backsubrr_dbl.c rt_forwardsubrr_dbl.c rt_lu_real.c rt_matrixlib_dbl.c DriveTrain_Modular.c DriveTrain_Modular_capi.c DriveTrain_Modular_data.c DriveTrain_Modular_tgtconn.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_logging_mmi.c rtw_modelmap_utils.c raccel_main_new.c raccel_sup.c raccel_mat.c simulink_solver_api.c raccel_utils.c common_utils.c ext_svr.c updown.c ext_work.c rtiostream_interface.c rtiostream_tcpip.c rtiostream_utils.c
MAKEFILE            = DriveTrain_Modular.mk
MATLAB_ROOT         = C:/Program Files/MATLAB/R2019a
ALT_MATLAB_ROOT     = C:/PROGRA~1/MATLAB/R2019a
MATLAB_BIN          = C:/Program Files/MATLAB/R2019a/bin
ALT_MATLAB_BIN      = C:/PROGRA~1/MATLAB/R2019a/bin
MASTER_ANCHOR_DIR   = 
START_DIR           = C:/Users/plewi/DOCUME~1/UNIVER~1/6-SIXT~1/MUR/MUR-E_~1/INVERT~1
S_FUNCTIONS_LIB     = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwcoder_target_services.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwcoder_ParamTuningTgtAppSvc.lib $(MATLAB_ROOT)\sys\lcc64\lcc64\lib64\wsock32.lib
BUILDARGS           =  MODELLIB=DriveTrain_Modularlib.lib RSIM_SOLVER_SELECTION=2 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 MODELREF_TARGET_TYPE=NONE ISPROTECTINGMODEL=NOTPROTECTING OPTS="-DTGTCONN -DON_TARGET_WAIT_FOR_START=0"

SOLVER              = 

PCMATLABROOT        = C:\\Program Files\\MATLAB\\R2019a

RSIM_PARAMETER_LOADING = 1
ENABLE_SLEXEC_SSBRIDGE = 1
MODELREFS               = 
OPTIMIZATION_FLAGS      = 
ADDITIONAL_LDFLAGS      = 
DEFINES_CUSTOM          = -DEXT_MODE 
SYSTEM_LIBS             = -L"C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft" libmwipp.lib libut.lib libmx.lib libmex.lib libmat.lib libmwmathutil.lib libmwslexec_simbridge.lib libmwsl_fileio.lib libmwsigstream.lib libmwsl_AsyncioQueue.lib libmwsl_simtarget_instrumentation.lib libmwsl_services.lib libmwsdi_raccel.lib libmwsl_log_load_blocks.lib libfixedpoint.lib libmwslexec_simlog.lib

MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

#--------------------------- Model and reference models -----------------------
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = DriveTrain_Modular_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ../../..

GLOBAL_TIMING_ENGINE       = 0

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif
MATLAB_ARCH_BIN = $(MATLAB_BIN)\win64

#---------------------------- Solver ------------------------------------------
RSIM_WITH_SL_SOLVER = 1

#--------------------------- Tool Specifications -------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc64\lcc64
include $(MATLAB_ROOT)\rtw\c\tools\lcc64tools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------Parameter Tuning---------------------------------
  PARAM_CC_OPTS = -DRSIM_PARAMETER_LOADING

#------------------------------ Include Path -----------------------------------

ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/raccel/DriveTrain_Modular \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/rapid \
	-I$(MATLAB_ROOT)/rtw/c/raccel \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 \


# see COMPILER_INCLUDES from lcc64tools.mak

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES)

INCLUDES += -I$(MATLAB_ROOT)\rtw\c\raccel -I$(MATLAB_ROOT)\rtw\c\src\rapid

#-------------------------------- C Flags --------------------------------------

# Optimization Options
ifndef OPT_OPTS
OPT_OPTS = $(DEFAULT_OPT_OPTS)
endif

# General User Options
OPTS =

# Compiler options, etc:
ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS) $(ANSI_OPTS)  $(PARAM_CC_OPTS) $(OPTIMIZATION_FLAGS)
else
CC_OPTS = $(OPT_OPTS) $(OPTS) $(ANSI_OPTS)  $(PARAM_CC_OPTS)
endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DHAVESTDIO

CPP_REQ_DEFINES += -DNRT -DRSIM_WITH_SL_SOLVER

ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
   CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE
endif

ifneq ($(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS), 0)
   CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS
endif

CFLAGS = $(DEFAULT_CFLAGS) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(INCLUDES) -noregistrylookup -w
#----------------------------- Source Files ------------------------------------

PRODUCT            = $(MODEL).exe
BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT) $(SYSLIBS)
BUILD_PRODUCT_TYPE = executable
REQ_SRCS           = $(MODULES)

USER_SRCS =

USER_OBJS      = $(addsuffix .obj, $(basename $(USER_SRCS)))
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS = $(REQ_SRCS)

OBJS      = $(addsuffix .obj, $(basename $(SRCS))) $(USER_OBJS)
LINK_OBJS = $(addsuffix .obj, $(basename $(SRCS))) $(LOCAL_USER_OBJS)

#--------------------------- Link flags & libraries ----------------------------

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LDFLAGS = -s -L$(LIB)
else
LDFLAGS = -L$(LIB)
endif

#------------------------- Additional Libraries -------------------------------

LIBS =

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64\ssc_sli_lcc.lib
else
LIBS += ssc_sli.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64\ssc_core_lcc.lib
else
LIBS += ssc_core.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64\ne_lcc.lib
else
LIBS += ne.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64\mc_lcc.lib
else
LIBS += mc.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64\ex_lcc.lib
else
LIBS += ex.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64\pm_lcc.lib
else
LIBS += pm.lib
endif


LIBMWIPP = $(MATLAB_ROOT)\lib\win64\libmwipp.lib
LIBS +=  $(S_FUNCTIONS_LIB) $(LIBMWIPP)
LIBS += $(MATLAB_ROOT)\sys\lcc64\lcc64\lib64\ws2_32.lib
LIBS += $(MATLAB_ROOT)\sys\lcc64\lcc64\lib64\mswsock.lib 

#--------------------------------- Rules ---------------------------------------
$(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) \
		$(LIBS) $(SYSTEM_LIBS)
	@cmd /C "echo $(BUILD_SUCCESS) $(BUILD_PRODUCT_TYPE): $@"

%.obj : %.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.o : %.cpp
	$(CPP) -c $(CPPFLAGS)$(GCC_WALL_FLAG)  "$<"

%.obj : %.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : %.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c -Fo$(@F) -I$(RELATIVE_PATH_TO_ANCHOR)/$(<F:.c=cn_rtw) $(CFLAGS)  $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CC) -c -Fo$(@F) -I$(RELATIVE_PATH_TO_ANCHOR)/$(<F:.c=cn_rtw) $(CFLAGS)  $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CC) -c -Fo$(@F) -I$(RELATIVE_PATH_TO_ANCHOR)/$(<F:.c=cn_rtw) $(CFLAGS)  $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.CPP
	$(CC) -c -Fo$(@F) -I$(RELATIVE_PATH_TO_ANCHOR)/$(<F:.c=cn_rtw) $(CFLAGS)  $<

%.obj : $(MATLAB_ROOT)/rtw/c/raccel/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/raccel/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/rapid/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/rapid/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

simulink_solver_api.obj : $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

# Additional sources

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(START_DIR)/slprj/raccel/DriveTrain_Modular/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

rt_logging.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src/rt_logging.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src/rt_logging.c

raccel_main_new.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\raccel/raccel_main_new.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\raccel/raccel_main_new.c

raccel_sup.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\raccel/raccel_sup.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\raccel/raccel_sup.c

raccel_mat.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\raccel/raccel_mat.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\raccel/raccel_mat.c

simulink_solver_api.obj : C:\Program\ Files\MATLAB\R2019a\simulink\include/simulink_solver_api.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\simulink\include/simulink_solver_api.c

raccel_utils.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src\rapid/raccel_utils.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src\rapid/raccel_utils.c

common_utils.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src\rapid/common_utils.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src\rapid/common_utils.c

ext_svr.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/ext_svr.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/ext_svr.c

updown.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/updown.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/updown.c

ext_work.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/ext_work.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/ext_work.c

rtiostream_interface.obj : C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/rtiostream_interface.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\rtw\c\src\ext_mode\common/rtiostream_interface.c

rtiostream_tcpip.obj : C:\Program\ Files\MATLAB\R2019a\toolbox\coder\rtiostream\src\rtiostreamtcpip/rtiostream_tcpip.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\toolbox\coder\rtiostream\src\rtiostreamtcpip/rtiostream_tcpip.c

rtiostream_utils.obj : C:\Program\ Files\MATLAB\R2019a\toolbox\coder\rtiostream\src\utils/rtiostream_utils.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2019a\toolbox\coder\rtiostream\src\utils/rtiostream_utils.c



%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(START_DIR)/slprj/raccel/DriveTrain_Modular/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(START_DIR)/slprj/raccel/DriveTrain_Modular/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(START_DIR)/slprj/raccel/DriveTrain_Modular/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.CPP
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



lccstub.obj : $(LCC)/mex/lccstub.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LCC)/mex/lccstub.c -o ./lccstub.obj

# Libraries:



MODULES_ssc_sli = \
    ssc_sli_0763c151.obj \
    ssc_sli_0bd269e6.obj \
    ssc_sli_0d6d0780.obj \
    ssc_sli_136b443c.obj \
    ssc_sli_140b3534.obj \
    ssc_sli_15d5f6ce.obj \
    ssc_sli_2bbd58a4.obj \
    ssc_sli_360cfd63.obj \
    ssc_sli_43618287.obj \
    ssc_sli_466b08dd.obj \
    ssc_sli_496799bd.obj \
    ssc_sli_4e028390.obj \
    ssc_sli_51dbd3b5.obj \
    ssc_sli_550a4805.obj \
    ssc_sli_5a0cb974.obj \
    ssc_sli_5d63aeeb.obj \
    ssc_sli_62d81790.obj \
    ssc_sli_77063d8b.obj \
    ssc_sli_7a618260.obj \
    ssc_sli_880e593a.obj \
    ssc_sli_89d0f30a.obj \
    ssc_sli_8a64c4e2.obj \
    ssc_sli_93019ea6.obj \
    ssc_sli_9abcdb7f.obj \
    ssc_sli_9b67747c.obj \
    ssc_sli_9c030181.obj \
    ssc_sli_c7dda239.obj \
    ssc_sli_d064c978.obj \
    ssc_sli_d80c44d2.obj \
    ssc_sli_dcd66f69.obj \
    ssc_sli_e66fe6d5.obj \
    ssc_sli_e7b327bb.obj \
    ssc_sli_eb0a5702.obj \
    ssc_sli_f6bd9cc8.obj \
    ssc_sli_f9b5dbc5.obj \
    ssc_sli_fa0ce53e.obj \
    ssc_sli_fbdf29da.obj \


ssc_sli.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_ssc_sli)
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ssc_sli)

MODULES_ssc_core = \
    ssc_core_01dcc633.obj \
    ssc_core_04da2c69.obj \
    ssc_core_05058dd9.obj \
    ssc_core_06ba68a6.obj \
    ssc_core_09b5fa6e.obj \
    ssc_core_0bd666aa.obj \
    ssc_core_0f019bd9.obj \
    ssc_core_0f0420a6.obj \
    ssc_core_18bf4d77.obj \
    ssc_core_1b0cafd5.obj \
    ssc_core_1c6b0332.obj \
    ssc_core_1fd25120.obj \
    ssc_core_24b4cdee.obj \
    ssc_core_2568b075.obj \
    ssc_core_280c0222.obj \
    ssc_core_2cd54448.obj \
    ssc_core_3169e4b7.obj \
    ssc_core_360a4baf.obj \
    ssc_core_37d4ea84.obj \
    ssc_core_40dfdbdc.obj \
    ssc_core_41017299.obj \
    ssc_core_4666b45b.obj \
    ssc_core_48b08af1.obj \
    ssc_core_48b1386a.obj \
    ssc_core_4965213d.obj \
    ssc_core_4ad9135b.obj \
    ssc_core_4db6bd68.obj \
    ssc_core_4db86fcc.obj \
    ssc_core_4e03e39d.obj \
    ssc_core_4e04eecd.obj \
    ssc_core_54d55ae9.obj \
    ssc_core_5505224d.obj \
    ssc_core_56b1a2bf.obj \
    ssc_core_576cd129.obj \
    ssc_core_59b034b8.obj \
    ssc_core_5d6ba758.obj \
    ssc_core_67d1f118.obj \
    ssc_core_68da074b.obj \
    ssc_core_6b6b89d2.obj \
    ssc_core_6dd833f3.obj \
    ssc_core_73d9c2b7.obj \
    ssc_core_76d825be.obj \
    ssc_core_79dd08ab.obj \
    ssc_core_7a613edb.obj \
    ssc_core_83db8762.obj \
    ssc_core_856738f2.obj \
    ssc_core_8569edc5.obj \
    ssc_core_89d7fa79.obj \
    ssc_core_8a6471dc.obj \
    ssc_core_8d0064b8.obj \
    ssc_core_96061071.obj \
    ssc_core_97d767fe.obj \
    ssc_core_990fe1a4.obj \
    ssc_core_9b607b15.obj \
    ssc_core_9c016445.obj \
    ssc_core_9c01d168.obj \
    ssc_core_9dd110ad.obj \
    ssc_core_9fb0e229.obj \
    ssc_core_9fb25b4f.obj \
    ssc_core_a1d393be.obj \
    ssc_core_a4d4c45e.obj \
    ssc_core_a4da1d0a.obj \
    ssc_core_a6b78ccc.obj \
    ssc_core_a76299bc.obj \
    ssc_core_a867d880.obj \
    ssc_core_a9bf1ff2.obj \
    ssc_core_abd05c18.obj \
    ssc_core_abd5e7b4.obj \
    ssc_core_acb64294.obj \
    ssc_core_acb6462e.obj \
    ssc_core_b1038cbb.obj \
    ssc_core_b10e34f4.obj \
    ssc_core_b2b3b239.obj \
    ssc_core_b402b40d.obj \
    ssc_core_b7b88213.obj \
    ssc_core_b96ebc21.obj \
    ssc_core_bb0b2992.obj \
    ssc_core_bc648043.obj \
    ssc_core_c3003040.obj \
    ssc_core_c5b050d7.obj \
    ssc_core_c5b63cb2.obj \
    ssc_core_c607b660.obj \
    ssc_core_c8d83e88.obj \
    ssc_core_cab615c8.obj \
    ssc_core_cabdc251.obj \
    ssc_core_cc067f58.obj \
    ssc_core_ce6a84bb.obj \
    ssc_core_d06d763c.obj \
    ssc_core_d3d34d7c.obj \
    ssc_core_d70a6a09.obj \
    ssc_core_d807fa59.obj \
    ssc_core_d9d13dac.obj \
    ssc_core_dcda6edd.obj \
    ssc_core_deb7fd8d.obj \
    ssc_core_e0d0866d.obj \
    ssc_core_e2b61d72.obj \
    ssc_core_e400c1c2.obj \
    ssc_core_ead8f455.obj \
    ssc_core_ee000fbe.obj \
    ssc_core_ee01086d.obj \
    ssc_core_ee0f0141.obj \
    ssc_core_f9b6dbed.obj \
    ssc_core_fa09e9e6.obj \
    ssc_core_fbd34e62.obj \
    ssc_core_ff06d9a4.obj \


ssc_core.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_ssc_core)
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ssc_core)

MODULES_ne = \
    ne_59b4e14a.obj \


ne.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_ne)
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ne)

MODULES_mc = \
    mc_026e4f4b.obj \
    mc_03b98f6f.obj \
    mc_0bd30dee.obj \
    mc_0d6fd085.obj \
    mc_0ed73c49.obj \
    mc_11086079.obj \
    mc_110e6c6c.obj \
    mc_15d12d95.obj \
    mc_15d828ca.obj \
    mc_220ba961.obj \
    mc_2565d6e0.obj \
    mc_2a642f54.obj \
    mc_2a6a9b24.obj \
    mc_2bbf87e3.obj \
    mc_2cdc96b4.obj \
    mc_32d501e3.obj \
    mc_32dc008a.obj \
    mc_3b6a945d.obj \
    mc_3e66abdf.obj \
    mc_4105189f.obj \
    mc_47b8cebe.obj \
    mc_47b91db1.obj \
    mc_4b0301c6.obj \
    mc_4c6117e3.obj \
    mc_51d4094e.obj \
    mc_52623861.obj \
    mc_52688a58.obj \
    mc_53b1fc84.obj \
    mc_550847c3.obj \
    mc_5766048f.obj \
    mc_59b6e413.obj \
    mc_5d65cd86.obj \
    mc_630208f8.obj \
    mc_630dda0e.obj \
    mc_67da200d.obj \
    mc_67da4f41.obj \
    mc_6b6d311a.obj \
    mc_6e61d16c.obj \
    mc_6fb1c336.obj \
    mc_7a613aec.obj \
    mc_7bbf41f0.obj \
    mc_7cd58f0b.obj \
    mc_7cdbe436.obj \
    mc_7d0547c8.obj \
    mc_7d099de7.obj \
    mc_7eb21b39.obj \
    mc_81b0ada5.obj \
    mc_81b5717e.obj \
    mc_870ec75e.obj \
    mc_89d597cf.obj \
    mc_90b6aa0a.obj \
    mc_95b62b73.obj \
    mc_9ab7d9b0.obj \
    mc_9b6376d1.obj \
    mc_9b6c1529.obj \
    mc_a2647600.obj \
    mc_a26bab1a.obj \
    mc_a3b90582.obj \
    mc_a865d1dd.obj \
    mc_acb3fad7.obj \
    mc_af0cc4c9.obj \
    mc_b0de9cbc.obj \
    mc_b362c5eb.obj \
    mc_b7b03d44.obj \
    mc_b96a0bad.obj \
    mc_bb0520ee.obj \
    mc_bdbb9b78.obj \
    mc_c2dbf4b2.obj \
    mc_c8d25d23.obj \
    mc_cab8a1f9.obj \
    mc_d20085b7.obj \
    mc_d9d38185.obj \
    mc_dbbb14d2.obj \
    mc_dcdddfae.obj \
    mc_debb448f.obj \
    mc_e7bc2f1a.obj \
    mc_e969ae87.obj \
    mc_edbf543c.obj \
    mc_ee000fbe.obj \
    mc_efdea3a7.obj \
    mc_f3be157c.obj \
    mc_fcb15a9b.obj \
    mc_fd619d14.obj \
    mc_fd6341bb.obj \


mc.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_mc)
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_mc)

MODULES_ex = \
    ex_04d5441d.obj \
    ex_136645f8.obj \
    ex_17bc61ac.obj \
    ex_18b4440a.obj \
    ex_2ebcd5b2.obj \
    ex_316a81de.obj \
    ex_40d5be33.obj \
    ex_47b11894.obj \
    ex_690b7cd0.obj \
    ex_79d100f1.obj \
    ex_8a6fc761.obj \
    ex_b2b40ad5.obj \
    ex_bb0efd4b.obj \
    ex_debffef2.obj \
    ex_e40d74b8.obj \
    ex_f866102d.obj \


ex.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_ex)
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ex)

MODULES_pm = \
    pm_09bc42e2.obj \
    pm_14098e54.obj \
    pm_26dc3230.obj \
    pm_4fd5f5b9.obj \
    pm_fed8c2c9.obj \


pm.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_pm)
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_pm)



#----------------------------- Dependencies ------------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
