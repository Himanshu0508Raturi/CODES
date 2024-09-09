// Implement a C function mergeArrays(int *arr1, int *arr2, int size1, int size2, int *result) that merges two sorted arrays into a
//  single sorted array using pointers.
#include <stdio.h>
void mergearrays(int *, int *, int, int, int *);
void main()
{
    int arr1[10],arr2[10],result[20]={0},i,size1,size2,min,temp;
    printf("Enter size for array 1.\n");
    scanf("%d",&size1);
    printf("Enter elements for array 1 in sorted form.\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter size for array 2.\n");
    scanf("%d",&size2);
    printf("Enter elements for array 2 in sorted form.\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    mergearrays(arr1,arr2,size1,size2,result);//function call
    printf("After merging array is.\n");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d ",result[i]);
    }
    
    
}

void mergearrays(int *a1, int *a2, int s1, int s2, int *r)
{
    int i;
    //merging 1st array.
    for(i=0;i<s1;i++)
    {
        *(r+i)=*(a1+i);
    }
    //merging 2nd array.
    for(i=0;i<s2;i++)
    {
        *(r+s1+i)=*(a2+i);
    }



}