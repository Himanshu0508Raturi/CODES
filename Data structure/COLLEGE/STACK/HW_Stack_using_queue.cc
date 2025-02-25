#include <iostream>
using namespace std;
void enqueue(int queue[], int *front, int *rear, int x, int n)
{
    if ((*rear) == n - 1)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        if ((*front) == -1)
        {
            *front = 0;
        }
        (*rear)++;
        queue[*rear] = x;
    }
}
void display(int queue[], int front, int rear)
{
    int i;
    cout << "\n";
    for (i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}
int dequeue(int queue[], int *front, int *rear)
{
    int v;
    if ((*front) == -1)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        v = queue[*front];
        (*front)++;
        if (*front > *rear)
        {
            *front = -1;
            *rear = -1;
        }
    }
    return v;
}
void push(int q1[], int q2[], int *front1, int *rear1, int *front2, int *rear2, int x, int n)
{
    //   if((*rear2) == n-1)
    // {
    //     cout<<"Queue is full."<<endl;
    // }else
    // {
    //     if((*front2) == -1)
    //     {
    //         *front2 = 0;
    //     }
    //     (*rear2)++;
    //     q1[*rear2] = x;
    // }
    enqueue(q2, front2, rear2, x, n);
    enqueue(q2, front2, rear2, dequeue(q1, front1, rear1), n);
    int *temp;
    temp = q1;
    q1 = q2;
    q2 = temp;
}
int pop(int queue[], int *front, int *rear)
{
    return dequeue(queue, front, rear);
}
int main()
{
    int n;
    cout << "Enter size of queue: ";
    cin >> n;
    int q1[n], q2[n], front1 = -1, rear1 = -1, front2 = -1, rear2 = -1;
    push(q1, q2, &front1, &rear1, &front2, &rear2, 10, n);
    push(q1, q2, &front1, &rear1, &front2, &rear2, 10, n);
    push(q1, q2, &front1, &rear1, &front2, &rear2, 10, n);
    push(q1, q2, &front1, &rear1, &front2, &rear2, 10, n);
    push(q1, q2, &front1, &rear1, &front2, &rear2, 10, n);
    // display(queue,front,rear);
    // cout<<"popped value is: "<<pop(queue,&front,&rear);
    // display(queue,front,rear);
    // cout<<"popped value is: "<<pop(queue,&front,&rear);
    // display(queue,front,rear);
    // cout<<"popped value is: "<<pop(queue,&front,&rear);
    // display(queue,front,rear);
    // cout<<"popped value is: "<<pop(queue,&front,&rear);
    // display(queue,front,rear);
    // cout<<"popped value is: "<<pop(queue,&front,&rear);
    // display(queue,front,rear);
    // cout<<"popped value is: "<<pop(queue,&front,&rear);
    // display(queue,front,rear);

    return 0;
}