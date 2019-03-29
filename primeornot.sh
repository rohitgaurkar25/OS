flag=1
echo "Enter n:"
read n
i=2
while [ $i -lt $n ]
do
 d=$((n%i))
 if [ $d -eq 0 ]
 then
  flag=0
 fi
 i=$((i+1))
done
if [ $flag -eq 1 ]
then
echo "$n is a prime number."
else
echo "$n is not prime number."
fi
