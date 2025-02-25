#include <stdio.h>
void enqueue(int q[], int *front, int *rear, int n, int val)
{

    if (*front == -1 && *rear == -1)
    {
        *front = 0;
        *rear = 0;
    }
    else if ((((*rear) + 1) % n) == *front)
    {
        printf("Queue is full.\n");
        return;
    }
    else
    {

        *rear = ((*rear) + 1) % n; // instead of rear++.
        q[*rear] = val;
    }
}
int dequeue(int q[], int *front, int *rear, int n)
{
    int v;
    if (*front == -1 && *rear == -1)
    {   
        printf("Queue is empty.\n");
    }
    else if (*front == *rear)
    {
        v = q[*front];
        *front = *rear = -1;
    }
    else
    {
        *front = ((*front) + 1) % n;
    }
    return v;
}
void display(int q[], int front, int rear, int n)
{
    // for(int i = front ; i!= rear ; (i+1)%n)
    // {
    //     printf("%d ",q[i]);
    // }
    // printf("%d\n",q[rear]);
    int i = front;
    while (i != rear)
    {
        printf("%d ", q[i]);
        i = (i + 1) % n;
    }
    printf("%d\n", q[i]);
}
void main()
{
    int n = 5;
    int q[n], front = -1, rear = -1;
    enqueue(q, &front, &rear, n, 10);
    enqueue(q, &front, &rear, n, 20);
    enqueue(q, &front, &rear, n, 30);
    enqueue(q, &front, &rear, n, 40);
    enqueue(q, &front, &rear, n, 50);
    display(q, front, rear, n);
    // int v = dequeue(q, &front, &rear, n);
}
