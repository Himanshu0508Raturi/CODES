/*Develop a c program to find total and average sale of N employes by reading the details such as empl code, name and sales using
array of structures.*/
#include <stdio.h>
struct info
{
    int empc, sale;
    char name[30];
};
void main()
{
    int i, n, sum = 0;
    float avg;
    struct info arr[30];
    printf("Enter the number of employes.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of employ %d.\n",i+1);
        printf("Enter employ code.\n");
        scanf("%d",&arr[i].empc);
        printf("Enter employ name.\n");
        scanf("%s",arr[i].name);
        printf("Enter sales.\n");
        scanf("%d",&arr[i].sale);
        sum+=arr[i].sale;
    }
    printf("Total sale is %d.\n",sum);
    avg=sum/n;
    printf("Average sale is %f",avg);


}