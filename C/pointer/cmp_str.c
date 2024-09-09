//Program to add two matrix using pointers.
#include<stdio.h>

void main()
{
    int a[30],b[30],c[30]={0},n,*pa,*pb,*pc;
    printf("Enter limit.\n");
    scanf("%d",&n);
    printf("Enter elements of A.\n");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of B.\n");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    pa=a;
    pb=b;
    pc=c;
     for(int i=0; i<n;i++)
    {
        *(pc+i)=*(pa+i) + *(pb+i);
    }
    for(int i=0; i<n;i++)
    {
        printf("%d ",*(pc+i));
    }


}