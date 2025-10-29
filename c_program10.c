#include<stdio.h>
int main()
{ int a,sum=0,rem;
printf("enter the digits:\n");
scanf("%d",&a);


    while (a != 0) {
        rem = a % 10;    // get the last digit
        sum += rem;         // add it to sum
        a = a / 10;     // remove the last digit
    }

    printf("The sum of digits is: %d\n", sum);

    return 0;
}
0