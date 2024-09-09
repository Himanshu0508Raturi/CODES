//program to input a +ve integer and by using function check it is even or odd.
#include<stdio.h>
int evenodd(int);
void main(){
    int n;
    printf("Enter a number.\n");
    scanf("%d",&n);
    if(evenodd(n)==1)//function call.
    {
        printf("odd\n");
    }else
    {
        printf("Even\n");
    }
}

int evenodd(int x)
{
   /* if(x%2==0)
    {
        return 1;
    }else
    {
        return 0;
    }*/
    return x%2;//we can also write this single expresssion instead of above.

}
