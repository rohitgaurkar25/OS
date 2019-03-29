a=0
echo "Enter number:"
read n
temp=$n
while [ $n -gt 0 ]
do
d=$((n%10))
a=$((a+d\*d\*d))
n=$((n/10))
done
if [ $temp -eq $a ]
then
echo "$temp is a armstrong number."
else
echo "$temp is a not armstrong number."
fi
