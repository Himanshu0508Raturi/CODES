/*write a program in c to find out minimun element of an array of N elements.
Name: Himanshu Raturi
Section: B2
Roll NO: 33
Course: B.Tech
Branch: CSE
*/
#include<stdio.h>
void main(){
    int a[10],n,min;
    printf("Enter limit.\n");
    scanf("%d",&n);
    printf("Enter element: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    } 
    min=a[0];
    for(int i=1; i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum element is: %d",min);
}