trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs zpool create -f tank3 mirror sdi sdm log sdl

#trace-cmd report
