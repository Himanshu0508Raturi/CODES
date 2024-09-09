//declaration of pointers.
#include<stdio.h>

void main()
{
    int a,y;
    int *p;
    a=10;
    p=&a;
    y=*p;
    printf("%d %d %d %d",&a,p,a,y);


}