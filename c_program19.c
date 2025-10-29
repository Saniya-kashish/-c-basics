#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is the greatest.\n", a);

    if (b > a && b > c)
        printf("%d is the greatest.\n", b);

    if (c > a && c > b)
        printf("%d is the greatest.\n", c);

    if (a == b && b == c)
        printf("All numbers are equal.\n");

    return 0;
}
