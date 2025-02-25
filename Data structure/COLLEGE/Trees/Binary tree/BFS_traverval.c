#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to create a binary tree from an array
struct Node *createTreeFromArray(int arr[], int index, int n)
{
    if (index >= n || arr[index] == -1)
        return NULL; // -1 indicates a NULL node

    struct Node *root = createNode(arr[index]);
    root->left = createTreeFromArray(arr, 2 * index + 1, n);
    root->right = createTreeFromArray(arr, 2 * index + 2, n);

    return root;
}

// Function to find the height of the tree
int FindHeight(struct Node *node)
{
    if (node == NULL)
        return -1; // height of an empty tree is -1
    int leftHeight = FindHeight(node->left);
    int rightHeight = FindHeight(node->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Function to find the size (number of nodes) of the tree
int FindSize(struct Node *node)
{
    if (node == NULL)
        return 0;
    return FindSize(node->left) + FindSize(node->right) + 1;
}

// Function to search for a specific element in the tree
int Search(struct Node *root, int key)
{
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;

    int leftSearch = Search(root->left, key);
    if (leftSearch)
        return 1;

    int rightSearch = Search(root->right, key);
    return rightSearch;
}

// Function to print the tree in level-order (for testing purposes)
void printLevelOrder(struct Node *root)
{
    if (root == NULL)
        return;

    struct Node *queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear)
    {
        struct Node *temp = queue[front++];
        printf("%d ", temp->data);

        if (temp->left != NULL)
            queue[rear++] = temp->left;
        if (temp->right != NULL)
            queue[rear++] = temp->right;
    }
}

int main()
{
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array (use -1 for NULL nodes):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Create the tree from the array
    struct Node *root = createTreeFromArray(arr, 0, n);

    printf("Level-order traversal of the tree: ");
    printLevelOrder(root);

    printf("\nHeight of the tree: %d\n", FindHeight(root));
    printf("Size of the tree: %d\n", FindSize(root));

    int key;
    printf("Enter a value to search in the tree: ");
    scanf("%d", &key);
    printf("Searching for %d: %s\n", key, Search(root, key) ? "Found" : "Not Found");

    return 0;
}