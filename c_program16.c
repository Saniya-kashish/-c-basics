#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    // Handle 0 separately since logics below would give count = 0
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10;  // remove last digit
            count++;         // increase digit count
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}
