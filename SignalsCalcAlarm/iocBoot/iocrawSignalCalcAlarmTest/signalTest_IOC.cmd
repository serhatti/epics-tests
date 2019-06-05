#!../../bin/linux-x86_64/rawSignalCalcAlarmTest

## You may have to change rawSignalCalcAlarmTest to something else
## everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase("dbd/rawSignalCalcAlarmTest.dbd")
rawSignalCalcAlarmTest_registerRecordDeviceDriver pdbbase

## Load record instances
#dbLoadRecords("db/xxx.db","user=istin")
dbLoadRecords("db/rawSignalMakerRecords.db")
cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncxxx,"user=istin"
