class Solution {
public:
    int store(vector<int>&nums,int ind)
    {
        if(ind==nums[ind])
            return ind;
        int nxt=nums[ind];
        nums[ind]=ind;
        return store(nums,nxt);
    }
    int findDuplicate(vector<int>& nums) {
       return store(nums,0);
    }
};
//TC O(n)
//SC O(n) n is size of nums