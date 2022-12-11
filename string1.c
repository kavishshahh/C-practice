// WAP to find the length of a string using function/without using function.

#include<stdio.h>

void main()
{
    char a[100];
    int l= 0;

    printf("Enter a string \n");
    gets(a);

    while (a[l]!='\0')
    {
        l++;
    }
    printf("The length of string is %d",l);

}