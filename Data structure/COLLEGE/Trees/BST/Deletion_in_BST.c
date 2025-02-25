#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    struct node *right, *left;
} node;

node *new_node(int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->key = item;
    temp->right = temp->left = NULL;
    return temp;
}
node *insert_node(node *root, int key)
{
    if (root == NULL)
    {
        return new_node(key);
    }
    if (root->key > key)
    {
        root->left = insert_node(root->left, key);
    }
    if (root->key < key)
    {
        root->right = insert_node(root->right, key);
    }
    return root;
}
void inOrder_display(node *root)
{
    if (root != NULL)
    {
        inOrder_display(root->left);
        printf("%d ", root->key);
        inOrder_display(root->right);
    }
}
node *get_successor(node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
node *get_predecer(node *curr)
{
    curr = curr->left;
    while (curr != NULL && curr->right != NULL)
    {
        curr = curr->right;
    }
    return curr;
}
node *del_node(node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    else if (root->key < key)
    {
        root->right = del_node(root->right, key);
    }
    else if (root->key > key)
    {
        root->left = del_node(root->left, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *succ = get_successor(root);
        root->key = succ->key;
        root->right = del_node(root->right, succ->key);
    }
    return root;
}
void main()
{
    node *root = NULL;
    int choice = 1;
    int v;
    // printf("Enter 0 to exit.\n");
    //  while (choice)
    //  {
    //      printf("Enter value: ");
    //      scanf("%d", &v);
    //      root = insert_node(root, v);
    //      scanf("%d", &choice);
    //  }
    root = insert_node(root, 45);
    root = insert_node(root, 50);
    root = insert_node(root, 55);
    root = insert_node(root, 54);
    root = insert_node(root, 60);
    root = insert_node(root, 30);
    root = insert_node(root, 35);
    root = insert_node(root, 32);
    root = insert_node(root, 20);

    inOrder_display(root);
    root = del_node(root, 55);
    printf("\nAfter Deletion: ");
    inOrder_display(root);
    root = del_node(root, 20);
    printf("\nAfter Deletion: ");
    inOrder_display(root);
}