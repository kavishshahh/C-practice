#include<stdio.h>  
  
int main()  
{  
    printf("NAME - KAVISH SHAH\n SAP ID - 60002200171\n");
    int num, count, sum = 0;  
    float avg = 0.0;  
  
    printf("Enter 25 numbers\n");  
    for(count = 1; count <= 25; count++)  
    {  
        scanf("%d", &num);  
        sum = sum + num;  
    }  
    avg = sum / 25;  
  
    printf("Sum = %d\nAverage = %0.2f\n", sum, avg);  
  
    return 0;  
}