#include <stdio.h>
#include <stdbool.h>
#define size 5
int front(int q[], int front)
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return -1;
    }
    else
    {
        return q[front];
    }
}
int rear(int q[], int rear)
{
    if (rear == -1)
    {
        printf("Queue is empty.\n");
        return -1;
    }
    else
    {
        return q[rear];
    }
}
bool isempty(int front)
{
    return front == -1;
}
bool isfull(int rear, int front)
{
    return (front == 0 && rear == size - 1);
}
void enqueue(int q[], int *rear, int *front, int v)
{
    if (isfull(*rear, *front))
    {
        printf("Queue is full.\n");
    }
    else
    {

        *rear = ((*rear) + 1) % size;
        q[*rear] = v;
    }
}
int dequeue(int q[], int *front, int *rear)
{
    if(isempty(*front))
    {
        printf("Queue is empty.\n");
        return 0;
    }else
    {
        if(*front == *rear)
        {
            *front = *rear = -1;
        }
        int v = q[*front];
        *front = ((*front) + 1) % size;
        return v;
    }
}
void display(int q[] , int front , int rear)
{
    for(int i = front ; i<= rear ; i++)
    {
        printf("%d ",q[i]);
    }
    printf("\n");
}
void main()
{
    int q[size] , front = -1 , rear = -1;
    enqueue(q,&rear , &front , 10);
    enqueue(q,&rear , &front , 20);
    enqueue(q,&rear , &front , 30);
    enqueue(q,&rear , &front , 40);
    enqueue(q,&rear , &front , 50);
    dequeue(q,&front , &rear);
    dequeue(q,&front , &rear);
    dequeue(q,&front , &rear);
    display(q,front , rear);
}