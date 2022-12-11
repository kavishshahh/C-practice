#include <stdio.h>

int main()
{
    int units;
    float tempBill, finalBill;

    printf("Enter total units consumed\n");
    scanf("%d", &units);

    switch (units <= 50)
    {
    case 1:
        tempBill = units * 0.50;
        break;

    case 0:
        switch (units <= 150)
        {
        case 1:
            tempBill = units * 0.75;
            break;

        case 0:
            switch (units <= 250)
            {
            case 1:
                tempBill = units * 1.20;
                break;

            case 0:
                tempBill = units * 1.50;

            default:
                break;
            }

        default:
            break;
        }

    default:
        break;
    }
    finalBill = tempBill * 0.2;
    printf("Your Electricity bill is %f", finalBill);
}
