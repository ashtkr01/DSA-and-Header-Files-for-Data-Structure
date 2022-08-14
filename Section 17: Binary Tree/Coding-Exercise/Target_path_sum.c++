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
// Helper Function:
void helperPathSum(Node *root, int targetSum, int count, vector<int> v, vector<vector<int>> &vctr, int &i)
{

    if (count > targetSum)
    {
        return;
    }
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->key);
    if ((root->left == NULL) and (root->right == NULL) and (count + root->key == targetSum))
    {
        vctr.push_back(v);
        i++;
        return;
    }
    helperPathSum(root->left, targetSum, (count + (root->key)), v, vctr, i);
    v.pop_back();
    v.push_back(root->key);
    helperPathSum(root->right, targetSum, (count + (root->key)), v, vctr, i);
    v.pop_back();
}
// PathSum:
vector<vector<int>> pathSum(Node *root, int targetSum)
{
    // your code goes here
    vector<vector<int>> vctr;
    int count = 0;
    vector<int> v;
    int i = 0;

    helperPathSum(root, targetSum, count, v, vctr, i);
    return vctr;
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
    int target;
    cin >> target;
    vector<vector<int>> vctr;
    vctr = pathSum(root, target);

    // Print vector
    for (int i = 0; i < vctr.size(); i++)
    {
        for (int j = 0;  j < vctr[i].size(); j++)
        {
            cout << vctr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
