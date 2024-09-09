/* 1
   23
   456
   78910
   1112131415 
this pattern is known as floyd's triangle.*/
#include<stdio.h>

void main(){
    int n,c=1;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)//this loop for rows.
    {
        for(int j=1; j<=i; j++)//this loop for(*).
        {
            printf("%d",c);
            c=c+1;
        }
        printf("\n");
    }

}