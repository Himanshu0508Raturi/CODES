/*to read and print an array of n numbers , then find out the smallest number. Also print the position of smallest number*/
#include<stdio.h>
int small(int *,int,int *);
void main()
{
    int a[10],n,i,r,pos;
    printf("Enter n.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    r=small(a,n,&pos);
    printf("Smallest element is %d.\n",r);
    printf("Position is %d.\n",pos);
    
}
int small(int *p, int n,int *pos)
{
    int s,i;
    s=*p;
    *pos=0;
    for(i=1; i<n;i++)
    {
        if(*(p+i)<s)
        {
            s=*(p+i);
            *pos=i;
        }
    }
    
    return s;


}
