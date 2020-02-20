echo off

Rem: HITERM will use ABELPROG.CFG from ABEL4DEV directory.
if not (%ABEL4DEV%) == () HITERM %ABEL4DEV%\ABELPROG.CFG 

Rem: HITERM will use ABELPROG.CFG from local directory if ABEL4DEV not defined
if (%ABEL4DEV%) == () HITERM ABELPROG.CFG   

