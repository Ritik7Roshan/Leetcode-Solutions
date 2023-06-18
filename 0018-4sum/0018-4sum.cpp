class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
         set<vector<int>> store;
         int n=nums.size();
        for(int i=0; i<n ; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1; j<n; j++)
            {
                long long new_target=target-nums[i]*1L-nums[j];
                
                int x=j+1,y=n-1;
                
                while(x<y)
                {
                   long long sum=nums[x]+nums[y];
                    
                    if(sum>new_target)y--;
                    else if(sum<new_target)x++;
                    else{
                        store.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }        
        for(auto i: store)
        {
            ans.push_back(i);
        }
        
        return ans;
    }
};