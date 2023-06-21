// Memoization
class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return reached(nums,0,dp);
    }
    bool reached(vector<int>&nums, int idx, vector<int>&dp)
    {
        
        if(idx==nums.size()-1) return true;
        if(nums[idx]==0) return false;
        
        int reach=idx+nums[idx];
        
        if(dp[idx]!=-1) return dp[idx];
        
        for(int jump=idx+1; jump<=reach; jump++)
        {
            if(jump<nums.size() && reached(nums,jump,dp)) 
                return dp[jump]=true;// memoizing;
                
        }
        return dp[idx]=false;//memoizing
    }
};
//tc : O(N* N) -> for each index, I can have at max N jumps, hence O(N* N).
// sc : O(N) + O(N) -> stack space plus dp array size.