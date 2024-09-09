//armstrong number in a range;

#include<stdio.h>
#include<math.h>
void armstrong(int);
void main()
{

int r1,r2;
printf("Enter lower range and upper range.\n");
scanf("%d%d",&r1,&r2);
for( ;r1<=r2;r1++)
{
    armstrong(r1);
}

}

void armstrong(int x)
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
         printf("%d is an armstrong number.\n",sum);
    }
}