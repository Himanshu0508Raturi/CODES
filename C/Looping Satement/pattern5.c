/*     *
      ***
     *****
    *******
   *********   
*/
#include<stdio.h>

void main(){
    int n;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)//this loop for rows.
    {
        for(int j=1;j<=n-i; j++ )//this loop for space.
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)//this loop for (*).
        {
            printf("*");
        }
        printf("\n");
    }
}