//sum of even and odd number between 1 to n.
#include<stdio.h>

void main(){
    int n,so=0,se=0;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            se=se+i;
        }else
        {
            so=so+i;
        }
        

    }
    printf("sum of even=%d\n",se);
        printf("sum of odd=%d\n",so);
        printf("sum of even and odd=%d\n",se+so);





}