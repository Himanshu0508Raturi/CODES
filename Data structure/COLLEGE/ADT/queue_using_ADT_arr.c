#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
typedef struct queue
{
    int front, rear;
    int capacity;
    int *array;
} queue;
queue *create_queue(int cap)
{
    queue *q = (queue *)malloc(sizeof(queue));
    q->capacity = cap;
    q->front = q->rear = -1;
    q->array = (int *)malloc(sizeof(int) * q->capacity);
    return q;
}
void enqueue(queue *q, int data)
{
    if (q->rear == q->capacity - 1)
    {
        printf("Queue is full.");
        return;
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
        }
        q->array[++(q->rear)] = data;
    }
}
int dequeue(queue *q)
{
    int v;
    if (q->front == -1)
    {
        printf("Queue is empty.");
        return INT_MIN;
    }
    else
    {
        v = q->array[(q->front)++];
        if (q->front > q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
    }
    return v;
}
bool is_empty(queue *q)
{
    return q->rear == -1;
}
void display(queue *q)
{
    if (q->front != -1)
    {
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%d ", q->array[i]);
        }
    }
    printf("\n");
}
void main()
{
    queue *q = create_queue(5);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    display(q);
    dequeue(q);
    dequeue(q);
    display(q);
}