echo "Enter three numbers:"
read a
read b
read c
if [ $a -ge $b ]
 then
 if [ $a -ge $c ]
  then
   echo "$a is greater."
 fi 
elif [ $b -ge $a ]
 then 
  if [ $b -ge $c ]
  then 
   echo "$b is greater."
  fi
else
 if [ $c -ge $a ]
 then 
  if [ $c -ge $b ]
  then 
   echo "$c is greater."
  fi
 fi
fi 
