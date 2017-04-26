echo " enter first no "
read n1
echo " enter second no "
read n2
difference=`expr $n1  - $n2`
echo "difference is $difference"
echo " enter first no "
read n1
echo " enter second no "
read n2
product=`expr $n1 \* $n2`
echo "product is $product"
echo " enter first no "
read n1
echo " enter second no "
read n2
d=`expr $n1 / $n2`
echo "division is $d"
a=10
b=10
if[$a=$b]
then
    echo "equal" 
    else "not equal"
