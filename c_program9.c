#include<stdio.h>
int main()
{ int a,b;
  printf("enter num1:\n");
  scanf("%d",&a);
  printf("enter num2:\n");
  scanf("%d",&b);
  if (a>b){
  	printf("%d is largest\n",a);
  }
  else if (b>a)
  { printf ("%d is largest\n",b);
  }
  else {
  	printf("both equal\n");
  }
  return 0;}
  