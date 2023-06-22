class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n;
        n=nums.size();
        map<int,int>m;
        int mini=floor(n/3)+1;
        vector<int>ans;
        for(auto i:nums)
        {
            m[i]++;
            if(m[i]==mini)
                ans.push_back(i);
        }
        // for(auto i:m)
        // {
        //     if(i.second>floor(n/3))
        //        ans.push_back(i.second); 
        // }
        return ans;
    }
};
