#include<stdio.h>
void main()
{
int a,b,c;
char op;
printf("Your options are:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
printf("Enter yuor choice:");
scanf("%s" ,op);
switch(op)
{
case('1'):
 printf("Enter the values:");
 scanf("%d %d",&a,&b);
 c=a+b;
 printf("Sum=%d",c);
 break;
case('2'):
 printf("Enter the values:");
 scanf("%d %d",&a,&b);
 c=a-b;
 printf("Difference=%d",c);
 break;
case('3'):
 printf("Enter the values:");
 scanf("%d %d",&a,&b);
 c=a*b;
 printf("Product=%d",c);
 break;
case('4'):
 printf("Enter the values:");
 scanf("%d %d",&a,&b);
 c=a/b;
 printf("Solution=%d",c);
 break;
case('5'):
 quit;
 break;
default:
 printf("Invalid entry");
}
}



 
