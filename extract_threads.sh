

if [ $# -eq 0 ]; then
    echo "Provide filename to extract"
    exit 1
fi


filename=$1
echo $filename

fname="${filename/".c"/}"

mkdir $fname
mkdir $fname/all
mkdir $fname/code
cat $filename |awk '{gsub("/","\\/",$1); print $1}' | sort -u > ${fname}/threads.c

cat $filename | awk -F "|" '{print $2}' > ${fname}/code/$filename; 

while read line; do cat $filename | grep $line > ${fname}/all/${line/"/"/"-"} ; done < $fname/threads.c
while read line; do cat $filename | grep $line | awk -F "|" '{print $2}' > ${fname}/code/${line/"/"/"-"}; done < $fname/threads.c

rm $fname/code/cpus\=12 
rm $fname/all/cpus\=12 
rm $fname/all/version
rm $fname/code/version

echo "wc -l * | sort -n" > ${fname}/code/lines.sh
chmod +x ${fname}/code/lines.sh
echo "wc -l * | sort -n" > ${fname}/all/lines.sh
chmod +x ${fname}/all/lines.sh
