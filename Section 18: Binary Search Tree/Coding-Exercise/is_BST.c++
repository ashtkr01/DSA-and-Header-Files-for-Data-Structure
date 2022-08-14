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
//hELPER fUNCTION:
bool isBSTHelper(Node *root , int left_limit , int right_limit)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->key < left_limit || root->key > right_limit)
    {
        return false;
    }

    return isBSTHelper(root->left , left_limit , root->key) && 
            isBSTHelper(root->right , root->key , right_limit);
}

bool isBST(Node * root){
    //complete this method
      //hELPER fUNCTION:
      return isBSTHelper(root , INT_MIN , INT_MAX);
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
    //Check BST:
    cout<<isBST(root)<<endl;
    return 0;
}



