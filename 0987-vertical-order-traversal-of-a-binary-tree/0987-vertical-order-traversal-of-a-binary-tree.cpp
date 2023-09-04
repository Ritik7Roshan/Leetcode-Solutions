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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        // map mai (vertical , level, every level elements in sorted order)
        queue<pair<TreeNode*,pair<int,int>>>todo;
        // queue(node, vertical ,level)
        todo.push({root,{0,0}});
        
        // level order traversal
        
        while(!todo.empty())
        {
            auto p=todo.front();
            todo.pop();
            TreeNode* node=p.first; //Node
            int v=p.second.first;// vertical
            int l=p.second.second;
            nodes[v][l].insert(node->val);// aapne data structure mai store krlo 
            if(node->left)
            {
                todo.push({node->left,{v-1,l+1}});
            }
            if(node->right)
            {
             todo.push({node->right,{v+1,l+1}});
            }
            //level order complete
        }
        vector<vector<int>>res;
        for(auto p:nodes)
        {
            vector<int>cols;
            for(auto q:p.second)
            {
                cols.insert(cols.end(),q.second.begin(),q.second.end());// cols.end()..means last position k baad insert krna hai
            }
            res.push_back(cols);
        }
        return res;
    }
};