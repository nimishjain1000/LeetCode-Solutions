/*
Insert in a BST
*/

TreeNode* insertBST(TreeNode* root, int val)
{
    if(root == NULL)
    { 
        TreeNode* x = new TreeNode(val);
        return x;
    }
    
    if(root->val > val) 
    {
        root->left = insertBST(root->left, val);
    }
    else root-> right = insertBST(root->right, val);
    
    return root;
    
}
