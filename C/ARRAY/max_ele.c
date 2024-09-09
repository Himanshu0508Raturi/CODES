/*given an array of size N,return the majority element. The majority element is the element that appears more than [n/2] times.*/
#include<stdio.h>
int max(int [],int);
void main()
{
    int a[20],n,i,r;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=max(a,n);
    printf("Max element is %d.\n",r);
}
int max(int a[],int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
        c=0;
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
           
        }
        
        if(c>n/2)
        {
            return a[i];
        }
    }
}