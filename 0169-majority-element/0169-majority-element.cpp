class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        int ans;
        for(auto v:nums)
        {
            mpp[v]++;
        }
        for(auto x:mpp)
        {
            if(x.second>(n/2))
                ans=x.first;
        }
        return ans;
    }
};