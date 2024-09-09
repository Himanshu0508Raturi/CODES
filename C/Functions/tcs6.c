#include<stdio.h>
int input(int);
int check(int);
void display(int);
int n;
void main()
{
    int r;
    n=input(n);
    r=check(n);
    display(r);
}
int input(int x)
{
    printf("Enter year.\n");
    scanf("%d",&x);
    return x;
}
int check(int y)
{
    if (y % 400 == 0) {
      return 1;
   }
   else if (y % 100 == 0) {
        return 0;
           }
   else if (y % 4 == 0) {
        return 1;
   }
   else {
      return 0;
}
}
void display(int z)
{
    if(z==1)
    {
        printf("%d is a leap year.\n",n);
    }else
    {
        printf("%d is not a leap year.\n",n);
    }
}