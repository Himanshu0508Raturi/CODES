#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node *create(int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->key = v;
    new_node->left = new_node->right = NULL;
    return new_node;
}
node *insert(node *root, int k)
{
    if (root == NULL)
        return create(k);
    if (root->key < k)
        root->right = insert(root->right, k);
    if (root->key > k)
        root->left = insert(root->left, k);
    return root;
}
void count_leaf(node *root, int *c)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
        {
            (*c)++;
        }
        count_leaf(root->left, c);
        count_leaf(root->right, c);
    }
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
void main()
{
    node *root = NULL;
    int c = 0;
    char choice;
    do
    {
        int v;
        printf("Enter a value: ");
        scanf("%d", &v);
        root = insert(root, v);
        printf("Enter y/n");
        getchar();
        scanf("%c", &choice);
    } while (choice != 'n');
    count_leaf(root, &c);
    printf("\n%d\n", c);
    inorder(root);
}