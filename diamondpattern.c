#include <stdio.h>
int main()
{
    int i, j, k, n, h;
    printf("enter number of rows\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (h = 1; h <= i; h++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = n - i; j > 0; j--)
        {
            printf("*");
        }
        for (int k = n - i; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}