//program to check a number is pallindrome or not.
#include<stdio.h>
int palli(int);
void main(){
    int n,r;
    printf("Enter number n.\n");
    scanf("%d",&n);
    r=palli(n);//function call
    if(r==0)
    {
        printf(" is plallindrome no.");
    }else
    {
        printf(" not a pallindrome number");
    }
}
int palli(int x)
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
        return 0;
    }else 
    {
        return 1;
    }
}