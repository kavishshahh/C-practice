#include <stdio.h>

int main()
{
    int i, j, k, l, n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int num = 0;
        int num1 = i;

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            num++;
            printf("%c", 64 + num);
        }
        for (l = 1; l <= i - 1; l++)
        {
            num1--;
            printf("%c", 64 + num1);
        }

        printf("\n");
    }

    return 0;
}

//    1
//   121
//  12321
// 1234321