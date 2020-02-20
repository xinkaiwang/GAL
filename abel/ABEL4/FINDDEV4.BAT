@echo off
if NOT (%1) == () goto L1
echo FINDDEV4 string - Searches DEVICES.TXT and list lines matching the string.
echo Example: FINDDEV4 P20RA10  Would list all lines containing P20RA10
goto EXIT
:L1
echo	NOTE: "*" after device means programmer pin remapping required
echo MFG       Part               Type  Package  F/P Code    Device
if not (%ABEL4DEV%) == () find "%1" %ABEL4DEV%\devices.txt
if     (%ABEL4DEV%) == () find "%1" c:\dataio\lib4\devices.txt
:EXIT

