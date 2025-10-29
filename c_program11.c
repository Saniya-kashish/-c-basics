#include<stdio.h>
int main()
{ int a,i;
long long fact=1;
printf("enter the number:\n");
scanf("%d",&a);
if (a<0){ 
printf("factorial of a negative number doesn't exist\n");}
else{
	for (i=1;i<=a;i++){
		fact*=i;
	}
	printf("the factorial of %d is:%lld\n",a,fact);
}

return 0; }