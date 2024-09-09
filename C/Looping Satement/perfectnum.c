//program to check perfect number.
//ex. 6 is a perfect number.
#include<stdio.h>

void main()
{
    int n,ans=0;
    printf("Enter a number.\n");
    scanf("%d",&n);
    int temp=n;
    for(int i=1;i<=temp/2;i++)
    {
        if(temp%i==0)
        {
            ans=ans+i;
        }
    }
    if(ans==n)
    {
        printf("%d is an perfect number.\n",n);
    }else
    {
        printf("%d is not a perfect number.\n",n);
    }

}
