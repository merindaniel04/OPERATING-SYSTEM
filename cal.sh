echo "Enter the first number"
read a
echo "Enter the second number"
read b
echo "Enter the choice"
echo "1.Addition 2.Subtraction 3.Multiplication 4.Division"
read ch
case $ch in
1)c=$(($a+$b))
 echo "Sum="$c;;
2)c=$(($a-$b))
 echo "Difference="$c;;
3)c=$(($a*$b))
 echo "product="$c;;
4)c=$(($a/$b))
 echo "Quotient="$c;;
*)echo "Invalid input";;
esac
