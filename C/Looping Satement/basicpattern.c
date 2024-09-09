//pattern like 11 22 33 44 55 66------.

#include<stdio.h>

void main()
{
    int i,n;
    printf("Enter last term.\n");
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
        printf("%d%d ",i,i);
    }
}