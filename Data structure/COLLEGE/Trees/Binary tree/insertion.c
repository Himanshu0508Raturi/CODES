// insertion using array and insertion on a particular node.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *createNode(int v)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->key = v;
    newNode->left = newNode->right = NULL;
    return newNode;
}
node *buildTree(int arr[], int ind, int n)
{
    if (ind >= n || arr[ind] == -1)
        return NULL;
    node *newnode = createNode(arr[ind]);
    newnode->left = buildTree(arr, 2 * ind + 1, n);
    newnode->right = buildTree(arr, 2 * ind + 2, n);
    return newnode;
}
void insertNode(node **root, int v)
{
    node *newNode = createNode(v);
    if ((*root) == NULL)
    {
        (*root) = newNode;
        return;
    }
    node *q[50];
    int front = 0, rear = 0;
    q[rear++] = *root;
    while (front < rear)
    {
        node *curr = q[front++];
        if (curr->left == NULL)
        {
            curr->left = newNode;
            return;
        }
        else
        {
            q[rear++] = curr->left;
        }
        if (curr->right == NULL)
        {
            curr->right = newNode;
            return;
        }
        else
        {
            q[rear++] = curr->right;
        }
    }
}
void print_level_order(node *root)
{
    node *q[50];
    int front = 0, rear = 0;
    q[rear++] = root;
    while (front < rear)
    {
        node *curr = q[front++];
        printf("%d ", curr->key);
        if (curr->left)
            q[rear++] = curr->left;
        if (curr->right)
            q[rear++] = curr->right;
        // print_level_order(curr->left);
        // print_level_order(curr->right);
    }
    printf("\n");
}
void main()
{
    int arr[] = {5, 4, 9, 20, 21, 6, 8};
    node *root = buildTree(arr, 0, 7);
    insertNode(&root, 15);
    print_level_order(root);
}