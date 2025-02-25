/*Design an algorithm and write a program to implement Deque i.e. double ended queue. Double
ended queue is a queue in which insertion and deletion can be done from both ends of the queue.
The program should implement following operations:
a) insertFront() - insert an element at the front of Deque
b)insertEnd() - insert an element at the end of Deque
c) deleteFront() - delete an element from the front of Deque
d)deleteEnd() - delete an element from the end of Deque
e) isEmpty() - checks whether Deque is empty or not
f)isFull() - checks whether Deque is full or not
g)printFront() - print Deque from front
h)printEnd() - print Deque from end*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL, *last = NULL;
void insertFront()
{
    int v;
    scanf("%d", &v);
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = v;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}
void insertEnd()
{
    int v;
    scanf("%d", &v);
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = v;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        last = new_node;
    }
}
void deleteFront()
{
    node *temp = head;
    head = head->next;
    free(temp);
}
void isEmpty()
{
    if (head == NULL)
    {
        printf("\nDequeue is empty.");
    }
    else
    {
        printf("\nNot empty.");
    }
}
void deleteEnd()
{
    node *temp = head;
    while (temp->next != last)
    {
        temp = temp->next;
    }
    free(last);
    temp->next = NULL;
    last = temp;
}
void printFront()
{
    node *temp = head;
    printf("Content of queue from front- \n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void printEnd()
{
    node *temp = head;
    int arr[20], i = 0;
    while (temp != NULL)
    {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }
    printf("\nContent of queue from end- \n");
    for (int ind = i - 1; ind >= 0; ind--)
    {
        printf("%d ", arr[ind]);
    }
}
void main()
{
    int choice = 1;
    do
    {
        printf("Push\n1 to insert at front\n2 to insert at end\n3 to delete from font\n4 to delete from end\n5 to exit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertFront();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            deleteFront();
            break;
        case 4:
            deleteEnd();
            break;
        }

    } while (choice != 5);
    printFront();
    printEnd();
}
