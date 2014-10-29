trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs dd if=/tank3/testfile of=/tank3/testfile1 bs=1K oflag=dsync

#trace-cmd report
