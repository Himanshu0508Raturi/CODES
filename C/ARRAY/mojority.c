/*To return majority elments of an array more than[n/2] times.*/
#include <stdio.h>
int maj(int *, int);
void main()
{
    int a[20];
    int i, n;
    printf("Enter n: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if(maj(a, n)!=0)
    {
    printf("Number with mojority element is: %d", maj(a, n));
    }else
    {
        printf("NO majority elements");
    }
}
int maj(int *p,int x)
{
    int c,i,j,ind;
    for(i=0;i<x;i++)
    {
        c=1;
        for(j=i+1;j<x;j++)
        {
            if(*(p+i)==*(p+j))
            {
                c++;
                ind=i;
            }
        }
        if(c>x/2)
        {
            return *(p+ind);
        }else
        {
            return 0;
        }
    }

}