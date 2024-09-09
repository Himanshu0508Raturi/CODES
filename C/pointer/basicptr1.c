//Output program.
#include<stdio.h>

void main()
{
    int a,b,x,y,z,*p1,*p2;
    a=12;
    b=4;
    p1=&a;
    p2=&b;
    x= *p1 * *p2 -6;
    y= 4 * -*p2/ *p1 + 10;
    printf("%d %d %d %d",a,b,x,y);
    *p2= *p2 + 3;
    *p1= *p2 - 5;
    z= *p1 * *p2 - 6;
    printf(".\n%d %d %d",a,b,z);
}