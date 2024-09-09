/*print n number of asterisks(*) x number of times per line.
ex.n=5 , x=2
**
**
*  */
#include<stdio.h>

void main()
{
    int n,x;
    printf("Number of Asterisks and asterisks per line.\n");
    scanf("%d%d",&n,&x);

    for(int i=1,j=0;i<=n;i++,j++)
    {
        if(j==x)
        {
            printf("\n");
            j=0;
        }
        printf("*");
    }


}