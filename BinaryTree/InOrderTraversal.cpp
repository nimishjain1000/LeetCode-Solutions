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
    vector<int> inorderTraversal(TreeNode* root) {
   vector<int> res;
        
        if(root == NULL) return res;
        
        stack<TreeNode*> st;
        TreeNode* t = root;
        while(t != NULL || st.size()!= 0)
        {
            
            while(t!=NULL){
                st.emplace(t);
                t = t->left;
            }
            t = st.top();
            res.push_back(t->val);
            st.pop();
            
            t = t->right;
            
        }
        return res;
    }
};
