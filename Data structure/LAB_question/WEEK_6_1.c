/*Design an algorithm and write a program to implement stack operations using minimum number of queues */
/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
    q->front = -1;
    q->rear = -1;
    q->array = (int *)malloc(sizeof(int) * q->capacity);
    return q;
}
void enqueue(queue *q, int v)
{
    if (q->rear == q->capacity - 1)
    {
        printf("Queue is full.");
        return;
    }
    else
    {
        q->array[++(q->rear)] = v;
        if (q->front == -1)
        {
            q->front = 0;
        }
    }
}
int dequeue(queue *q)
{
    int val;
    if (q->front == -1)
    {
        printf("Queue is empty.{}");
        return -1;
    }
    else
    {
        val = q->array[(q->front)++];
        if (q->front > q->rear)
        {
            q->front = q->rear = -1;
        }
    }
    return val;
}
bool is_empty(queue *q)
{
    return q->front == -1;
}
void push(queue *q1, int data)
{
    enqueue(q1, data);
}
int pop(queue *q1, queue *q2)
{
    while (q1->front != q1->rear)
    {
        enqueue(q2, dequeue(q1));
    }
    int data = dequeue(q1);

    // swapping references.
    queue *temp = q1;
    q1 = q2;
    q2 = temp;
    return data;
}
void display(queue *q)
{
    if (is_empty(q))
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->array[i]);
    }
    printf("\n");
}
void main()
{
    queue *q1 = create_queue(5);
    queue *q2 = create_queue(5);
    push(q1, 10);
    push(q1, 20);
    push(q1, 30);
    push(q1, 40);
    push(q1, 50);
    pop(q1, q2);
    pop(q1, q2);
    display(q1);
}*/
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
node *create_node(int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void enqueue(queue *q, int v)
{
    node *new_node = create_node(v);
    if ((q)->rear == NULL || (q)->rear == NULL)
    {
        (q)->front = q->rear = new_node;
    }
    else
    {
        (q)->rear->next = new_node;
        (q)->rear = new_node;
    }
}
int dequeue(queue *q)
{
    int v;
    if ((q)->front == NULL)
    {
        printf("queue is empty.");
    }
    else
    {
        v = q->front->data;
        node *temp = ((q))->front;
        ((q))->front = ((q))->front->next;
        temp->next = NULL;
        if (((q))->front == NULL)
        {
            ((q))->rear = NULL;
        }
        free(temp);
    }
    return v;
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
void push(queue *q, int v)
{
    enqueue(q, v);
}
int pop(queue *q1, queue *q2)
{
    while (q1->front != q1->rear)
    {
        enqueue(q2, dequeue(q1));
    }
    int n_ele = dequeue(q1);
    // swapping ref
    node *temp = q1->front;
    q1->front = q2->front;
    q2->front = temp;

    node *temp1 = q1->rear;
    q1->rear = q2->rear;
    q2->rear = temp1;
    return n_ele;
}
int size(queue *q)
{
    int l = 0;
    node *temp = q->front;
    while(temp  != NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
int main()
{
    queue *q1 = (queue *)malloc(sizeof(queue));
    queue *q2 = (queue *)malloc(sizeof(queue));
    initialize_queue(q1);
    initialize_queue(q2);
    int choice = 1;
    do
    {
        printf("Press\n1. to push.\n2. to pop.\n3. to calculate Size\n4. to exit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int v;
            scanf("%d", &v);
            push(q1, v);
            display(q1);
            break;
        }
        case 2:
        {
            int x;
            x = pop(q1, q2);
            printf("Element deleted from stack - %d\n", x);
            printf("stack after deletion - ");
            display(q1);
            break;
        }
        case 3:
        {
            int s = size(q1);
            printf("Size is %d\n",s);
        }
        }

    } while (choice != 4);
}