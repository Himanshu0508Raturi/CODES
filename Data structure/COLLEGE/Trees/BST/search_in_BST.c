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
void PreOrder_display(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        PreOrder_display(root->left);
        PreOrder_display(root->right);
    }
}
node *search_node(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->key == key)
    {
        return root;
    }
    if (root->key < key)
    {
        return search_node(root->right, key);
    }
    if (root->key > key)
    {
        return search_node(root->left, key);
    }
    // return NULL;
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
    node *n = search_node(root, 10);
    printf("%d", n->key);
}