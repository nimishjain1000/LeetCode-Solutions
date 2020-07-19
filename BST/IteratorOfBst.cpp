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

/////////////////////////method 2////////////////////////////////////////////////////////////////////////////////////////////

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
    stack<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        
        putLeftElements(root);
    }
    
    void putLeftElements(TreeNode* root)
    {
        if(root == NULL) return;
        
        while(root!=NULL)
        {
            st.push(root);
            root = root->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* temp = st.top();
        st.pop();
        if(temp->right != NULL){
            putLeftElements(temp->right);
        }
        return temp->val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(st.size()!= 0) return true;
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
 
