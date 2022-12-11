#include <stdio.h>
#include <string.h>
#define user "kavish"
#define pass "shah"
int main()
{                           
    char username[20], password[20];

    printf("\n");
    printf("\t\t\t  ...... WELCOME TO INVESTING SIMULATOR ......\n\n");
    printf("\t\t\t\t...... Login / Sign Up ......\n");

    //---LOGIN---
    printf("\t\t\t\t Please Enter username:");
    scanf("%s", &username);

    printf("\t\t\t\t Please enter password:");
    scanf("%s", &password);
    while (strcmp(username, user) != 0 || strcmp(password, pass) != 0)
    {

        printf("\n\t\t\t\t Wrong username or password try again!\n");

        printf("\n\t\t\t\t Please Enter username:");
        scanf("%s", &username);

        printf("\t\t\t\t Please enter password:");
        scanf("%s", &password);
    }
    printf("\n\t\t\t\t Correct username and password.");
    printf("\n\n\t\t\t\t Welcome Supreme Leader!");

    //Invest Equity or Crypto
    printf("\n\t\t\t\t Where do you want to invest? \n\t\t\t\t  1 for Equity \n\t\t\t\t  2 for Cryptocurrency  \n");
    int number;
    scanf("%d", &number);
    
    // Equity
    if (number == 1)
    {
        printf("\n\t\t\t\t Select the type of share you want to invest in \n\t\t\t\t  1 for Banks \n\t\t\t\t  2 for IT  \n");
        int k;
        scanf("%d", &k);

        // Banks
        if (k == 1)
        {
            printf("\n\t\t\t\t Select the Bank you want to invest in \n\t\t\t\t  1 for ICICIBANK \n\t\t\t\t  2 for HDFCBANK \n\t\t\t\t  3 for KOTAKBANK \n");
            int r;
            scanf("%d", &r);
            if (r == 1)
            {
                printf("\n\n\t\t\t\t ICICIBANK ");
                printf("\n\n\t\t\t\t Price : 700 /- ");
                printf("\n\t\t\t\t Select the operation \n\t\t\t\t  1 to BUY \n\t\t\t\t  2 to SELL \n");
                int i;
                scanf("%d", &i);
                if (i == 1)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 700 * s;

                    printf("\n\t\t\t\t Shares bought(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else if (i == 2)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 700 * s;

                    printf("\n\t\t\t\t Shares sold(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else{
                    printf("Invalid number");
                }
            }
            if (r == 2)
            {
                printf("\n\n\t\t\t\t HDFCBANK ");
                printf("\n\n\t\t\t\t Price : 1,550 /- ");
                printf("\n\t\t\t\t Select the operation \n\t\t\t\t  1 to BUY \n\t\t\t\t  2 to SELL \n");
                int i;
                scanf("%d", &i);
                if (i == 1)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 1550 * s;

                    printf("\n\t\t\t\t Shares bought(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else if (i == 2)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 1550 * s;

                    printf("\n\t\t\t\t Shares sold(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
            }
            if (r == 3)
            {
                printf("\n\n\t\t\t\t KOTAKBANK ");
                printf("\n\n\t\t\t\t Price : 1713 /- ");
                printf("\n\t\t\t\t Select the operation \n\t\t\t\t  1 to BUY \n\t\t\t\t  2 to SELL \n");
                int i;
                scanf("%d", &i);
                if (i == 1)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 1713 * s;

                    printf("\n\t\t\t\t Shares bought(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else if (i == 2)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 1713 * s;

                    printf("\n\t\t\t\t Shares sold(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                
            }
            
        }

        // IT STOCKS
        else if (k == 2)
        {
            printf("\n\t\t\t\t Select the IT Company you want to invest in \n\t\t\t\t  1 for TCS(TATA CONSULTANCY SERVICES)  \n\t\t\t\t  2 for HCLTECH \n\t\t\t\t  3 for TECHM(TECH MAHINDRA) \n");
            int r;
            scanf("%d", &r);
            
            // TCS
            if (r == 1)
            {
                printf("\n\n\t\t\t\t TCS ");
                printf("\n\n\t\t\t\t Price : 3720 /- ");
                printf("\n\t\t\t\t Select the operation \n\t\t\t\t  1 to BUY \n\t\t\t\t  2 to SELL \n");
                int i;
                scanf("%d", &i);
                if (i == 1)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 775 * s;

                    printf("\n\t\t\t\t Shares bought(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else if (i == 2)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 775 * s;

                    printf("\n\t\t\t\t Shares sold(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                
            }
            // HCLTECH
            if (r == 2)
            {
                printf("\n\n\t\t\t\t HCLTECH ");
                printf("\n\n\t\t\t\t Price : 1085 /- ");
                printf("\n\t\t\t\t Select the operation \n\t\t\t\t  1 to BUY \n\t\t\t\t  2 to SELL \n");
                int i;
                scanf("%d", &i);
                if (i == 1)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 76880 * s;

                    printf("\n\t\t\t\t Shares bought(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else if (i == 2)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 76880 * s;

                    printf("\n\t\t\t\t Shares sold(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                
            }

            // TECHM
            if (r == 3)
            {
                printf("\n\n\t\t\t\t TECHM ");
                printf("\n\n\t\t\t\t Price : 1445 /- ");
                printf("\n\t\t\t\t Select the operation \n\t\t\t\t  1 to BUY \n\t\t\t\t  2 to SELL \n");
                int i;
                scanf("%d", &i);
                if (i == 1)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("%d", &s);

                    int h = 3247 * s;

                    printf("\n\t\t\t\t Shares bought(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                else if (i == 2)
                {
                    int s;
                    printf("\n\t\t\t\t  Enter the Quantity of shares :");
                    scanf("\t\t\t\t%d", &s);

                    int h = 3247 * s;

                    printf("\n\t\t\t\t Shares sold(Amount in rupees) = %d ", h);
                    printf("\n\t\t\t\t Thank you !!!!");
                }
                
            }
            
        }

        else
        {
            printf("Sorry Data Not Found");
        }
    }

    //CryptoCurrency 
    else if (number == 2)
    {
        printf("\n\t\t\t\t Which Crypto would you like to invest in? You can also buy a fraction of any Crypto \n");
        printf("\n\t\t\t\tCryptocurrency Prices are in US DOLLAR ");
        printf("\n\t\t\t\t 1. Bitcoin \n\t\t\t\t 2. Ethereum(ETH) \n\t\t\t\t 3. XRP \n\t\t\t\t 4. Cardano(ADA) \n\t\t\t\t 5. Matic \n");
        int CryptoChoice;
        scanf("%d",&CryptoChoice);

        switch (CryptoChoice)
        {
        case 1:
            printf("\n\t\t\t\t Bitcoin price is $48500\n");

            printf("\t\t\t\t How many Bitcoins you wish to buy?\n ");
            float bitcoin;
            scanf("%f",&bitcoin);

            float bitprice = 48500 * bitcoin;

            printf("\n\t\t\t\t Congratulations! You bought %f bitcoin worth $%f.",bitcoin,bitprice);

            break;
        
        case 2:
            printf("\n\t\t\t\tEthereum price is $3200\n");

            float EthCoin;
            printf("\t\t\t\t How many Ethereum you wish to buy?\n ");
            scanf("%f",&EthCoin);

            float Ethprice = 3200 * EthCoin;

            printf("\n\t\t\t\tCongratulations! You bought %f ETH worth $%f.",EthCoin,Ethprice);

            break;
        
        case 3:
            printf("\n\t\t\t\t XRP price is $1.13\n");

            float XrpCoin;
            printf("\t\t\t\t How many XRP you wish to buy?\n ");
            scanf("%f",&XrpCoin);

            float XrpPrice = 1.13 * XrpCoin;

            printf("\n\t\t\t\t Congratulations! You bought %f XRP worth $%f.",XrpCoin,XrpPrice);

            break;
        
        case 4:
            printf("\n\t\t\t\t Cardano price is $2.87\n");

            float CardanoCoin;
            printf("\t\t\t\t How many Cardano you wish to buy?\n ");
            scanf("%f",&CardanoCoin);

            float CardanoPrice = 2.87 * CardanoCoin;

            printf("\n\t\t\t\t Congratulations! You bought %f ADA worth $%f.",CardanoCoin,CardanoPrice);

            break;
        
        case 5:
            printf("\n\t\t\t\t Matic price is $1.42\n");

            float MaticCoin;
            printf("\t\t\t\t How many Matic Coins you wish to buy?\n ");
            scanf("%f",&MaticCoin);

            float MaticPrice = 1.42 * MaticCoin;

            printf("\n\t\t\t\t Congratulations! You bought %f Matic worth $%f.",MaticCoin,MaticPrice);

            break;
        
        default:
            printf("Error. Invalid choice");

            break;
        }
        
    }
    else
    {
        printf("Invalid number");
    }
    return 0;
}
