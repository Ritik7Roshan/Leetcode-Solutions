class Solution {
public:
    void sortColors(vector<int>& nums) {
        int min_indx;
        for(int i=0; i<nums.size(); i++)
        {
            min_indx=i;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j]<nums[min_indx])
                {
                    min_indx=j;
                }
            }
        int temp=nums[min_indx];
        nums[min_indx]=nums[i];
        nums[i]=temp;
        }
    }
};