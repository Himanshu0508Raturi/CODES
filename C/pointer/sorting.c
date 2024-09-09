//to sort an array in descending order using pointers and UDF.
#include<stdio.h>
int sort(int *,int);
void main()
{
    int a[40],i,n,r;
    printf("Enter N.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Array in descending order is.\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf(".\nSmallest element is %d.\n",a[n-1]);
  
}
int sort(int *p,int x)
{
    int i,min,j,temp;
    for(i=0;i<x;i++)
    {
        for(j=i+1 ; j<x; j++)
        {
            if(*(p+i) < *(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }




}