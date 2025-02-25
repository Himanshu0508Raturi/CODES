// insertion using array and insertion og a particular node.
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
    if (ind > n || arr[ind] == -1)
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
node *deleteDeepest(node *root, node *lastnode)
{
    if (root == NULL || root == lastnode)
    {
        return NULL;
    }
    node *q[20];
    int front = 0, rear = 0;
    q[rear++] = root;
    while (front < rear)
    {
        node *curr = q[front++];
        if (curr->left)
        {
            if (curr->left == lastnode)
            {
                free(curr->left);
                curr->left = NULL;
                return root;
            }
            q[rear++] = curr->left;
        }
        if (curr->right)
        {
            if (curr->right == lastnode)
            {
                free(curr->right);
                curr->right = NULL;
                return root;
            }
            q[rear++] = curr->right;
        }
    }
    return root;
}
node *delnode(node *root, int target)
{
    node *q[20];
    int front = 0, rear = 0;
    node *targetnode = NULL, *lastNode = NULL;
    q[rear++] = root;
    while (front < rear)
    {
        node *curr = q[front++];
        if (curr->key == target)
        {
            targetnode = curr;
        }
        if (curr->left)
        {
            q[rear++] = curr->left;
        }
        if (curr->right)
        {
            q[rear++] = curr->right;
        }
        lastNode = curr;
    }
    if (targetnode)
    {
        targetnode->key = lastNode->key;
        root = deleteDeepest(root, lastNode);
    }
    else
    {
        printf("Node with %d value not found\n", target);
    }
    return root;
}
void main()
{
    int arr[] = {5, 4, 9, 20, 21, 6, 8};
    node *root = buildTree(arr, 0, 6);
    insertNode(&root, 15);
    print_level_order(root);
    //delnode(root , 22);
    print_level_order(root);
}