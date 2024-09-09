/*Develop a user define function to evaluate the folowing series and print the result in the main function.
1+2*1+3*2+4*3+ .......... upto n terms.
Name: Himanshu Raturi
Section:B2
Roll no: 33
Course: B.tech
Branch: CSE*/
#include<stdio.h>
int series(int);
void main(){
	int n,r;
 	printf("Enter n.\n");
 	scanf("%d",&n);
 	r=series(n);
 	printf("%d",r);
}
 int series(int x)
 {
 	int sum=1;
 	for(int i=1,j=0; i<=x;i++,j++){
 	sum=sum+i*j;
 	}return sum;
 }