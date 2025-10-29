#include<stdio.h>
int main()
{
	int a,b;
	printf("enter number1:\n");
	scanf("%d",&a);
    printf("enter number2:\n");
	scanf("%d",&b);
	printf("the sum is:%d\n",a+b);
	printf("the difference is:%d\n",a-b);
	printf("the product is:%d\n",a*b);
	if (b!=0)
	{printf("the remainder is:%d\n",a%b);
	printf("the quotient is:%d\n",a/b);	}
	else 
{ printf("not possible.\n");
}
	return 0;
	
}