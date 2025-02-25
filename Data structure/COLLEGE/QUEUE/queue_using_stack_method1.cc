/*Enqueue  - costly
dequeue - optimal*/
// this is Method 1. This method was  not preffered as enqueue is more time taking & we have to perform enqueue more than dequeue.
#include <iostream>
using namespace std;
void push(int st[], int *top, int x, int n)
{
    if ((*top) == n - 1)
    {
        cout << "stack is full";
    }
    else
    {
        (*top)++;
        st[*top] = x;
    }
}
int pop(int st[], int *top)
{
    if (*top == -1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        return st[(*top)--];
    }
}
void enqueue(int st1[], int st2[], int *top1, int *top2, int x, int n)
{
    if (*top1 == n - 1)
    {
        cout << "\nQueue is full" << endl;
    }
    else
    {
        while ((*top1) != -1)
        {
            push(st2, top2, pop(st1, top1), n);
        }
        push(st1, top1, x, n);
        while ((*top2) != -1)
        {
            push(st1, top1, pop(st2, top2), n);
        }
    }
}
void display(int st1[], int top1)
{
    for (int i = top1; i >= 0; i--)
    {
        cout << st1[i] << " ";
    }
    cout << endl;
}
int dequeue(int st1[], int *top1)
{
    int x = -1;
    if ((*top1) == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        x = st1[*top1];
        (*top1)--;
    }
    return x;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int st1[n], st2[n], top1 = -1, top2 = -1;
    enqueue(st1, st2, &top1, &top2, 10, n);
    enqueue(st1, st2, &top1, &top2, 15, n);
    enqueue(st1, st2, &top1, &top2, 20, n);
    enqueue(st1, st2, &top1, &top2, 25, n);
    enqueue(st1, st2, &top1, &top2, 30, n);
    display(st1, top1);
    cout << "\nDeleted value is: " << dequeue(st1, &top1) << endl;
    display(st1, top1);
    cout << "\nDeleted value is: " << dequeue(st1, &top1) << endl;
    display(st1, top1);
    cout << "\nDeleted value is: " << dequeue(st1, &top1) << endl;
    display(st1, top1);
    cout << "\nDeleted value is: " << dequeue(st1, &top1) << endl;
    display(st1, top1);
    enqueue(st1, st2, &top1, &top2, 400, n);
    display(st1, top1);
    return 0;
}