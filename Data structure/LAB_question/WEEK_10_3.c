#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create(int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = v;
    temp->next = NULL;
    return temp;
}
void insert(node **head, int v)
{
    node *new_node = create(v);
    if ((*head) == NULL)
    {
        *head = new_node;
    }
    else
    {
        node *temp = (*head);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
node *rev(node *head)
{
    node *prev = NULL, *curr = head, *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void main()
{
    node *head = NULL;
    int ch, v;
    printf("Press:\n1 to insert node.\n2 to exit.\n");
    do
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            scanf("%d", &v);
            insert(&head, v);
            break;
        }
        }
    } while (ch != 2);
    printf("Original Linked List: ");
    display(head);
    node *rev_head = rev(head);
    printf("Reversed Linked List: ");
    display(rev_head);
}