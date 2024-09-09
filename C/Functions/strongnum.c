//program to check a strong number.
//ex. 145 is a prime number.
#include<stdio.h>

int fact(int);
void main(){
    int n,rev,sum=0;
    printf("Enter a number.\n");
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        rev=temp%10;
        sum=sum+fact(rev);
        temp=temp/10;

    }
    if(sum==n)
    {
        printf("%d is an strong number.\n",n);

    }else
    {
        printf("%d is not a strong number.\n",n);
    }
}

int fact(int x)
{
    int ans=1;
    for(int i=1; i<=x; i++)
    {
        ans=ans*i;
    }
    return ans;

}
