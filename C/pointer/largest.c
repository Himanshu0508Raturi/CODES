/* To input N integer numbers in an array then pass this array to a function receive it as a pointer then find largest among them.*/
#include<stdio.h>
int lar(int *,int);
void main()
{
    int a[20],n,i;
    printf("Enter limit.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    for(i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Largest Number is:%d",lar(a,n));
}
int lar(int *p,int x)
{
    int l,i;
    l=*p;
    for(i=1; i<x; i++)
    {
        if(*(p+i)>l)
        {
            l=*(p+i);
        }
    }
    return l;
}