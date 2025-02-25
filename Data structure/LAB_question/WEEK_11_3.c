#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct node
{
    char val;
    struct node *left, *right;
} node;
node *createnode(char c)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->val = c;
    newnode->left = newnode->right = NULL;
    return newnode;
}
bool isoperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return 0;
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%c", root->val);
}
void freeTree(node *root)
{
    if (root == NULL)
        return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
void infixtopostfix(char *infix)
{
    int len = strlen(infix);
    char *opstack = (char *)malloc(sizeof(char) * len);
    node **treestack = (node **)malloc(sizeof(node *) * len);
    int optop = -1, treetop = -1;

    for (int i = 0; i < len; i++)
    {
        char c = infix[i];

        if (c == '(')
        {
            opstack[++optop] = c;
        }
        else if (c == ')')
        {
            while (optop >= 0 && opstack[optop] != '(')
            {
                char op = opstack[optop--];
                node *right = treestack[treetop--];
                node *left = treestack[treetop--];
                node *newnode = createnode(op);
                newnode->left = left;
                newnode->right = right;
                treestack[++treetop] = newnode;
            }
            optop--;
        }
        else if (isoperand(c))
        {
            node *newnode = createnode(c);
            treestack[++treetop] = newnode;
        }
        else
        {
            while (optop >= 0 && opstack[optop] != '(' && precedence(c) <= precedence(opstack[optop]))
            {
                char op = opstack[optop--];
                node *right = treestack[treetop--];
                node *left = treestack[treetop--];
                node *newnode = createnode(op);
                newnode->left = left;
                newnode->right = right;
                treestack[++treetop] = newnode;
            }
            opstack[++optop] = c;
        }
    }
    while (optop >= 0)
    {
        char op = opstack[optop--];
        node *right = treestack[treetop--];
        node *left = treestack[treetop--];
        node *newnode = createnode(op);
        newnode->left = left;
        newnode->right = right;
        treestack[++treetop] = newnode;
    }
    node *root = treestack[treetop];
    postorder(root);
    printf("\n");
    freeTree(root);
    free(opstack);
    free(treestack);
}
int main()
{
    int t;
    scanf("%d", &t);
    fflush(stdin);
    while (t > 0)
    {
        char exp[100];
        fgets(exp, sizeof(exp), stdin);
        fflush(stdin);
        exp[strcspn(exp, "\n")] = '\0';

        if (strlen(exp) == 0)
        {
            printf("Empty expression! Please try again.\n");
        }
        else
        {
            infixtopostfix(exp);
        }

        t--;
    }
    return 0;
}