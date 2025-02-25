// Implementing queue using 2 stack.
#include <iostream>
using namespace std;
void push1(int st1[], int data, int *top1, int n)
{
    if ((*top1) == n - 1)
    {
        cout << "Queue is full.";
    }
    else
    {
        st1[++(*top1)] = data;
    }
}
void push2(int st2[], int data, int *top2, int n)
{
    if ((*top2) == n - 1)
    {
        cout << "Queue is full.";
    }
    else
    {
        st2[++(*top2)] = data;
    }
}
void enqueue(int st1[], int x, int *top1, int n, int *count)
{
    push1(st1, x, top1, n);
    (*count)++;
}
int pop1(int st1[], int *top1)
{
    return st1[(*top1)--];
}
int pop2(int st2[], int *top2)
{
    return st2[(*top2)--];
}
int dequeue(int st1[], int st2[], int *count, int *top1, int *top2, int n)
{
    int i;
    if ((*top1) == -1 && (*top2) == -1)
    {
        cout << "Queue is empty." << endl;
        return -1;
    }
    else
    {
        for (i = 0; i < (*count); i++)
        {

            push2(st2, pop1(st1, top1), top2, n);
        }
        int dequeuedValue = pop2(st2, top2);
        (*count)--;
        for (i = 0; i < (*count); i++)
        {
            push1(st1, pop2(st2, top2), top1, n);
        }
        return dequeuedValue;
    }
}
void display(int st1[], int *top1)
{
    int i;
    cout << "queue was." << endl;
    for (i = 0; i <= *top1; i++)
    {
        cout << st1[i] << " ";
    }
}
int main()
{
    int n, v, count = 0;
    cout << "Enter size of stack: ";
    cin >> n;
    int st1[n], st2[n];
    int top1 = -1, top2 = -1;
    enqueue(st1, 5, &top1, n, &count);
    enqueue(st1, 2, &top1, n, &count);
    enqueue(st1, 8, &top1, n, &count);
    display(st1, &top1);
    v = dequeue(st1, st2, &count, &top1, &top2, n);
    if (v != -1)
    {
        cout << "Dequeued value is: " << v << endl;
    }
    display(st1, &top1);
    v = dequeue(st1, st2, &count, &top1, &top2, n);
    if (v != -1)
    {
        cout << "Dequeued value is: " << v << endl;
    }
    display(st1, &top1);
    return 0;
}