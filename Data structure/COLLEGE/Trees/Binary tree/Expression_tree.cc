// program to make a expression tree from a postfix expression.
#include <bits/stdc++.h>
using namespace std;
typedef struct tree
{
    char val;
    struct tree *left, *right;
} tree;
tree *create_node(char ch)
{
    tree *new_node = (tree *)malloc(sizeof(tree));
    new_node->val = ch;
    new_node->left = new_node->right = NULL;
    return new_node;
}
void inorder(tree *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}
int main()
{
    stack<tree *> st;
    string exp = "ab*c/ef/g*+k+xy*-";
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] >= 'a' && exp[i] <= 'z')
        {
            tree *temp = create_node(exp[i]);
            st.push(temp);
        }
        else
        {
            tree *b = st.top();
            st.pop();
            tree *a = st.top();
            st.pop();
            tree *root = create_node(exp[i]);
            root->left = a;
            root->right = b;
            st.push(root);
        }
    }
    tree *root = st.top();
    inorder(root);

    return 0;
}