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
int len(node *head)
{
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}
void find_value(node *head, int n)
{
    int l = len(head);
    node *temp = head;
    for (int i = 0; i < (l - n); i++)
    {
        temp = temp->next;
    }
    printf("Value at position %d from end: %d",n, temp->data);
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
void main()
{
    node *head = NULL;
    int ch, v, n;
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
    printf("Enter value n: ");
    scanf("%d", &n);
    printf("Linked List: ");
    display(head);
    find_value(head, n);
}