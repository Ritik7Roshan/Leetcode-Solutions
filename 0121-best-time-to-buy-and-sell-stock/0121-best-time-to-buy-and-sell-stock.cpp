//Two Pointer
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();// size of the prices
        int buy=prices[0];  // assumed the first day to buy
        int maxp=0; //  maximum profit
        int diff=0; // difference between buying price and selling price 
        for(int i=1; i<n; i++)
        { 
            diff=prices[i]-buy;
            if(diff<0) // loss then update the minimum price  as buying price 
                buy=prices[i];
            else
            {
                maxp=max(maxp,diff);// difference is positive then find the maximum                                        profit
            }
        }
        
        return maxp;
    }
};