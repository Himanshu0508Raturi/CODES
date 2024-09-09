/*A
  BB
  CCC
  DDDD
  EEEEE
*/
#include<stdio.h>

void main(){
    int n;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)//this loop for rows.
    {
        for(int j=1; j<=i; j++)//this loop for(*).
        {
            printf("%c",64+i);
        }
        printf("\n");
    }

}