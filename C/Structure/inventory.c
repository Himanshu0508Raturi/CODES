/* certain manufacturing unit has an inventory store that has certain N types of items with the following details. Item Name,
Unit price per piece (in ₨) and quantity (in Nos).Write a C program using a structure.and display the total cost of the
inventory in rupees.*/
#include <stdio.h>

struct item
{
    char name[10];
    int up, qty;
};

void main()
{
    struct item arr[10];
    int i, n,sum;
    printf("Enter Numbers of Iteams.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of item No. %d:",i+1);
        fflush(stdin);
        gets(arr[i].name);
        printf("Enter unit price of item No. %d:",i+1);
        scanf("%d",&arr[i].up);
        printf("Enter quantity of item No. %d:",i+1);
        scanf("%d",&arr[i].qty);
        sum+=arr[i].qty*arr[i].up;

    }
    printf("\nTotal cost of inventory is %d.\n",sum);



}