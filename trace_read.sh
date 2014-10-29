trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs dd of=/dev/null if=/tank3/testfile bs=1K

#trace-cmd report
