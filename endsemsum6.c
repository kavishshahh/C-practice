#include <stdio.h>
int main()
{
    printf("NAME - KAVISH SHAH\n SAP ID - 60002200171\n");
    int firstnum, secondnum, *a, *b, sum;

    printf("Enter first number:\n");
    scanf("%d", &firstnum);
    printf("Enter second number:\n");
    scanf("%d", &secondnum);

    a = &firstnum;
    b = &secondnum;

    sum = *a + *b;

    printf("Sum of the numbers using pointers is %d\n", sum);

    return 0;
}