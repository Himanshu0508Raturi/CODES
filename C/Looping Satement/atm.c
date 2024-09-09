//atm code.
#include<stdio.h>

void main()
{
    int ab=100000,s,wd,dp;
    printf("Press 1 for checking balance.\n");
    printf("Press 2 for Withdraw money.\n");
    printf("Press 3 for Deposit money.\n");
    printf("Press 4 for Exit.\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1: printf("Your current balance is %d.\n",ab);
                break;

        case 2: printf("Enter the amount to withdraw.\n");
                scanf("%d",&wd);
                if(wd>ab)
                {
                    printf("Insufficient balance.\n");
                    break;
                }else
                {
                    ab=ab-wd;
                }
                printf("%d was debeted from your account.\n",wd);
                printf("Your available balance is %d.\n",ab);
                break;

        case 3: printf("Enter the money to deposit.\n");
                scanf("%d",&dp);
                ab=ab+dp;
                printf("%d amount has been credited to your account.\n",dp);
                printf("Your available balance is %d.\n",ab);
                 break;

        case 4: break;

        default: printf("Invalid Input.\n");
    }
    printf("Thank you.\n");

}
