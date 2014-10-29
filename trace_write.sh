trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs dd if=/dev/zero of=/tank3/testfile1 bs=1K count=3000 oflag=dsync

#trace-cmd report
