/*II. Write an algorithm and a program to implement following types of traversing in the tree:
a) inorder() - (1) traverse left subtree, (2) traverse root, (3) traverse right subtree
b) postorder() - (1) traverse root, (2) traverse left subtree, (3) traverse right subtree
c) preorder() - (1) traverse left subtree, (2) traverse right subtree, (3) traverse root*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *create(int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->key = v;
    temp->left = temp->right = NULL;
    return temp;
}
node *Insert(int arr[], int index, int n)
{
    if (index >= n || arr[index] == -1)
    {
        return NULL;
    }
    node *root = create(arr[index]);
    root->left = Insert(arr, 2 * index + 1, n);
    root->right = Insert(arr, 2 * index + 2, n);
    return root;
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
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
    node *root = Insert(arr, 0, n);
    printf("Inorder: ");
    inorder(root);
    printf("\n");
    printf("postorder: ");
    postorder(root);
    printf("\n");
    printf("preorder: ");
    preorder(root);
    printf("\n");
}