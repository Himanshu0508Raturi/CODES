//q5
#include<stdio.h>
void mergearray(int A[],int n,int B[],int m,int R[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        R[k++]=A[i++];
    else
    {
        R[k++]=B[j++];
    }
    }
}
void main()
{
    int n,m;
    printf("Enter the size of arrayA and arrayB:");
    scanf("%d%d",&n,&m);
    int A[n],B[n],R[n+m];
    printf("Enter elements for array A in sorted order: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }
    mergearray(A,n,B,m,R);
    printf("Merged aray R in sorted order: ");
    for(int i=0;i<n+m;i++)
    {
        printf("%d",R[i]);
    }
}