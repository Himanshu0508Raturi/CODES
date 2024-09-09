#include<stdio.h>
#include<string.h>
struct info
{
    int ic,qty;
    float p;
    char name[10];
};
void main()
{
    struct info a[10];
    int i,n;
    float sum=0;
    printf("Enter number of items: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name of item(%d): ",i+1);
        scanf(" %[^\n]s",a[i].name);
        printf("Enter item code: ");
        scanf("%d",&a[i].ic);
        printf("Enter QTY and price: ");
        scanf("%d%f",&a[i].qty,&a[i].p);
        sum+=a[i].qty*a[i].p;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d %s %d %f\n",a[i].ic,a[i].name,a[i].qty,a[i].p);
    }
    printf("Total amount worth of %d Items in Rs. is %f",n,sum);

}