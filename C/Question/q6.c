/*Q6. Write a code to input two arrays and print their intersection using pointers.*/
#include<stdio.h>

void main()
{
    int a[10],b[10],i,n,*pa,*pb,j;
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    printf("Enter elements in 1st array.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements in 2nd array.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    pa=a;
    pb=b;
    printf("The intersecting elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(pa+i)==*(pb+j))
            {
                printf("%d ",*(pa+i));
            }
        }
    }


}