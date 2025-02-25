/*Assume that we have a singly ll with a pointer p at first node . write a c function to print all the nodes having multiples of k in
the ll*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *p = NULL;
void create()
{
    struct node *new_node, *temp;
    int choice = 1;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (p == NULL)
        {
            temp = p = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Enter choice\n");
        scanf("%d", &choice);
    }
}
void display()
{
    struct node *temp = p;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void node(int x)
{
    struct node *temp1;
    temp1 = p;
    while (temp1 != NULL)
    {
        if (temp1->data % x == 0)
        {
            printf("%d ", temp1->data);
        }
        temp1 = temp1->next;
    }
    printf("\n");
}
void main()
{
    int k;
    create();
    display();
    printf("Enter k\n");
    scanf("%d", &k);
    printf("Nodes having multiples of k are\n");
    node(k);
}