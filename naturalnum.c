#include <stdio.h>

int main()
{
    float n;
    float i;
    float sum = 0;
    printf("Enter n:\n");
    scanf("%f", &n);

    for (i = 1.0; i <= n; i++)
    {
        float temp = 1/i;
        sum = sum + temp;
    }
    printf("Addition of first n natural numbers is %f", sum);
}

// #include <stdio.h>

// int main()
// {

//     int i, n, sum = 0;
//     printf("Enter num:\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     printf("Addition of first n natural numbers is %d", sum);
// }
