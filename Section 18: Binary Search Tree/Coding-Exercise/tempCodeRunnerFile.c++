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