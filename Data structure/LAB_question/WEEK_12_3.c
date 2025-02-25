#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
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
int size(node *root)
{
    if (root)
    {
        return 1 + size(root->left) + size(root->right);
    }
    return 0;
}
void levelnodes(node *root)
{
    if (root == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    int n = size(root);
    node **queue = (node **)malloc(sizeof(node *) * n);
    int front = 0, rear = 0;
    queue[rear++] = root;
    int maxnodes = 0, maxlevel = 0, currentlevel = 0;
    int firstlevelsize = -1;
    printf("BST: ");
    while (front < rear)
    {
        int levelsize = rear - front;

        if (currentlevel == 0)
        {
            firstlevelsize = levelsize;
        }
        else if (levelsize != firstlevelsize)
        {
            firstlevelsize = -1;
        }
        for (int i = 0; i < levelsize; i++)
        {
            node *current = queue[front++];
            printf("%d ", current->data);
            if (current->left)
            {
                queue[rear++] = current->left;
            }
            if (current->right)
            {
                queue[rear++] = current->right;
            }
        }
        if (levelsize > maxnodes)
        {
            maxnodes = levelsize;
            maxlevel = currentlevel + 1;
        }
        currentlevel++;
    }
    printf("\n");
    if (firstlevelsize != -1)
    {
        printf("Equal no. Of nodes on all levels\n");
    }
    else
    {
        printf("Level %d has %d nodes\n", maxlevel, maxnodes);
    }
}
int main()
{
    int n, *arr;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    node *root = NULL;
    root = buildtree(arr, 0, n);
    levelnodes(root);
    return 0;
}
