/*17.	Develop a C program to read the attributes of an item from the user such as ItemCode, ItemName, Quantity and Rate.
Implement a C program using a structure to find the total cost of the inventory of storing N items in the stock.*/
#include <stdio.h>
struct item
{
    int qty, cd;
    char name[20];
    float rt;
};
void main()
{
    struct item a[20];
    int i, n;
    float cst = 0;
    printf("Enter the number of item.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of item(%d):", i + 1);
        scanf(" %[^\n]s", a[i].name);
        printf("\nEnter code:");
        scanf("%d", &a[i].cd);
        printf("\nEnter quantity:");
        scanf("%d", &a[i].qty);
        printf("\nEnter rate:");
        scanf("%f", &a[i].rt);
        cst = cst + a[i].qty * a[i].rt;
    }
    printf("\nTotal cost of inventory is %f:", cst);
}