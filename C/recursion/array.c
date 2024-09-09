//print array using recursion.
#include<stdio.h>
void arr(int);
void main()
{
    int a[5],i;
    printf("Enter values.\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
}
void arr(int x)
{
    printf("%d",a[x]);
    arr(x);
}