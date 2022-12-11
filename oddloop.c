#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2)
    {
        printf("Odd numbers are: %d\n", i);
    }
}
