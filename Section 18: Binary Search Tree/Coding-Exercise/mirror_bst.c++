#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
   int key;
   Node *left;
   Node *right;

   Node(int key){
       this->key = key;
       left = right  = NULL;
   }
};

Node* mirrorBST(Node * root){
    //complete this method
    if(root==NULL)
    {
        return NULL;
    }
    Node *temp = root->left;
    //Modifie left subtree:
    root->left=mirrorBST(root->right);
    root->right = mirrorBST(temp);

    return root;
    
    
}
//Build  a BST:
Node *build(Node *root , int data)
{
    if(root == NULL)
    {
      Node *temp = new Node(data);
      return temp;
    }
    if(data < root->key)
    {
        root->left = build(root->left ,data);
    }
    else if(data > root->key)
    {
        root->right = build(root->right ,data );
    }
    return root;
}
//Build a Binary Tree:
Node *build()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Node *root = new Node(data);
     root->left = build();
     root->right = build();
     return root;
}
//Inorder Traversal:
void inOrderTraversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->key<<" ";
    inOrderTraversal(root->right);
}

//Main Function:
int main(int argc, char const *argv[])
{
   Node *root = build();
   //Inorder Traversal:
   inOrderTraversal(root);
   cout<<endl;
   //Mirror:
   root = mirrorBST(root);
   //Inorder Traversal:
   inOrderTraversal(root);
    return 0;
}
