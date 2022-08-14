#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;
    // Constructor:
};

vector<int> printKthLevel(Node *root, int k)
{
    // your code goes here
    vector<int> vctr;
    queue<Node *> que;
    que.push(root);
    int curr_level = 0;
    que.push(NULL);
    curr_level++;

    while (que.empty() != 1)
    {
        if (que.front() == NULL)
        {
            que.pop();
            if (que.empty() != 1)
            {
                curr_level++;
                que.push(NULL);
            }
        }
        else
        {
            Node *temp = que.front();
            que.pop();

            if (temp->left != NULL)
            {
                que.push(temp->left);
                if (curr_level == k)
                {
                    int data=temp->left->key;
                    vctr.push_back(data);
                }
            }
            if (temp->right != NULL)
            {
                que.push(temp->right);
                if (curr_level == k)
                {
                    int data=temp->right->key;
                    vctr.push_back(data);
                }
            }
        }
    }
    return vctr;
}
// Build Function:
Node *build()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node();
    root->key = data;
    root->left = build();
    root->right = build();
    return root;
}

// Preorder Traversal:
void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->key << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
// Main Function:
int main(int argc, char const *argv[])
{
    vector<int> vctr;
    Node *root = build();
    // Display th tree
    preorderTraversal(root);
    vctr=printKthLevel(root,2);
    // Print the vector:
    for (auto x : vctr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}