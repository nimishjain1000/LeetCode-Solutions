/*
Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

Calling next() will return the next smallest number in the BST.


*/

// Method 1
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
class BSTIterator {
    vector<int> treeElements;
    int index;
public:
    
    void fillVector(TreeNode* root){
        
        if(root == NULL) return;
        
        fillVector(root->left);
        treeElements.push_back(root->val);
        fillVector(root->right);
    }
    BSTIterator(TreeNode* root) {
        this->index = -1;
        
        // put all elements of tree in the vector
        
        fillVector(root);
        
    }
    
    /** @return the next smallest number */
    int next() {
        
        return treeElements[++index];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(index+1 < treeElements.size()) return true; 
        else return false;
    }
};

 
