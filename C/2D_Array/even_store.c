/*WAP in C to declare two array A and B.Initialise A to {2,5,8,4,5,10,11,6} and initialise B to 
{101,120,144,11,3}.Declare an array C. store the even number of A and B in c.
*/
#include<stdio.h>

void main()
{
    int a[]={2,5,8,4,5,10,11,6},b[]={101,120,144,11,3},c[15]={0},index_c_counter=0;
    for(int i=0;i<8;i++)
    {
        if(a[i]%2==0)
        {
            c[index_c_counter]=a[i];
            index_c_counter++;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(b[i]%2==0)
        {
            c[index_c_counter]=b[i];
            index_c_counter++;
        }
    }

    printf("Elements in c are: \n");
    for(int i=0;i<index_c_counter;i++)
    {
        printf("%d ",c[i]);
    }
}