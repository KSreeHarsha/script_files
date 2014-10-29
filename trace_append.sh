trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs dd if=/dev/zero of=/tank3/testfile bs=1K count=1000 oflag=append,dsync

#trace-cmd report
