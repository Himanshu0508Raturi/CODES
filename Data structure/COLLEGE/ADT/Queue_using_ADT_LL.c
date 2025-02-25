#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node
{
    int info;
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
node *create_node(int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->info = data;
    temp->next = NULL;
    return temp;
}
void enqueue(queue **q, int v)
{
    node *new_node = create_node(v);
    if ((*q)->front == NULL || (*q)->rear == NULL)
    {
        (*q)->front = (*q)->rear = new_node;
    }
    else
    {
        (*q)->rear->next = new_node;
        (*q)->rear = new_node;
    }
}
int dequeue(queue **q)
{
    int v;
    if ((*q)->front == NULL)
    {
        printf("Queue is Empty.");
    }
    else
    {
        v = (*q)->front->info;
        node *temp = (*q)->front;
        (*q)->front = (*q)->front->next;
        temp->next = NULL;
        if ((*q)->front == NULL)
        {
            (*q)->rear = NULL;
        }
        free(temp);
    }
    return v;
}
bool is_empty(queue *q)
{
    return q->front == NULL;
}
void display(queue *q)
{
    node *temp = q->front;
    while (temp != NULL)
    {

        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    queue *q;
    initialize_queue(q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    display(q);
    dequeue(&q);
    display(q);
    dequeue(&q);
    dequeue(&q);
    display(q);
}
/*#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
typedef struct queue
{
    node *front , *rear;
}queue;
queue* initialize_queue()
{
    queue *q = (queue*)malloc(sizeof(queue));
    q->front = q->rear = NULL;
    return q;
}
node* create_node(int v)
{
   node *temp = (node*)malloc(sizeof(node));
   temp->next = NULL;
   temp->data =v;
   return temp;
}
void enqueue(queue *q , int v)
{
    node *new_node = create_node(v);
    if(q->front == NULL || q->rear == NULL)
    {
        q->front = q->rear = new_node;
    }else
    {
        q->rear->next = new_node;
        q->rear = new_node;
    }
}
int dequeue(queue *q)
{
    int v = -1;
    if(q->front == NULL)
    {
        printf("Empty");
    }else
    {
        node *temp = q->front;
        q->front = q->front->next;
        v = temp->data;
        temp->next = NULL;
        free(temp);
        if(q->front == NULL)
        {
            q->rear = NULL;
        }
    }
    return v;
}
void display(queue *q)
{
    node *temp = q->front;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp =  temp->next;
    }
    printf("\n");
}
void main()
{
    queue *q = initialize_queue();
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    display(q);
    dequeue(q);
    display(q);
}*/