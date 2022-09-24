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
    vector<vector<int>> ans;
    public:
    void dfs(TreeNode* node,vector<int>&path,int remainingSum)
    {
        if(!node) return;
        path.push_back(node->val);
        if(!node->left && !node->right && remainingSum-node->val==0)
            ans.push_back(path);
        dfs(node->left,path,remainingSum-node->val);
        dfs(node->right,path,remainingSum-node->val);
        
        path.pop_back();
    }
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<int> path;
        dfs(root,path,targetSum);
        return ans;
    }
};