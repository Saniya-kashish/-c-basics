#include<stdio.h>
int  main()
{
	int a,b,peri;
	printf("enter the length of recrangle:\n ");
	scanf("%d",&a);
	printf("enter the width of rectangle:\n ");
	scanf("%d",&b);
	printf("area of rectangle:%d\n",a*b);
	peri=2*(a+b);
	printf("perimeter of rectangle:%d\n",peri);
	return 0;
}