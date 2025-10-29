#include <stdio.h>

int main()
{
    int num, rev = 0, rem;

    printf("Enter a number:\n");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;          // get the last digit
        rev = rev * 10 + rem;    // add it to reversed number
        num = num / 10;          // remove the last digit
    }

    printf("The reversed number is: %d\n", rev);

    return 0;
}
