TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

PROD_IOC = rawSignalCalcAlarmTest
# rawSignalCalcAlarmTest.dbd will be created and installed
DBD += rawSignalCalcAlarmTest.dbd
# rawSignalCalcAlarmTest.dbd will be made up from these files:
rawSignalCalcAlarmTest_DBD += base.dbd
rawSignalCalcAlarmTest_DBD += rawSignalMakerFunctions.dbd
# Include dbd files from all support applications:
#rawSignalCalcAlarmTest_DBD += xxx.dbd

# Add all the support libraries needed by this IOC
#rawSignalCalcAlarmTest_LIBS += xxx

# rawSignalCalcAlarmTest_registerRecordDeviceDriver.cpp derives from rawSignalCalcAlarmTest.dbd
rawSignalCalcAlarmTest_SRCS += rawSignalCalcAlarmTest_registerRecordDeviceDriver.cpp
rawSignalCalcAlarmTest_SRCS+=rawSignalMaker.cpp
# Build the main IOC entry point on workstation OSs.
rawSignalCalcAlarmTest_SRCS_DEFAULT += rawSignalCalcAlarmTestMain.cpp
rawSignalCalcAlarmTest_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#rawSignalCalcAlarmTest_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
rawSignalCalcAlarmTest_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

