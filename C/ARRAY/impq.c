//write a program to input n element in an array and check whether they are pallindrone or not.If found
// pallindrone store it in a second array and print them.
#include<stdio.h>
int pd(int);
void main()
{
    int a[20],b[20]={0},n,r;
    printf("Enter limit of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    for(int i=0; i<n;i++)
    {
        r=pd(a[i]);
        if(r==1)
        {
            b[i]=a[i];
        }
    }
    printf("array consists of pallindrone numbers are: ");
    for(int i=0; i<n;i++)
    {
        printf("%d ",b[i]);
    }

    
}
int pd(int x)
{
    int temp=x,rev=0;
    while(temp>0)
    {
        rev=temp%10+rev*10;
        temp=temp/10;
    }
    if(rev==x)
    {
        return 1;
    }else
    {
        return 0;
    }
}