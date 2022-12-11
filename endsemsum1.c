#include <stdio.h>

int main()
{
    printf("NAME - KAVISH SHAH\n SAP ID - 60002200171\n");
    int num1, num2;
    char choice;

    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);

    printf("Enter the character which you would like to perform\n + for addition\n - to subtract\n * to multiply\n / to divide\n");
    scanf(" %c",&choice);

    switch (choice)
    {
    case '+':
        printf("Addition of these numbers is %d", num1 + num2);
        break;
    case '-':
        printf("Subtraction of these numbers is %d", num1 - num2);
        break;
    case '*':
        printf("Multiplication of these numbers is %d", num1 * num2);
        break;
    case '/':
        printf("Division of these numbers is %d", num1 / num2);
        break;
    default:
        printf("Invalid. Enter valid operator");
        break;
    }
    return 0;
}
