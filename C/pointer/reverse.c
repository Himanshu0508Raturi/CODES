// Write a program in C to print the elements of an array in reverse order using pointers.
#include<stdio.h>

void main()
{
    int a[30],i,n,*p,s,temp;
    printf("Enter N.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0,s=n-1; i<n/2;i++,s--)
    {
        temp=*(p+i);
        *(p+i)=*(p+s);
        *(p+s)=temp;
    }
     printf("elements in reverse order are.\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}