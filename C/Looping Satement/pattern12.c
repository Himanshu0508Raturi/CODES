/* 1
   01
   010
   1010
   10101
*/
#include<stdio.h>

void main(){
    int n,c=1;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)//this loop for rows.
    {
        for(int j=1; j<=i; j++)//this loop for(*).
        {
            printf("%d",c%2);
            c=c+1;
        }
        printf("\n");
    }

}