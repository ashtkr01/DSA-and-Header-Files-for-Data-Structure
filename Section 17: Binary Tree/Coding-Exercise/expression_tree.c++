#include <bits/stdc++.h>
using namespace std;
 
class Node
{
public:
    string key;
    Node *left, *right;
    // Constructor:
    Node(string data)
    {
        key = data;
        left = NULL;
        right = NULL;
    }
};

//isInteger function:
bool isInteger(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
        {
            return false;
        }
    }
    return true;
}
//Function
int evalTree(Node* root){
    if(isInteger(root->key))
    {
      int value = stoi(root->key);
      return value;
    }
    int a = evalTree(root->left);
    string b = root->key;
    int c= evalTree(root->right);
    
    if(b=="+")
    {
        return a + c;
    }
    if(b=="/")
    {
        return a / c;
    }
    if(b=="-")
    {
        return a - c;
    }
    if(b=="*")
    {
        return a * c;
    }
}


// Build tree
Node *build()
{
    string data;
    cin >> data;
    if (data == "-1")
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
  
   cout<<"Result :"<<evalTree(root)<<endl;
    return 0;
}
