#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, rem, n = 0;
    float result = 0.0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    original = num;

    // Step 1: count number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num; // reset to original number

    // Step 2: calculate sum of each digit raised to the power n
    while (original != 0) {
        rem = original % 10;
        result += pow(rem, n);
        original /= 10;
    }

    // Step 3: check if Armstrong
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
