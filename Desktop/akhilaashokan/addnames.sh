count=$#
FILE=$1
un=$2
echo "no. of args $# "
if [ $# -eq 2 ]
then
echo " You have given correct no. of args "
else
echo "Please check the no. of args "
fi
if [ -f "$FILE" ]
then
echo "File: $FILE exists "
else
echo "File : $FILE not exists: NOT FOUND "
fi
if grep -q $un "$FILE"
then
echo " $un already exists "
else
echo "not present"
echo $un >> $FILE
fi
