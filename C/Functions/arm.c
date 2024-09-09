//function to chk a number is armstrong or not.
#include<stdio.h>
#include<math.h>
int arm(int);
void main(){
    int n,r;
    printf("Enter a number.\n");
    scanf("%d",&n);
    r=arm(n);
    if(r==0)
    {
        printf("%d in armstrong number.\n",n);
    }else
    {
        printf("%d is not an armstrong number.\n",n);
    }
}

int arm(int x)
{
    int temp,s,dc=0,sum=0;
    temp=x;
    while(temp>0)
    {
        temp=temp/10;
        dc++;
    }
    temp=x;
    while(temp>0)
    {
        sum=sum+pow(temp%10,dc);
        temp=temp/10;
    }
    if(sum==x)
    {
        return 0;
    }else
    {
        return 1;
    }


}