#include<stdio.h>
void a(int[],int);
void main()
{
    int arr[30],n;
    printf("enter the no of elements  you want to enter in array:");
    scanf("%d",&n);
    a(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void a(int a[],int c){
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
}