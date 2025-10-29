#include<stdio.h>
int main()
{ int a;
printf("enter the number:\n");
scanf("%d",&a);
if (a==0){
	printf("neither positive nor negative.\n");
}
else if (a<0){
printf("%d is negative:\n",a);}
else {
printf("%d is positive\n",a);}
return 0;
}
