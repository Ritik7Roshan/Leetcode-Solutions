class Solution {
public:
    bool subsetSumToK(int n, int k,vector<int>&arr)
    {
        vector<bool> prev(k+1,0),cur(k+1,0);
        prev[0]=cur[0]=true;
        if(arr[0]<=k) prev[arr[0]]=true;
        for(int ind=1; ind<n; ind++)
        {
            for(int target=1; target<=k; target++)
            {
                bool noTake=prev[target];
                bool take=false;
                if(arr[ind]<=target)
                    take=prev[target-arr[ind]];
                    cur[target]=take|noTake;
            }
            prev=cur;
        }
        return prev[k];
    }
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int tot_sum=0;
        for(int i=0; i<n; i++)
        {
            tot_sum+=nums[i];
        }
        if(tot_sum%2) return false;
        
        int target=tot_sum/2;
        return subsetSumToK(n,target,nums);
    }
};