if [ $# -eq 0 ]; then
    echo "Arguments provided to recort to trace"
    exit 1
fi
trace-cmd report > trace_$1.c
mv trace.dat trace_$1.dat
#mv trace_$1 c_files/
mv trace_$1.dat dat_files/


