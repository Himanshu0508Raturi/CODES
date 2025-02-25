// reverse a string using stack.
//  multiple parenthesis match problem using stack;
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
char pop()
{
    struct node *temp;
    char data;
    temp = top;
    data = temp->data;
    top = top->next;
    free(temp);
    return data;
}
void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
void main()
{
    char str[20], ch;
    int i;
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }
    while (!isempty())
    {
        ch = pop();
        printf("%c", ch);
    }
}