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
node * rev(node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node *temp=rev(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}
void reverse(node **head)
{
    node *pre_node, *current_node, *next_node;
    pre_node = NULL;
    current_node = next_node = *head;
    while (next_node != NULL)
    {
        next_node = next_node->next;
        current_node->next = pre_node; // It create reverse link.
        pre_node = current_node;
        current_node = next_node;
    }
    *head = pre_node;
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
    reverse(&head);
    display(head);
    return 0;
}