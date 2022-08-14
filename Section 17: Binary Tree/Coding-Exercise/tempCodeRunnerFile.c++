   // Your code here
       if(root==NULL)
       {
           return 1;
       } 
       int a=minDepth(root->left);
       int b= minDepth(root->right);
       return 1+ min(a,b);