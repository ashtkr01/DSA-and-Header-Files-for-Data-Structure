#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
           int data;
           node *left;
           node *right;

    //Constructor:
    node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }       
};

//Height of the tree
int heightOfTree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int a = heightOfTree(root->left);
    int b= heightOfTree(root->right);
    return 1+max(a,b);
}
//Build the BInary Tree:
//Preorder Built of the tree root, Left tree and Right Tree:
node *build()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node *root=new node(data);
    root->left=build();
    root->right=build();
    return root;
}
//Preorder Traversal:
void preorderTraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main(int argc, char const *argv[])
{
    node *root=build();
    //Display th tree
    preorderTraversal(root);
    cout<<"Height of the Binary Tree "<<heightOfTree(root)<<endl;
    return 0;
}
//INput : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
