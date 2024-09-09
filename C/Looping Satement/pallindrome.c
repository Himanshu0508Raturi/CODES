//pallindrone number in a range.
#include<stdio.h>
void pallindrone(int);
void main()
{

int r1,r2;
printf("Enter lower range and upper range.\n");
scanf("%d%d",&r1,&r2);
for( ;r1<=r2;r1++)
{
    pallindrone(r1);
}

}

    void pallindrone(int x)
    {
         int temp, remainder, rev=0;
        temp = x;

  while( x>0 )
  {
     remainder = x % 10;
     rev = rev*10 + remainder;
     x /= 10;
  }
    if(rev==temp)
    {
        printf("%d is plallindrome number\n",rev);;
    }

    }