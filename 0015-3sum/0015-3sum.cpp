// Two pointer Approach 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        // Base Case 1
        if(nums.size()<3)
        {
            return {};
        }
        
        //Base Case 2
        if(nums[0]>0)
        {
            return {};
        }
        
         vector<vector<int>>answer;
         for(int i=0; i<nums.size(); i++)
         {
             if(nums[i]>0)// fixed number is +ve
             {
                 break;
             }
             if(i>0 && nums[i]==nums[i-1])
             // if number is getting repeated ignore the lower loop 
             {
                 continue;
             }
             int low=i+1, high=nums.size()-1;
             int sum =0;
             while(low<high)
             {
                 sum=nums[i]+nums[low]+nums[high];
                 if(sum>0)
                 { // if sum is positive we need more -ve numbers to make it zero                                  //decrement high
                     high--;
                 }
                 else if(sum<0)
                 {
                     low++;
                 }
                 else{
                     answer.push_back({nums[i],nums[low],nums[high]});
                     int last_low_occurance = nums[low], last_high_occurance= nums[high];
                     
                     while(low< high && nums[low]== last_low_occurance)// Update the lowhigh with last occurences of low and high
                     {
                         low++;
                     }
                     while(low< high && nums[high]== last_high_occurance)
                     {
                         high--;
                     }
                 }
             }
         }
        return answer;
    }
};