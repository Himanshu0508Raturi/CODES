//Program to print pascal triangle.
#include<stdio.h>

void main()
{
    int n,c;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {   
        for(int j=1; j<n-i;j++)
        {
            printf(" ");
        }

        for(int k=0;k<=i;k++)
        {
            if(i==0 || k==0)
            {
                c=1;
               
            }else
        {
            c=(c*(i-k+1))/k;
           
        }
         printf("%d ",c);        


        }
     printf("\n");
    }
     
}