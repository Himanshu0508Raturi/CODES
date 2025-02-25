/*I. Design an algorithm to implement binary trees. Write a program which implements following
basic operations on binary tree:
a) CreateTree() - creates a root node
b) InsertNode() - insert a node in tree
c) DeleteNode() - delete a node from tree
d) FindHeight() - find the height of tree
e) FindSize() - find number of nodes in tree
f) Search() - search whether given specific element present in tree or not*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *createTree(int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->key = v;
    temp->left = temp->right = NULL;
    return temp;
}
node *Build_tree(int arr[], int index, int n)
{
    if (index >= n || arr[index] == -1)
    {
        return NULL;
    }
    node *root = createTree(arr[index]);
    root->left = Build_tree(arr, 2 * index + 1, n);
    root->right = Build_tree(arr, 2 * index + 2, n);
    return root;
}
void insertNode(node **root, int data)
{
    node *newNode = createTree(data);
    if (*root == NULL)
    {
        *root = newNode;
        return;
    }
    node *queue[20];
    int front = 0, rear = 0;
    queue[rear] = *root;
    rear++;

    while (front < rear)
    {
        node *current = queue[front++];
        if (current->left == NULL)
        {
            current->left = newNode;
            return;
        }
        else
        {
            queue[rear++] = current->left;
        }
        if (current->right == NULL)
        {
            current->right = newNode;
            return;
        }
        else
        {
            queue[rear++] = current->right;
        }
    }
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
void DeleteNode(node **root, int target)
{
    node *q[20];
    int front = 0, rear = 0;
    node *targetnode = NULL, *lastNode = NULL;
    q[rear++] = *root;
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
        *root = deleteDeepest(*root, lastNode);
    }
    else
    {
        printf("Node with %d value not found\n", target);
    }
}
int FindHeight(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int left_h = FindHeight(root->left);
    int right_h = FindHeight(root->right);
    return ((left_h > right_h) ? left_h : right_h) + 1;
}
int search(node *root, int val)
{
    if (root != NULL)
    {
        if (root->key == val)
        {
            return 1;
        }
        return search(root->left, val);
        return search(root->right, val);
    }
    return 0;
}
int Findsize(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + Findsize(root->left) + Findsize(root->right);
}
void levelorder(node *root)
{
    node *q[20];
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
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    node *root = Build_tree(arr, 0, n);
    int choice = 1, v;
    printf("Press:\n1.to insert a anode.\n2.to delete a node.\n3.to exit\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            insertNode(&root, v);
            break;
        }
        case 2:
        {
            printf("Enter a node to delete: ");
            scanf("%d", &v);
            DeleteNode(&root, v);
            break;
        }
        }
    } while (choice != 3);
    printf("Tree: ");
    levelorder(root);
    printf("Height = %d\n", FindHeight(root));
    printf("Size = %d\n", Findsize(root));
}
