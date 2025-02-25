// c function to count total number of nodes left and right of a node.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int key;
    struct node *left, *right;
} node;
node* create(int k)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->key = k;
    temp->left = temp->right = NULL;
    return temp;
}
node *insert(node* root , int k)
{
    if(root == NULL)
    {
        return create(k);
    }
    if(root->key < k)
    {
        root->right = insert(root->right,k);
    }
    if(root->key > k)
    {
        root->left = insert(root->left,k);
    }
    return root;
}
void Inorder(node *root)
{
    if(root != NULL)
    {
        Inorder(root->left);
        printf("%d ",root->key);
        Inorder(root->right);
    }
}
void count_left_right(node *root , int *c)
{
    if(root != NULL)
    {
        count_left_right(root->left,c);
        //printf("%d ",root->key);
        (*c)++;
        count_left_right(root->right,c);
    }
}
void main()
{
    node *root = NULL;
    int c_l=0,c_r =0;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,3);
    root = insert(root,7);
    root = insert(root,20);
    root = insert(root,1);
    root = insert(root,17);
    Inorder(root);
    count_left_right(root->left,&c_l);
    printf("\nLeft Nodes are: ");
    printf("%d\n",c_l);

    count_left_right(root->right,&c_r);
    printf("Right Nodes Are: ");
    printf("%d\n",c_r);
    printf("Total Nodes: %d",c_l + c_r);
}