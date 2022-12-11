#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    printf("YOUR RESULT IS\n");

    if (marks == 100){
        printf("Distinction");
    }
    else{
        switch (marks / 10)
        {
        case 9:
            printf("Distinction");
            break;
        case 8:
            printf("Distinction");
            break;
        case 7:
            printf("Distinction");
            break;
        case 6:
            printf("FIRST CLASS");
            break;
        case 5:
            printf("SECOND CLASS");
            break;
        case 4:
            printf("PASS");
            break;
        case 3:
            printf("fail");
            break;
        case 2:
            printf("fail");
            break;
        case 1:
            printf("fail");
            break;
        case 0:
            printf("fail");
            break;
        default:
            printf("fail");
            break;
        }
    }

    return 0;
}
