class Solution {
public:
    vector<string>ans;
    void solve(int open,int close, string cur, int n){
        if(cur.size()==2*n)
        {
            ans.push_back(cur);
            return;
        }
        if(open<n){
            solve(open+1,close,cur+"(",n);
        }
        if(close<open)
        {
            solve(open,close+1,cur+")",n);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        solve(0,0,"",n);
        return ans;
    }
};
//  TC O(4^n/sqrt(n))
// SC  O(4^n/sqrt(n))+ O(n)