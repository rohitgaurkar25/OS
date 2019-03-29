echo "filename:"
read fn
if [ -d $fn ]
then
echo "Directory"
elif [ -f $fn ]
then
echo "File"
else
echo "Special file"
fi
