// program to count total number of nodes in a BST.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *create(int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->key = v;
    new_node->left = new_node->right = NULL;
    return new_node;
}
node *insertNode(node *root, int k)
{
    if (root == NULL)
        return create(k);
    if (root->key < k)
        root->right = insertNode(root->right, k);
    if (root->key > k)
        root->left = insertNode(root->left, k);
    return root;
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
void count(node *root, int *c)
{
    if (root != NULL)
    {
        (*c)++;
        count(root->left, c);
        count(root->right, c);
    }
}
void main()
{
    node *root = NULL;
    int c = 0;
    char choice;
    do
    {
        int v;
        printf("Enter a value: ");
        scanf("%d", &v);
        root = insertNode(root, v);
        printf("Enter y/n");
        getchar();
        scanf("%c", &choice);
    } while (choice != 'n');
    count(root, &c);
    printf("\n%d\n", c);
}