//Two Pointer
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int maxp=0;
        int diff=0;
        for(int i=1; i<n; i++)
        { 
            diff=prices[i]-buy;
            if(diff<0)
                buy=prices[i];
            else
            {
                maxp=max(maxp,diff);
            }
        }
        
        return maxp;
    }
};