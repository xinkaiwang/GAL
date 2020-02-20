@echo off
rem
rem   The arguments expected by this batch file are:
rem
rem        %1  - The ABEL-PLA root file name (with no .TT1 extension)
rem        %2  - The JEDEC file name
rem     %3-%9  - PLAOPT, FUSEASM or JEDSIM options
rem
plaopt %1.tt1 %3 %4 %5 %6 %7 %8 %9
if errorlevel == 1 goto end
fuseasm %1.tt2 %3 %4 %5 %6 %7 %8 %9
if errorlevel == 1 goto end
jedsim %2.jed %3 %4 %5 %6 %7 %8 %9
:end
