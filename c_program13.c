#include <stdio.h>

int main()
{
    int num, original, rev = 0, rem;

    printf("Enter a number:\n");
    scanf("%d", &num);

    original = num;  // store the original number

    while (num != 0) {
        rem = num % 10;          // get the last digit
        rev = rev * 10 + rem;    // build reversed number
        num = num / 10;          // remove last digit
    }

    if (original == rev)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
