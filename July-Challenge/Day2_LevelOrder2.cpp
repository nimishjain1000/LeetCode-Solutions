/*

Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]

Do first normal level order
->Simply reverse the result list
or ->
As, you can see we have to return the result list in reverse way so we can use a famous data structure I think you already guessed Stack. We will use a stack and 
add level every time into the stack and after we processed all level pop levels from the stack and add into the result list.

*/

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
        reverse(out.begin(), out.end());
        
        return out;
        
    }
};
