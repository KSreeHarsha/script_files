import os,random
filename="test"
while 1:

	file_size=os.stat(filename)[6]
	print file_size
	with open(filename,'r') as readfile: 	
		
		readfile.seek((readfile.tell()+random.randint(0,file_size-1))%file_size)
		line=readfile.tell()
		print line
	
	with open(filename, "a") as writefile:
   		writefile.write("%d\n"%line)
