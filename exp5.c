#include <stdio.h>

int main()
{
    float bill = 0;
    int t;

    printf("Enter time consumed in seconds: ");
    scanf("%d", &t);

    if (t >= 1 && t <= 59)
    {
        bill = t * 0.25;
    }
    else if (t >= 60 && t <= 179)
    {
        bill = (59 * 0.25) + ((t - 59) * 0.50);
        printf("Total bill is %f", bill);
    }
    else if (t >= 180 && t <= 239)
    {
        bill = (59 * 0.25) + (120 * 0.50) + ((t - 179) * 1);
        printf("Total bill is %f", bill);
    }
    else if (t >= 240 && t <= 299)
    {
        bill = (59 * 0.25) + (120 * 0.50) + (60 * 1) + ((t - 239) * 2);
        printf("Total bill is %f", bill);
    }
    else if (t >= 300)
    {
        bill = (59 * 0.25) + (120 * 0.50) + (60 * 1) + (60 * 2) + ((t - 299) * 3);
        printf("Total bill is %f", bill);
    }
    else{
        printf("Enter valid number");
    }
}