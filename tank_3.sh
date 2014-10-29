trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs zpool create -f tank3 sdi sdm sdl

#trace-cmd report
