class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int minValue=INT_MAX;
        int maxValue=INT_MIN;
        
        for(int num: nums)
        {
            minValue = min(minValue, num);
            maxValue =max(maxValue, num);
        }
         vector<int> count(maxValue-minValue+1);// to counter negative numbers also;
        for(int num : nums){
            count[num-minValue]++;// applying the offset of minValue
            
        }
        int remain =k;
        for(int num=count.size()-1; num>=0; num--)
        {
            remain-=count[num];
            if(remain<=0)
            {
                return num+minValue;
            }
        }
        
        return -1;
        
    }
};