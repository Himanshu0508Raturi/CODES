//program to imliment power function for positive integer power.
#include<stdio.h>
float power(float,int);
void main(){
    int b;
    float a,res;
    printf("Enter base and exponent.\n");
    scanf("%f %d",&a,&b);
    res=power(a,b);
    printf("%f",res);
}
float power(float x, int y)
{
    float p=1;
    for(int i=1;i<=y;i++)
    {
        p=p*x;
    }
    return p;
}