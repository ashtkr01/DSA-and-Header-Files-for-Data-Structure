#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    Node *left, *right;
    // Constructor:
    Node(int data)
    {
        key = data;
        left = NULL;
        right = NULL;
    }
};

int minDepth(Node *root)
{
    // Your code here
    if (root == NULL)
    {
        return 0;
    }
    if (root->left != NULL and root->right != NULL)
    {

        int a = minDepth(root->left);
        int b = minDepth(root->right);
        return 1 + min(a, b);
    }
    else
    {
        int a = minDepth(root->left);
        int b = minDepth(root->right);
        return 1 + max(a, b);
    }
}
// Build tree
Node *build()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = build();
    root->right = build();
    return root;
}
// Inorder Traversal
void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->key << " ";
    inOrderTraversal(root->right);
}
// Main Function:
int main(int argc, char const *argv[])
{
    Node *root = build();
    // Inorder Traversal:
    inOrderTraversal(root);
    cout << endl;
    // Min.depth
    cout << minDepth(root) << endl;

    return 0;
}
