/* Develop a user defined function to evaluate the following series:
     1-1/2^2 + 1/3^3 – 4^4………..upto n terms.
*/
#include<stdio.h>
#include<math.h>
float series(int);
void main()
{
    float n,res;
    printf("Enter nth term.\n");
    scanf("%f",&n);
    res=series(n);
    printf("%f",res);
}
 float series(int x){  float se=0,so=0,result;
    for(int i=1;i<=x;i++) {
        if(i%2==0){
            se=se+1/pow(i,i);
 }else     {
            so=so+1/pow(i,i);    }}
    result=so-se;
    return result;}
