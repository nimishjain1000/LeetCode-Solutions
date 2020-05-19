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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> out;
        if(root == NULL) return out;
        
        queue<TreeNode*> q;
        q.emplace(root);
        
        while(q.size()!=0)
        {
            
            vector<int> level;
            int size_ = q.size();
            
            for(int i = 0; i<size_;i++){
                
                TreeNode* f = q.front();
                q.pop();
                level.push_back(f->val);

                if(f->left!=NULL){
                    q.emplace(f->left);
                }

                if(f->right!=NULL){
                    q.emplace(f->right);
                }
                
            }
            out.push_back(level);
            
        }
        return out;
        
    }
};
