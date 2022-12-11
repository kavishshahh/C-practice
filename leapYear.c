#include <stdio.h>  
  
int main()  
{  
    int year;  
  
    printf("Enter the year\n");  
    scanf("%d", &year);  
  
    (year % 100 == 0) ?  
    ( (year % 400 == 0)?  
      (printf("%d is leap year\n", year)):  
      (printf("%d is not leap year\n", year))  
    ) :  
    ( (year % 4 == 0)?  
      (printf("%d is leap year\n", year)):  
      (printf("%d is not leap year\n", year))  
    );  
  
    return 0;  
}





// #include <stdio.h>

// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (year % 400 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }

//     else if (year % 100 == 0)
//     {
//         printf("%d is not a leap year.", year);
//     }

//     else if (year % 4 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }

//     else
//     {
//         printf("%d is not a leap year.", year);
//     }

//     return 0;
// }