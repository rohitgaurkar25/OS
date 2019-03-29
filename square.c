i=1
while [ $i -le 10 ]
do
sq=$((i\*i))
echo "$i^2=$sq"
i=$((i+1))
done
