//using two traversal
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        
        vector<int> minRight(nums.size());
        minRight[nums.size()-1]=nums.back();
        
        int maxLeft=INT_MIN;
        for(int i=nums.size()-2; i>=0; i--)// strt frm nums.size()-2
        {
            minRight[i]=min(nums[i],minRight[i+1]);
            // last second compare with last wala therefore i+1
        }
        
        for(int i=0; i<nums.size()-1; i++)
        {
            maxLeft=max(maxLeft,nums[i]);
            if(maxLeft<=minRight[i+1])
                return i+1;
        }
         return -1;
    }
};
//TC O(N)
//SC O(N)