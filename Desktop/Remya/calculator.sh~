clear
s=0
i="y"
echo "Enter 1st no.:"
read a
echo "Enter 2nd no.:"
read b
while [ $i = "y" ]
do 
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "5.Modulus"
echo "Enter your choice:"
read ch
case $ch in
1) s=`expr $a + $b`
   echo "Sum= $s";;
2) s=`expr $a - $b`
   echo "Difference= $s";;
3) s=`expr $a \* $b`
   echo "Product= $s";;
4) s=`expr $a \/ $b`
   echo "sol= $s";;
5) s=`expr $a \% $b`
   echo "sol= $s";;
*) echo "Invalid choice"
esac
echo "Do you want to continue?"
read i
if [ $i != "y" ]
then 
 exit
fi
done

