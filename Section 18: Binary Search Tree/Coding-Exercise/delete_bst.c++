#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int data;
     node*left;
     node*right;
     node(int d){
       data=d;
       left=NULL;
       right=NULL;
     }
 };
 
 //Function to find Inorder Successor:
 int inOrderPredeccessor(node *root)
 {
     node *temp = root;
     while(temp->right!=NULL)
     {
         temp=temp->right;
     }
    return temp->data;
 }
 //Function:
 node* deleteNode(node* root, int k)
{
    if(root == NULL)
    {
        // cout<<"Deletion can't be possible "<<endl;
        return NULL;
    }

    if(root->data == k)
    {
        if(root->left != NULL and root->right != NULL)
        {
            int inorder_succ = inOrderPredeccessor(root->left );
            root->data = inorder_succ;
            root->left = deleteNode(root->left , inorder_succ);
        }
        else if(root->left != NULL)
        {
           return root->left;
        }
        else if(root->right !=NULL)
        {
            return root->right;
        }
        else{
            return NULL;
        }
    }

    else if(root->data < k)
    {
        root->right = deleteNode(root->right , k);
    }
    else if(root->data > k)
    {
        root->left = deleteNode(root->left , k);

    }
    return root;
}
