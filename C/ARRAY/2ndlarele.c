/*You have been given an array/list 'ARR' of integers. Your task is to find the second largest element present in the 'ARR'.

Note:
a) Duplicate elements may be present.

b) If no such element is present return -1.
Example:
Input: Given a sequence of five numbers 2, 4, 5, 6, 8.

Output:  6*/
#include <stdio.h>
int lar(int *, int);
void main()
{
    int arr[10], n, i,r;
    printf("Enter n: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    r=lar(arr,n);
    printf("%d",r);
}
int lar(int *p,int x)
{
    int i,j,temp;
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    return *(p+(x-2));
}