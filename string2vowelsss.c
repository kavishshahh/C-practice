// WAP to accept a string and count the number of vowels.

#include <stdio.h>

void main()
{
    char a[100];
    int l = 0, count = 0, i;

    printf("Enter a string \n");
    gets(a);

    while (a[l] != '\0')
    {
        l++;
    }
    for (i = 0; i < l - 1; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }
    }

    printf("The total vowel count is %d", count);
}