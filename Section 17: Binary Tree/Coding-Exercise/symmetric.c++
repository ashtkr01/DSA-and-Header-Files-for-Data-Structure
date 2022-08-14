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
// Inorder Traversal Vector
void inOrderTraversalVector(Node *root, vector<int> &vctr)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversalVector(root->left , vctr);
    vctr.push_back(root->key);
    inOrderTraversalVector(root->right , vctr);
}
// Main function
bool isSymmetric(Node *root)
{
    // your code goes here
    // Vector which store the inorder traversaal:
    vector<int> vctr;
    // Function to store elements ccording to inorder traversal:
    inOrderTraversalVector(root, vctr);
    
    //Print vector:
    // for(int i=0;i<vctr.size();i++)
    // {
    //     cout<<vctr[i]<<" ";
    // }
    // cout<<endl;
    // T check
    if (vctr.size() % 2 == 0)
    {
        return false;
    }
    int size = vctr.size()-1;
    int i=0;
    int j=size;

    while(i<j)
    {
        if(vctr[i] != vctr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
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

    // isSymmetric:
    cout << isSymmetric(root) << endl;
    return 0;
}
