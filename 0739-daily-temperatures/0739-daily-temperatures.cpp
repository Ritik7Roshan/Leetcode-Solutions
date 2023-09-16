class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        
        int n=arr.size();
        
        vector<int>ans(n,0);
        
        stack<int>s;//stack we are storing index
        for(int i=n-1; i>=0; i--)
        {
            //poping all indexes with temp lower or equal to the current index
             while(!s.empty() && arr[i]>=arr[s.top()])
             {
                 s.pop();
             }
         
         // if stack still has element then the next warmer temperature exsists
                   if(!s.empty())
                   {
                       ans[i]=s.top()-i;
 
                   }
                   s.push(i);
        }
        return ans;
         
    }
};