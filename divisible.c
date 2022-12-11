#include <stdio.h>

int divisible(int k)
{
    printf("Numbers divisible by 4 and 6 are:\n");

    for (int k = 1; k <= 100; k++)
    {
        if (k % 4 == 0)
        {
            if (k % 6 == 0)
            {
                printf("%d", k);
            }
            else
            {
                printf(" ");
            }
        }
    }
}
int main()
{
    divisible(100);
}