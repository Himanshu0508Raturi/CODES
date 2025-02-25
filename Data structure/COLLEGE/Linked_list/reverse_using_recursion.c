#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;

void insert(node **head, node **last, int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->info = v;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
        *last = temp;
    }
    else
    {
        (*last)->next = temp;
        *last = temp;
    }
}
node * reverse(node *head)
{
    if(head == NULL || (head)->next ==NULL)
    {
        return head;
    }
    node * new_head = reverse((head)->next);
    node *front = (head)->next;
    front->next = (head);
    (head)->next = NULL;
    return new_head;
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->info);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    node *head = NULL, *last = NULL;
    insert(&head, &last, 10);
    insert(&head, &last, 20);
    insert(&head, &last, 30);
    insert(&head, &last, 40);
    insert(&head, &last, 50);
    display(head);
    node * rev_node = reverse(head);
    display(rev_node);
    return 0;
}