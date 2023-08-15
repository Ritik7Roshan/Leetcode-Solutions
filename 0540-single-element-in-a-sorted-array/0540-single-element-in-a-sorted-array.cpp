class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            int num=(mid%2==0)?mid+1:mid-1;
            if(nums[mid]==nums[num]) l=mid+1;
            else r=mid;
        }
        return nums[r];
    }
    
};