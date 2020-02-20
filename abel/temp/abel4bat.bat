CD..
CD Z:\src\GAL\ABEL4
set Path = %Path%;Z:\src\GAL\abel4;
ahdl2pla Z:\src\GAL\temp\dd.abl >Z:\src\GAL\temp\aa.txt
plaopt.exe Z:\src\GAL\abel4\DS00.tt1 >Z:\src\GAL\temp\bb.txt
fuseasm.exe -i Z:\src\GAL\abel4\DS00.tt2 >Z:\src\GAL\temp\cc.txt
jedsim.exe Z:\src\GAL\abel4\DS00.jed Z:\src\GAL\abel4\DS00
 :End
