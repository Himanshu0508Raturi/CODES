/* *
   **
   ***
   ****
   *****
   ****
   ***
   **
   *
*/
#include<stdio.h>

void main(){
    int n;
    printf("Enter peak value for star.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)//this loop for rows.
    {
        for(int j=1; j<=i; j++)//this loop for(*).
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}