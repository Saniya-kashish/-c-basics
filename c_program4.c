#include<stdio.h>
int main()
{int a,b,temp;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the second number:\n");
scanf("%d",&b);
printf("before swapping:a=%d,b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after swapping:a=%d,b=%d",a,b);
return 0;
}