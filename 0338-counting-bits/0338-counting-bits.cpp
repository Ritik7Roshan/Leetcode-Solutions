class Solution {
public:
    int numSetBits(int n)
    {
         return __builtin_popcount(n);
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++)
        {
            ans.push_back(numSetBits(i));
        }
        return ans;
    }
};