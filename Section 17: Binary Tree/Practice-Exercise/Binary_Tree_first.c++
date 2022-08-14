#include<bits/stdc++.h>
using namespace std;

class node {
    public : 
              int data;
              node *left;
              node *right;

            //Constructor:
            node(int data)
            {
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
};
//Preorder Traversal:
void preorderTraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    preorderTraversal(root->left);
    cout<<root->data<<" ";
    preorderTraversal(root->right);
}
//Create Binary Tree: first Method
node *createBinaryTree(node *root)
{
    if(root==NULL)
    {
        int data;
        cin>>data;
        node *temp=new node(data);
        if(data!=-1)
        {
           root=temp;
        }
        else{
            return NULL;
        }
    }
    root->left=createBinaryTree(root->left);
    root->right=createBinaryTree(root->right);
    return root;
}

int main(int argc, char const *argv[])
{
    cout<<"Enter the data "<<endl;
    node *root=NULL;
    root=createBinaryTree(root);

    //Print th tree
    preorderTraversal(root);
    return 0;
}
//INput : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1