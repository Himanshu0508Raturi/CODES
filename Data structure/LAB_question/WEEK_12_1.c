#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *createnode(int k)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->key = k;
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
node *insert(node *root, int k)
{
    if (root == NULL)
        return createnode(k);
    if (k < root->key)
    {
        root->left = insert(root->left, k);
    }
    else if (k > root->key)
    {
        root->right = insert(root->right, k);
    }
    return root;
}
node *findsuccessor(node *root)
{
    node *temp = root->right;
    while (temp && temp->left)
    {
        temp = temp->left;
    }
    return temp;
}
node *deletenode(node *root, int target, int *i)
{
    if (root->key > target)
    {
        root->left = deletenode(root->left, target, i);
    }
    else if (root->key < target)
    {
        root->right = deletenode(root->right, target, i);
    }
    else
    {
        (*i)++;
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *successor = findsuccessor(root);
        root->key = successor->key;
        root->right = deletenode(root->right, successor->key, i);
    }
    return root;
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
int findHeight(node *root)
{
    if (root)
    {
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
    }
    return 0;
}
int search(node *root, int k)
{
    if (root)
    {
        if (root->key == k)
            return 1;
        if (root->key < k)
        {
            return search(root->right, k);
        }
        else
        {
            return search(root->left, k);
        }
    }
    return 0;
}

int main()
{
    int n, *arr, i = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    root = buildtree(arr, 0, n);
    printf("BST: ");
    printlevelorder(root);
    int choice;
    printf("Press:\n");
    printf("1 to insert a node\n");
    printf("2 to delete a node\n");
    printf("3 to search for a key\n");
    printf("4 to find height of the tree\n");
    printf("5 to find maximum depth of the tree\n");
    printf("6 to print the tree\n");
    printf("7 to exit\n");
    scanf("%d", &choice);
    while (choice != 7)
    {
        int key;
        switch (choice)
        {
        case 1:
            printf("Enter key to insert: ");
            scanf("%d", &key);
            root = insert(root, key);
            break;
        case 2:
            i = 0;
            printf("Enter key to delete: ");
            scanf("%d", &key);
            root = deletenode(root, key, &i);
            if (i == 0)
            {
                printf("Node not found.\n");
            }
            else
            {
                printf("Node %d is deleted successfully.\n");
            }
            break;
        case 3:
            printf("Enter key to search for: ");
            scanf("%d", &key);
            if (search(root, key))
            {
                printf("%d - present\n", key);
            }
            else
            {
                printf("%d - not present\n", key);
            }
            break;
        case 4:
            printf("Height of the tree = %d\n", findHeight(root));
            break;
        case 5:
            printf("Maximum depth of the tree = %d\n", findHeight(root));
            break;
        case 6:
            printf("Tree :\n");
            printlevelorder(root);
            break;
        default:
            printf("Invalid choice\n");
        }
        scanf("%d", &choice);
    }
    free(arr);
    return 0;
}
