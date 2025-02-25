/*Write an algorithm and a program to implement queue using linked list. The program should
implement following stack operations:
a) Create()
b) EnQueue()
c) DeQueue()
d) IsEmpty()
e) Size() */
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct queue
{
    node *front, *rear;
} queue;
void initialize_queue(queue *q)
{
    q->front = NULL;
    q->rear = NULL;
}
node *create(int k)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = k;
    temp->next = NULL;
    return temp;
}
void EnQueue(queue *q, int k)
{
    node *new_node = create(k);
    if (q->front == NULL)
    {
        q->front = q->rear = new_node;
    }
    else
    {
        q->rear->next = new_node;
        q->rear = new_node;
    }
}
int DeQueue(queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is Full.\n");
    }
    else
    {
        int v = q->front->data;
        node *temp = q->front;
        q->front = q->front->next;
        temp->next = NULL;
        if (q->front == NULL)
        {
            q->rear = NULL;
        }
        free(temp);
        return v;
    }
}
void IsEmpty(queue *q)
{
    if (q->front == NULL && q->rear == NULL)
        printf("Queue is empty.\n");
    else
        printf("Queue is not empty.\n");
}
void size(queue *q)
{
    int s = 0;
    node *temp = q->front;
    while (temp != NULL)
    {
        s++;
        temp = temp->next;
    }
    printf("size = %d\n", s);
}
void display(queue *q)
{
    node *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{
    queue *q;
    initialize_queue(q);
    int choice = 1;
    printf("Press\n1 to enqueue.\n2 to dequeue.\n3 to calculate size.\n4 to exit.\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int n;
            printf("Enter value.\n");
            scanf("%d", &n);
            EnQueue(q, n);
            printf("Queue is - ");
            display(q);
            break;
        }
        case 2:
        {
            DeQueue(q);
            printf("Queue is - ");
            display(q);
            break;
        }
        case 3:
        {
            size(q);
            break;
        }
        }
    } while (choice != 4);
}