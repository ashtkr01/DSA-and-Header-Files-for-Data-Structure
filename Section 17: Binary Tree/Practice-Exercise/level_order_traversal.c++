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
//LevelOrder Traversal:
void levelOrderTraversal(node *root)
{
    cout<<"Hi"<<endl;
    queue<node *> que;
    que.push(root);
    que.push(NULL);

    while(que.empty() == 0)
    {
        node *head=que.front();
        if(head==NULL )
        {
            que.pop();
            if(que.empty()==1)
            {
                return;
            }
            cout<<endl;
            que.push(NULL);
            head=que.front();
        }
        cout<<head->data<<" ";
        que.pop();
        if(head->left!=NULL)
        {
        que.push(head->left);
        }
        if(head->right!=NULL)
        {
        que.push(head->right);
        }
    }
    //Level Order Traversal BY Prateek Bhaiya:
    void levelOrderTraversalByPrateek(node *root)
{
    queue<node *> que;
    que.push(root);
    que.push(NULL);
    while(!que.empty())
    {
        node *temp=que.front();
        if(temp==NULL )
        {
            cout<<endl;
            que.pop();
            //Insert a ne NULL for next level:
            if(!que.empty())
            {
                que.push(NULL);
            }
        }
        else{
            que.pop();
            cout<<temp->data<<" ";
             if(temp->left!=NULL)
        {
        que.push(temp->left);
        }
        if(temp->right!=NULL)
        {
        que.push(temp->right);
        }
        }  
    }
    return;
  
}

int main(int argc, char const *argv[])
{
    node *root=build();
    //Display th tree
    //Level Order Traversal:
    levelOrderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    return 0;
}
//INput : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
