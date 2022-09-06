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

//public:
//     TreeNode* pruneTree(TreeNode* root) 
//     {
//         return containsOne(root) ? root:NULL;
//     }
    
//     public:
//     bool containsOne(TreeNode* node)
//     {
//         if(node==NULL) return false;
        
//         bool leftContainsOne= containsOne(node->left);
        
//         bool rightContainsOne= containsOne(node->right);
        
//         if(!leftContainsOne) node->left=NULL;
        
//         if(!rightContainsOne) node->right=NULL;
        
//         return node->val ==1 || leftContainsOne || rightContainsOne;
        
//         }


class Solution {
public:
    TreeNode* pruneTree(TreeNode* root){
        if(!root) return NULL;
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        if(! root->left && !root->right && root->val==0) return NULL;
        return root;
    }
};