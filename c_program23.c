#include <stdio.h>

int main()
{
    int i=1;

    printf("odd numbers from 1 to 100:\n");

    do {
        printf("%d\n", i);
        i +=2;  // move to next even number
    } while (i <= 100);

    return 0;
}
