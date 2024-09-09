//to input n different number in an array then input a number to insert it on a particular index input by user.
#include<stdio.h>

void main()
{
    int a[30],n,num,ind;
    printf("Enter limit of array a: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to insert and index: ");
    scanf("%d%d",&num,&ind);
    for(int i=n;i<ind;i--)//because start from the last.
    {
        a[i]=a[i-1];//to create space.
    }
    a[ind]=num;
for(int i=0;i<=n;i++)
{
    printf("%d ",a[i]);
}


}