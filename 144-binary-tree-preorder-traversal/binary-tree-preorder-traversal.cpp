class Solution {
public:
    vector<int> result;  // Declare result as a member variable
    
    void preorder(TreeNode* root) {
        if (root != nullptr) {
            result.push_back(root->val);  // Add root value to result
            preorder(root->left);         // Recur on the left subtree
            preorder(root->right);        // Recur on the right subtree
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
      
        preorder(root);
        return result;
    }
};