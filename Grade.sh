echo "Enter P C M marks:"
read p
read c
read m
add=$((p+c+m))
per=`expr $add / 3`
echo $per
if [ $per -ge 40 ]
then
 if test $per -ge 66
  then
   echo "Distinction $per"
 else
  if test $per -ge 60
   then
    if test $per -lt 66
     then
      echo "First class $per"
    fi
  else
      echo "Second class $per"
    fi
  fi
else
 echo "Fail $per"
fi
