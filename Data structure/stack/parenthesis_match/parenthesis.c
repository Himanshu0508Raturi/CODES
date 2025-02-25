// parenthesis match problem using stack;
#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
} *top = NULL;
void push(char x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->next = top;
    top = new_node;
}
void pop()
{
    struct node *temp;
    temp = top;
    // printf("The pooped element is %d\n", top->data);
    top = top->next;
    free(temp);
}
void peek()
{
    printf("Topmost element is %d\n", top->data);
}
int isempty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("No element in list\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void main()
{   
    char exp[30];
    int i, f = 0;
    printf("Enter a expression\n");
    fgets(exp, sizeof(exp), stdin);
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isempty())
            {
                f = 1;
                break;
            }
            pop();
        }
    }
    if (isempty() && f == 0)
    {
        printf("Expression is balanced\n");
    }
    else
    {
        printf("Expression is not balanced\n");
    }
}