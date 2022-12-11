#include <stdio.h>

int main()
{
    int principal, years;
    float rate;

    printf("Enter Principal amount:\n ");
    scanf("%d", &principal);

    printf("Enter rate of interest:\n ");
    scanf("%f", &rate);

    printf("Enter years:\n ");
    scanf("%d", &years);

    float simpleInterest = (principal * rate * years) / 100;

    printf("The value of Simple Interest is %f ", simpleInterest);

}