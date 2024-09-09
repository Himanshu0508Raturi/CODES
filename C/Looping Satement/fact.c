//facto 1 + facto 2 + facto 3+------facto n.
#include<stdio.h>
#include<math.h>
void main(){
    int n,i,sum=0,facto=1;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(i=1; i<=n ; i++)
    {
        facto=facto*i;
        sum= sum+facto;
    }
    printf("%d",sum);

}  
