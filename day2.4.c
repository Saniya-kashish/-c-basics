#include <stdio.h>
#include <math.h>  // for the pow() function

int main()
{
    float principal, rate, time, compoundInterest, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time); // total amount after interest
    compoundInterest = amount - principal;            // CI = A - P

    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
