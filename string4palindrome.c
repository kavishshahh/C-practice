// WAP to find palindrome string.

#include <stdio.h>
int main()
{
    int l= 0,i,temp;
    char a[100];

    printf("Enter a string \n");
    gets(a);

    while (a[l]!='\0')
    {
        l++;
    }
    for(i=0;i<(l-1)/2;i++)
    {
        temp=a[l-i-1];
        a[l-i-1]=a[i];
        a[i]=temp;
    }
    printf("Reverse is %s", a);
}