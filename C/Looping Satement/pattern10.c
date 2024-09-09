/*  *
    *
    **
    *****
    ********
    *************
*/
#include<stdio.h>

void main(){
    int nt,n,a=0,b=1;
    printf("Enter the numbers of rows.\n");
    scanf("%d",&n);
    printf("*\n");
    for(int i=2; i<=n; i++)
    {
        nt=a+b;
        a=b;
        b=nt;

    for(int j=1; j<=nt; j++)
    {
        printf("*");
    }
    printf("\n");
    }







}