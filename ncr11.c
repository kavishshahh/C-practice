#include<stdio.h>
int factorial(float k)
{
    if (k == 1 || k == 0)
    {
        return 1;
    }
    else
    {
        return (k * factorial(k - 1));
    }
}
int main(int argc, char const *argv[])
{
    int n,r,c;
    printf("ENTER n\n");
    scanf("%d", &n);
    printf("ENTER r\n");
    scanf("%d", &r);

    c=(factorial(n))/(factorial(r)*factorial(n-r));

    printf(" n: %d and r :%d  nCr : %d\n", n,r,c);

    return 0;
}
