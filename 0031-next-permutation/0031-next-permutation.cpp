class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size()-1;
        int infc=0;
        // find infection point 
        for(int i=n; i>0; i--)
        {
            if(nums[i]>nums[i-1])
            {
                infc=i;
                break;
            }
        }
        // if i am not abel to find any infec point means array given is already in descending order
        if(infc==0)
        {
            sort(nums.begin(),nums.end());
        }
        else{
            int toswap=nums[infc-1];
            int mini=INT_MAX;
            // search for next greater element
            for(int j=infc; j<=n; j++)
            {
                if(nums[j]-toswap>0 && nums[j]-toswap<mini)
                {
                    int temp=nums[j];
                    nums[j]=nums[infc-1];
                    nums[infc-1]=temp;
                }
            }
            // sort the remaining array
            sort(nums.begin()+infc,nums.end());
        }
    }
};