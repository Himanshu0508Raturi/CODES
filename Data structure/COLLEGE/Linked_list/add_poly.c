#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coe;
    int expo;
    struct node *next;
};
typedef struct node node;
void insert(node **head, int coe, int expo)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->coe = coe;
    new_node->expo = expo;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void add_poly(node *list1, node *list2, node **list3)
{
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->expo == list2->expo)
        {
            insert(list3, list1->coe + list2->coe, list1->expo);
            list1 = list1->next;
            list2 = list2->next;
        }
        else if (list1->expo > list2->expo)
        {
            insert(list3, list1->coe, list1->expo);
            list1 = list1->next;
        }
        else if (list1->expo < list2->expo)
        {
            insert(list3, list2->coe, list2->expo);
            list2 = list2->next;
        }
    }
    while (list1 != NULL)
    {
        insert(list3, list1->coe, list1->expo);
        list1 = list1->next;
    }
    while (list2 != NULL)
    {
        insert(list3, list2->coe, list2->expo);
        list2 = list2->next;
    }
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%d", head->coe);
        printf("x^");
        printf("%d", head->expo);
        if (head->next != NULL)
        {
            printf(" + ");
        }
        else
        {
            printf("\n");
        }
        head = head->next;
    }
}
void main()
{
    node *list1 = NULL, *list2 = NULL, *list3 = NULL;
    insert(&list1, 5, 6);
    insert(&list1, 6, 4);
    insert(&list1, 2, 3);
    printf("List 1 is: ");
    display(list1);

    insert(&list2, 8, 6);
    insert(&list2, 3, 2);
    insert(&list2, 4, 1);
    insert(&list2, 5, 0);
    printf("List 2 is: ");
    display(list2);

    add_poly(list1, list2, &list3);
    printf("Addition is:");
    display(list3);
}