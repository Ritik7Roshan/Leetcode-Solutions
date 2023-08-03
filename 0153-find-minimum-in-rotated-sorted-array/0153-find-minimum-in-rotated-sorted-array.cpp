class Solution {
public:
    int findMin(vector<int>& nums) {
        // Linear time algorithm
        int n=nums.size();
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]>nums[i+1])
            {
                return nums[i+1];
            }
        }
        
        return nums[0];
        
    }
};
// O(N)
