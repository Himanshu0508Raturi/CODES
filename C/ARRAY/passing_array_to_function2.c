//to input N int number in an array then by using function store it in reverse order.
/*#include<stdio.h>
void rev(int[],int);
void main()
{
   int a[30],n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);//FUNCTION CALL

}

void rev(int a[],int x)
{
    int temp;
    for(int l=0,m=x-1;l<x/2;l++,m--)
    {
        temp=a[l];
        a[l]=a[m];
        a[m]=temp;
    }
    printf("Numbers in reverse order are: \n");
    for(int i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
}*/
//IF WE WNAT TO PRINT ARRAY IN MAIN FUNCTION THEN WE CAN JUST COPY-PASTE LAST FOR LOOP TO MAIN FUNCTION 
//BECAUSE BOTH ARRAY A[] IN MAIN FUNCTION AND {REV} FUNCTION SHARE SAME MEMORY LOCATION.

#include<stdio.h>
void rev(int[],int);
void main()
{
   int a[30],n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);//FUNCTION CALL
    printf("Numbers in reverse order are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

void rev(int a[],int x)
{
    int temp;
    for(int l=0,m=x-1;l<x/2;l++,m--)
    {
        temp=a[l];
        a[l]=a[m];
        a[m]=temp;
    }
    
}
