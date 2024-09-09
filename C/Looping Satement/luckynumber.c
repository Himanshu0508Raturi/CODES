//lecture question.
#include<stdio.h>

void main(){

    int n,dc=0;

    while(1)
    {
        printf("Enter lucky number(1--15).\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            case 2:
            case 3:
            case 4:printf("Far away from number.\n");
                    break;
            case 5:
            case 6:printf("Little close to number.\n");
                    break;
            case 7:printf("Very close to number.\n");
                    break;
            case 8:printf("Thanks for guessing the number.\n");
                    break;
            case 9:printf("very close to number.\n");
                    break;
            case 10:printf("Little close to number.\n");
                    break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:printf("Far away from number.\n");
                        break;



        }       
        dc++; 
        if(n==8)
        {
            break;
        }
        


    }
        printf("You have attemped %d gusses.\n",dc);

}