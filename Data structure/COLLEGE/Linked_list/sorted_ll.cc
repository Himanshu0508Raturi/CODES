#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
void insert_sorted(node **head, int val)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = val;
    new_node->next = NULL;
    node *temp = *head;
    if (*head == NULL)
    {
        *head = new_node;
    }
    else if ((*head)->next == NULL)
    {
        if ((*head)->info < val)
        {
            (*head)->next = new_node;
        }
        else
        {
            new_node->next = *head;
            *head = new_node;
        }
    }
    else if ((*head)->info > val)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        while ((temp->next) != NULL && (temp->next)->info < val)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void del(node **head, int v)
{
    node *temp = *head;
    node *pretemp = temp;
    if ((*head)->info == v)
    {
        (*head) = (*head)->next;
        temp->next = NULL;
        delete (temp);
    }
    else
    {
        while (temp->info != v)
        {
            pretemp = temp;
            temp = temp->next;
        }
        pretemp->next = temp->next;
        temp->next = NULL;
        delete (temp);
    }
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->info << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{
    node *head = NULL;
    insert_sorted(&head, 30);
    insert_sorted(&head, 20);
    insert_sorted(&head, 3);
    insert_sorted(&head, 14);
    insert_sorted(&head, 25);
    display(head);
    cout << "Enter element to delete: ";
    int x;
    cin >> x;
    del(&head, x);
    display(head);
    return 0;
}
/*#include <stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
void create(node **head, int v)
{
    node * new_node = (node *)malloc(sizeof(node));
    new_node->info=v;
    new_node->next=NULL;
    if(*head == NULL)
    {
        *head = new_node;
    } else
    {
        if(v < (*head)->info)
        {
            new_node->next = (*head);
            (*head) = new_node;
        } else
        {
            node*temp = (*head);
            while (temp->next != NULL && temp->next->info < v)
            {
                temp = temp->next;
            }
            // Insert the new node in the correct position
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }
}
void display(node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->info);
        head= head->next;
    }
}
int main()
{
    node * head = NULL;
    create(&head,30);
    create(&head,20);
    create(&head,3);
    create(&head,14);
    create(&head,25);
    display(head);
    return 0;
}
*/