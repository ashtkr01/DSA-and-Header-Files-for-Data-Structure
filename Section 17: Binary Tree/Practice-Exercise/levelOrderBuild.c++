#include<bits/stdc++.h>
using namespace std;
//Class:
class node {
    public:
            int data;
            node *left;
            node *right;
            //Constructor:
            node(int data)
            {
                this->data=data;
                left=right=NULL;
            }
};

node *buildBinaryTreeViaLevelOrder(vector<int> vctr )
{
    queue<node*> que;
    node* root;
    if(vctr[0]!=-1)
    {
    root=new node(vctr[0]);
    que.push(root);
    }
    int idx=1;
    while(que.empty()!=1)
    {
      node * temp=que.front();
      que.pop();
      /*These condition ensure to insert the child of current node in queue and ensure to connect as left child and right child of the current node */
      if(vctr[idx]!=-1)
      {
         node *temp1=new node(vctr[idx]);
         que.push(temp1);
         temp->left=temp1;
      }
      else if(vctr[idx]==-1)
      {
          temp->left=NULL;
      }
      idx++;
       if(vctr[idx]!=-1)
      {
         node *temp2=new node(vctr[idx]);
         que.push(temp2);
         temp->right=temp2;
      }
      else if(vctr[idx]==-1)
      {
          temp->right=NULL;
      }
      /****************************************************************/
      idx++;
    }
    return root;
}
//Preorder Traversal:
void preOrderTraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> vctr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        vctr.push_back(ele);
    }
    node* root= buildBinaryTreeViaLevelOrder(vctr);
    //Preorder traversal:
    preOrderTraversal(root);
    return 0;
}
