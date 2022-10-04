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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        
        //if we reached here means root is not NULL so we include its value in our path and thus decrease the targetSum 
        targetSum=targetSum-(root->val);
        
        // If current node is leaf and its value is equal to sum we have found the path 
        if(targetSum==0 && root->left==NULL && root->right==NULL)
            return true;
        
        // recursively call to traverse left and right sub tree and return true if any part of them returns true
        return hasPathSum(root->left, targetSum)||hasPathSum(root->right, targetSum);
    }
};