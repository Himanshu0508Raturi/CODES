// implimentation of stack using array.
#include <stdio.h>
#define n 5
int stack[n];
int top = -1;

void push(int x)
{
    if (top == n - 1)
    {
        printf("Overflow condition.\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d ", item);
        printf("\n");
    }
}
void peek()
{
    if (top == -1)
    {
        printf("No element in stack.\n");
    }
    else
    {
        printf("Topmost element is %d.", stack[top]);
        printf("\n");
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
void main()
{
    int choice = 1, data;
    do
    {
        printf("Enter input:-\n1.push operation\n2.pop operation\n3.peek operation\n4.display\nand 0 for exit.");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to put on stack:\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
    } while (choice != 0);
}
