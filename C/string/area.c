#include<stdio.h>
#include<math.h>
void main()
{
    float r,*p,a;
    printf("Enter radius.\n");
    scanf("%f",&r);
    p=&r;
    a=3.14*pow(*p,2);
    printf("%f.\n",a);

}