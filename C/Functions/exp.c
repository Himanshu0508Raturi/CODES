//Program to calculate the following expression.use function fact to print factorial{fact a/fact b -fact c}
#include<stdio.h>
int fact(int);
void main(){
    int a,b,c,fa,fb,fc;
    float res;
    printf("Enter a,b,c.\n");
    scanf("%d%d%d",&a,&b,&c);
    fa=fact(a);
    fb=fact(b);
    fc=fact(c);
    res=(float)fa/(fb-fc);
    if(fb-fc!=0){
    printf("%f",res);
    }
}
int fact(int x)
{
    int f=1;
    for(int i=1; i<=x;i++)
    {
        f=f*i;
        
    }
    return f;
}
