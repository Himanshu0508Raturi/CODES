//sum and avg of numbers from m to n using pointers.
#include<stdio.h>

void main()
{
    int m,n,*p,sum=0,i,c=0;
    float avg;
    printf("Enter M and N.\n");
    scanf("%d%d",&m,&n);
    p=&sum;
    for(i=0; i<=n;i++)
    {
        *p=*p+i;
        c++;
    }
    avg=(float)*p/(float)c;//typecasting (data_type)
    printf("Sum is %d.\nAvg is %f.\n",*p,avg);

}