// to create a linked list and perform traversal operation .
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; // store the base address of a structure.
};
void main()
{
    struct node *head, *second, *third;
    // allocate memory for nodes in the linked lists in heap.
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Linking nodes.
    // Linking 1st and 2nd node.
    head->data = 78;
    head->next = second;

    // Linking 2nd and 3rd node.
    second->data = 90;
    second->next = third;

    // terminating the list at third node.
    third->data = 98;
    third->next = NULL;

    // traversal started.
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    free(head);
    free(second);
    free(third);

}