#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    //Constructore:
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

};
/*********************************Build Binary Tree**************************************/
Node *build()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    root->left=build();
    root->right = build();
    //Return root 
    root;
}
/*************************Inorder Traversal*****************************/
void inOrderTraversal(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
/**************************Height of a Tree********************************/
int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int a=height(root->left);
    int b = height(root->right);
    return 1+ max(a,b);
}
/*****************************Diameter of tree**************************/
int diameter(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int d1=height(root->left) + height(root->right);
    int d2= diameter(root->left);
    int d3= diameter(root->right);

    return max(d1,max(d2,d3));
}
int main(int argc, char const *argv[])
{
    Node *root = build();
    //Diameter of a tree:
    cout<<"Diameter :"<<diameter(root)<<endl;
    //Inorder Traversal
    inOrderTraversal(root);
    return 0;
}
