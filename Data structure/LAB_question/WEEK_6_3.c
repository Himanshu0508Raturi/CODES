/*.Design an algorithm and write a program to implement circular queue. Circular queue is a queue
in which last position of queue is connected with first position of queue to make a circle. The
program should implement following operations:
a) Create() - create a queue of specific size
b)EnQueue(k) - insert an element k into the queue
c) DeQueue() - delete an element from the queue
d)IsEmpty() - check if queue is empty or not
e) Front() - return front item from queue
f) Rear() - return rear item from queue*/
#include <stdio.h>
#define SIZE 5
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

int isEmpty(int front)
{
    if (front == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(int front, int rear)
{
    if (front == 0 && rear == SIZE - 1 || front == rear + 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(int q[], int *front, int *rear, int val)
{
    if (isFull(*front, *rear))
    {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(*front))
    {
        *front = 0;
    }
    *rear = (*rear + 1) % SIZE;
    q[*rear] = val;
}

void dequeue(int q[], int *front, int *rear)
{
    if (isEmpty(*front))
    {
        printf("Queue is empty.\n");
        return;
    }
    int frontEle = q[*front];
    if (*front == *rear)
    {
        *front = *rear = -1;
    }
    else
    {
        *front = (*front + 1) % SIZE;
    }
}

void display(int q[], int front, int rear)
{
    if (isEmpty(front))
    {
        printf("Queue is empty.\n");
        return;
    }
    int i = front;
    printf("Circular Queue : ");
    while (1)
    {
        printf("%d ", q[i]);
        if (i == rear)
        {
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main()
{
    int q[SIZE], f = -1, r = -1;
    int ch = 6;
    int element;
    printf("Press:\n 1. to enqueue\n 2. to dequeue\n 3. to find front\n 4. to find rear\n 5. to exit\n");
    do
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            scanf("%d", &element);
            enqueue(q, &f, &r, element);
            display(q, f, r);
            break;
        case 2:
            dequeue(q, &f, &r);
            display(q, f, r);
            break;
        case 3:
            element = front(q, f);
            if (element != -1)
            {
                printf("Front : %d\n", element);
            }
            break;
        case 4:
            element = rear(q, r);
            if (element != -1)
            {
                printf("Rear : %d\n", element);
            }
            break;
        default:
            break;
        }
    } while (ch != 5);

    return 0;
}