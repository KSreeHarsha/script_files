trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs zpool create -f tank sdm

#trace-cmd report
