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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
              if(root == NULL) return res;
        
        stack<TreeNode*> st;
        TreeNode* temp = NULL;
        TreeNode* t = root;
        while(t != NULL || st.size()!= 0)
        {
            
            while(t!=NULL){
                st.emplace(t);
                t = t->left;
            }
            t = st.top();
            
            if(t->right == NULL || t->right==temp)
            {
                st.pop();
                temp = t;
                res.push_back(t->val);
                t = NULL;
            }
            else if(t->right != temp){
                t = t->right;
            }
                     
        }
        return res;

    }
};
