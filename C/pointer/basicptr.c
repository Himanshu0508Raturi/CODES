//basic program for pointer.
#include<stdio.h>

void main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    y=*ptr;// gives value at address.
    printf("%d %d\n",x,&x);
    printf("%d %d\n",*&x,&x);
    printf("%d %d\n",*ptr,ptr);
    printf("%d %d\n",ptr,&ptr);
    printf("%d %d\n",y,&y);
    *ptr=25;
    printf("%d",x);
}