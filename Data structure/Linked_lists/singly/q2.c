/*Assume that you have two singly ll . first node of first link is pointed by ptr1 and first node of second ll is pointed by ptr2 . write
a c function to create a new ll pointed by ptr3 which is the union of both the ll.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *ptr1 = NULL, *ptr2 = NULL, *ptr3 = NULL;
struct node *create()
{
    struct node *head = 0, *new_node, *temp;
    int i, n;
    printf("Enter number of element\n");
    scanf("%d", &n);
    printf("Enter element\n");
    for (i = 0; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
    return head;
}
void unioon() // b/c union is a keyword in c.
{
    ptr3 = ptr1;
}
void display(struct node *p)
{
    struct node *temp = p;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{
    printf("Enter data for LL 1\n");
    ptr1 = create();
    printf("Enter data for LL 2\n");
    ptr2 = create();
    display(ptr1);
    display(ptr2);
}