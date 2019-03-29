echo "Enter two numbers"
read a
read b
a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b`
echo "a=$a and b=$b"
