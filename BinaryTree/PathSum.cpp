/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
// following Inorder traversal to find the sum till the leaf.
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
       if(root == NULL) return false;
        bool res = false;
            
        sum = sum - root->val;        
         if(sum == 0 ){
            if(root->left==NULL && root->right == NULL)
                return true;
            }
 
        if(root->left)
        {
            res = res || hasPathSum(root->left, sum);
        }
            if(root->right)
        {
            res = res || hasPathSum(root->right, sum);
        }
        
        return res; 
    }
};
