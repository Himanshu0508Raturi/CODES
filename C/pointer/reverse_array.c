/* to input N int numbers in an array then pass this array to a function to reverse it using pointer*/
#include<stdio.h>
void rev(int[],int);
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
    rev(a,n);
    printf("Array in reverse order is.\n");
     for(i=0; i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void rev(int arr[],int x)
{
    int *ptr,i,s,temp;
    ptr=arr;
    for(i=0,s=x-1; i<x/2; i++,s--)
    {
        temp=*(ptr+i);
        *(ptr+i)= *(ptr+s);
        *(ptr+s)=temp;
    }
}
//second code for this.
#include<stdio.h>
void rev(int *,int);
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
    rev(a,n);
    printf("Array in reverse order is.\n");
     for(i=0; i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void rev(int *ptr,int x)
{
    int i,temp;
    for(i=0; i<x/2; i++)
    {
        temp=*(ptr+i);
        *(ptr+i)= *(ptr+x-1-i);
        *(ptr+x-1-i)=temp;
    }
}
//same question but using two pointers 1st for the 0th index value and 2nd for last index value.
#include<stdio.h>
void rev(int *,int);
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
    rev(a,n);
    printf("Array in reverse order is.\n");
     for(i=0; i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void rev(int *pl,int x)
{
    int i,temp,*pr;
    pr=pl+x-1;
    for(i=0; i<x/2; i++,pl++,pr--)
    {
        temp=*pl;
        *pl= *pr;
        *pr=temp;
    }
}