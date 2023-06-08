class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr ={};
        backtrack(curr,ans,nums);
        return ans;
    }
    // here we are doing is DFS traversal of a tree and children are all those numbers that havent been used yet 
    
void backtrack(vector<int>& curr,vector<vector<int>>&ans, vector<int>& nums)
{
        if(curr.size()==nums.size())
        {
            ans.push_back(curr);
            return;
        }
            for(int it: nums)
            {
                if(find(curr.begin(),curr.end(),it)==curr.end())
                {
                    curr.push_back(it);
                    backtrack(curr,ans,nums);
                    curr.pop_back();
                }
            }
    }
};
// TC O(n.n!) n! for generating all permutations and n for 
// copying curr in answer 

// Space complexity: O(n)

// We don't count the answer as part of the space complexity. The extra space we use here is for curr and the recursion call stack. The depth of the call stack is equal to the length of curr, which is limited to 
// n.