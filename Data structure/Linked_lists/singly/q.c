/*Assume that we have a singly ll with a pointer p at the first node. write a c function to input a number and search it in the ll if
number found update the ll by deleting that node otherwise print number not found*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *p = NULL; // p work as head node.
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
void del(struct node *t)
{
    if (t == p)
    {
        p = t->next;
        free(t);
    }
    else
    {
        struct node *r = p;
        while (r->next != t)
        {
            r = r->next;
        }
        r->next = t->next;
        free(t);
    }
    display();
}
void search()
{
    struct node *tmp;
    int e, f = 0;
    tmp = p;
    printf("enter element to search\n");
    scanf("%d", &e);
     while (tmp != NULL) {
        if (tmp->data == e) {
            del(tmp);
            f = 1;
            break;
        }
        tmp = tmp->next;
    }
    if (!f) {
        printf("Element not found\n");
    }
}
void main()
{
    struct node *new_node, *temp;
    int i, n;
    printf("Enter number of element\n");
    scanf("%d", &n);
    printf("Enter element\n");
    for (i = 0; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (p == NULL)
        {
            p = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
    display();
    search();
}