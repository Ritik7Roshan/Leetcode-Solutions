class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        vector<int> maxLeft(nums.size()),minRight(nums.size());
        maxLeft[0]=nums[0];
        minRight[nums.size()-1]=nums.back();
        
        for(int i=1; i<nums.size(); i++)
        {
            maxLeft[i]=max(nums[i],maxLeft[i-1]);
        }
        
        for(int i=nums.size()-2; i>=0; i--)// strt frm nums.size()-2
        {
            minRight[i]=min(nums[i],minRight[i+1]);// last second compare with last wala therefore i+1
        }
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(maxLeft[i]<=minRight[i+1])
                return i+1;
        }
         return -1;
    }
};