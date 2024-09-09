//printing count of positive and negative number enter by user.
//enter {0} to stop inputting.
#include<stdio.h>

void main()
{

    int n,cp=0,cn=0;//cp=count positive AND cn=count negative.

    do
    {   
        printf("Enter a series of number.\n");
        scanf("%d",&n);

        if(n>0)
        {
            cp++;
        }else if(n<0)
        {
            cn++;
        }
    }while(n!=0);
    printf("Count of positive numbers:%d\n Count of negative numbers:%d",cp,cn);
}