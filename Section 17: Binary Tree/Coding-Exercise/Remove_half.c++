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
//Inorder Remove:
void inOrderRemove(Node *root ,  vector<int> &vctr)
{
    if (root == NULL)
    {
        return;
    }
    inOrderRemove(root->left , vctr);
    if((root->left !=NULL and root->right!=NULL ) or (root->left==NULL and root->right==NULL))
    {
        vctr.push_back(root->key);
    }
    inOrderRemove(root->right , vctr);
}
vector<int> removeHalfNodes(Node *root )
{
   //add code here.
   vector<int> vctr;
   inOrderRemove(root , vctr);
   
//    //Print:
//    for(auto x: vctr)
//    {
//        cout<<x<<" ";
//    }
//    cout<<endl;
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
    //Declare of vector:
    vector<int> vctr;
    // Inorder Traversal:
    inOrderTraversal(root);
    cout << endl;
    //Removal of half node:
    vctr = removeHalfNodes(root); 

    return 0;
}
