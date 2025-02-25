#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->key = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
node *buildtree(int arr[], int index, int n)
{
    if (index >= n || arr[index] == -1)
        return NULL;
    node *newnode = createnode(arr[index]);
    newnode->left = buildtree(arr, 2 * index + 1, n);
    newnode->right = buildtree(arr, 2 * index + 2, n);
    return newnode;
}
node *buildbalancedtree(int arr[], int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    node *root = createnode(arr[mid]);
    root->left = buildbalancedtree(arr, start, mid - 1);
    root->right = buildbalancedtree(arr, mid + 1, end);
}
int size(node *root)
{
    if (root)
    {
        return 1 + size(root->left) + size(root->right);
    }
    return 0;
}
void printlevelorder(node *root)
{
    int count = size(root);
    if (root == NULL)
    {
        printf("Tree is empty.\n");
        return;
    }
    node **queue = (node **)malloc(sizeof(node *) * count);
    int front = -1, rear = -1;
    queue[++rear] = root;
    while (front != rear)
    {
        node *current = queue[++front];
        printf("%d ", current->key);
        if (current->left != NULL)
            queue[++rear] = current->left;
        if (current->right != NULL)
            queue[++rear] = current->right;
    }
    printf("\n");
    free(queue);
}
int findmin(node *root)
{
    while (root->left != NULL)
        root = root->left;
    return root->key;
}
int findmax(node *root)
{
    while (root->right != NULL)
        root = root->right;
    return root->key;
}
void inorder(node *root, int arr[], int *index)
{
    if (root)
    {
        inorder(root->left, arr, index);
        arr[(*index)++] = root->key;
        inorder(root->right, arr, index);
    }
    return;
}
int main()
{
    int n, *arr, index = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    root = buildtree(arr, 0, n);
    printf("Inital Bst:\n");
    printlevelorder(root);
    node *balanceroot = NULL;
    inorder(root, arr, &index);
    balanceroot = buildbalancedtree(arr, 0, index - 1);
    printf("Balance Bst:\n");
    printlevelorder(balanceroot);
    printf("Minimum element in the balanced BST: %d\n", findmin(balanceroot));
    printf("Maximum element in the balanced BST: %d\n", findmax(balanceroot));
    free(arr);
    return 0;
}