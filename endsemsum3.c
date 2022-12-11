#include <stdio.h>
int main()
{
    printf("NAME - KAVISH SHAH\n SAP ID - 60002200171\n");
    int num1, num2;
    float average;

    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);

    average = (float)(num1+num2)/2;
    
    printf("Average of %d and %d is %.2f",num1,num2,average);

    return 0;
}