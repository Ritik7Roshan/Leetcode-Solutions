// Traversing once 
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
       int globalMax=nums[0];
        int localMax=nums[0];
        int pi=0;
        for(int i=1; i<nums.size(); i++)
        {
            globalMax=max(globalMax,nums[i]);
            if(localMax>nums[i])// means that num could also be included in left subarray therefore increase the partition
            {
                pi=i;
                localMax=globalMax;
            }
        }
        return pi+1;
    }
};
//TC O(N)
//SC O(1)