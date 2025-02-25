// convert stack to queue using one ll.
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Stack and Queue structure
struct StackQueue
{
    struct Node *top;   // For stack (LIFO)
    struct Node *front; // For queue (FIFO)
    struct Node *rear;  // For queue (FIFO)
};

// Create a new StackQueue (stack and queue combined)
struct StackQueue *createStackQueue()
{
    struct StackQueue *sq = (struct StackQueue *)malloc(sizeof(struct StackQueue));
    sq->top = NULL;   // Initialize stack top to NULL
    sq->front = NULL; // Initialize queue front to NULL
    sq->rear = NULL;  // Initialize queue rear to NULL
    return sq;
}

// Stack push operation (LIFO)
void push(struct StackQueue *sq, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = sq->top;
    sq->top = newNode;
}

// Stack pop operation (LIFO)
int pop(struct StackQueue *sq)
{
    if (sq->top == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node *temp = sq->top;
    int popped = temp->data;
    sq->top = sq->top->next;
    free(temp);
    return popped;
}

// Check if the stack is empty
int isStackEmpty(struct StackQueue *sq)
{
    return sq->top == NULL;
}

// Queue enqueue operation (FIFO)
void enqueue(struct StackQueue *sq, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If queue is empty, both front and rear point to the new node
    if (sq->rear == NULL)
    {
        sq->front = sq->rear = newNode;
        return;
    }

    // Otherwise, link the new node at the rear and update rear
    sq->rear->next = newNode;
    sq->rear = newNode;
}

// Queue dequeue operation (FIFO)
int dequeue(struct StackQueue *sq)
{
    if (sq->front == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }

    struct Node *temp = sq->front;
    int dequeued = temp->data;
    sq->front = sq->front->next;

    // If the queue becomes empty, set rear to NULL
    if (sq->front == NULL)
    {
        sq->rear = NULL;
    }

    free(temp);
    return dequeued;
}

// Check if the queue is empty
int isQueueEmpty(struct StackQueue *sq)
{
    return sq->front == NULL;
}

int main()
{
    // Create a combined StackQueue
    struct StackQueue *sq = createStackQueue();

    // Push elements to stack
    // push(sq, 1);
    // push(sq, 2);
    // push(sq, 3);

    // Convert stack to queue by popping from stack and enqueuing into queue
    // while (!isStackEmpty(sq))
    // {
    //     int data = pop(sq);
    //     enqueue(sq, data);
    // }

    // // Dequeue all elements from the queue to verify FIFO behavior
    // while (!isQueueEmpty(sq))
    // {
    //     printf("%d ", dequeue(sq));
    // }
    enqueue(sq,10);
    enqueue(sq,20);
    enqueue(sq,30);
    enqueue(sq,40);
    enqueue(sq,50);
    enqueue(sq,60);
    while (!isQueueEmpty(sq))
    {
        printf("%d ", dequeue(sq));
    }
    return 0;
}
