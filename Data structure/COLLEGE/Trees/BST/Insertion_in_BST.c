// binary search tree.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;

node *newnode(int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
node *insertNode(node *root, int key)
{
    if (root == NULL)
        return newnode(key);
    if (root->key == key)
        return root;
    if (root->key > key)
        root->left = insertNode(root->left, key);
    if (root->key < key)
        root->right = insertNode(root->right, key);
    return root;
}
void InOrder_display(node *root)
{

    if (root != NULL)
    {
        InOrder_display(root->left);
        printf("%d ", root->key);
        InOrder_display(root->right);
    }
}
void PreOrder_display(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        PreOrder_display(root->left);
        PreOrder_display(root->right);
    }
}
void PostOrder_display(node *root)
{
    if (root != NULL)
    {
        PostOrder_display(root->left);
        PostOrder_display(root->right);
        printf("%d ", root->key);
    }
}
void main()
{
    node *root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 10);
    root = insertNode(root, 80);
    root = insertNode(root, 10);
    root = insertNode(root, 12);
    root = insertNode(root, 17);
    root = insertNode(root, 66);
    PreOrder_display(root);
    printf("\n");
    printf("In Order Traversal: ");
    InOrder_display(root);
    printf("\n");
    printf("Post Order Traversal: ");
    PostOrder_display(root);
    printf("\n");
}