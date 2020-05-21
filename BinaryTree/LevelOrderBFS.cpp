class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
 
        vector<vector<int>> nums;
 
        if (root == NULL)
            return nums;
 
        TreeNode* node;
        queue<pair<TreeNode*, int>> q;
        int dist = 0;
 
        q.push({root, dist});
 
        while(!q.empty())
        {
            vector<int> vect;
            auto pair = q.front();
            node = pair.first;
 
            while(node != NULL && pair.second == dist)
            {
                q.pop();
                vect.push_back(node->val);
 
                if (node->left)
                    q.push({node->left, dist+1});
                if (node->right)
                    q.push({node->right, dist+1});
 
                pair = q.front();
                node = pair.first;
            }
            dist++;
            nums.push_back(vect);
        }
 
        return nums;
    }
};
