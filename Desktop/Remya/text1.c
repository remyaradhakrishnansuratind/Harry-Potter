#include<stdio.h>
void main()
{
 int a=10,b=5,c=2;
printf("Enter the numbers:");
scanf("%d %d %d", &a,&b,&c);
 if((a>b)&&(a>c))
  printf("largest=%d",a);
 else if ((b>a)&&(b>c))
  printf("largest=%d",b);
 else
   printf("largest=%d",c);
}  

