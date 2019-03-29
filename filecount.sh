count=0
count1=0
pwd | ls > list.txt
for i in `cat list.txt`
do
    if [ -d $i ]
     then
       count=$((count+1))
     elif [ -f $i ]
    then
    count1=$((count1+1))
  
  fi
done
echo $count $count1
