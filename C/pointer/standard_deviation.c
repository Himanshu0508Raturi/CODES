/*Write a C program to accept & store N real numbers into an array. Find their mean and 
standard deviation using pointers and display the same to the output screen. 
 Sample Input: 
 N=9 Array[ ] = {22, -3, 11, -2, 5, 7,12,13, 18} 
 Output:
 Mean μ : 9.22 Std. Deviation: 7.91 */
 #include<stdio.h>
#include<math.h>
void main()
{
    float a[20],*p,sum=0,mean,sd,sum1=0;
    int i,n;
    printf("Enter numbers elements.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    p=a;
    for(i=0; i<n; i++)
    {
        scanf("%f",p+i);
        sum=sum + *(p+i);
    }
    //for calculating mean.
    mean=sum/n;
    printf("Mean is %f.\n",mean);
    //for standard deviation.
    for(i=0; i<n; i++)
    {
        sum1=sum1 + pow(*(p+i) - mean,2);
    }
    sd= sqrt(sum1/n);
    printf("Standard deviation is %f.\n",sd);

}