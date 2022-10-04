class Solution {
public:
    bool isPalindrome(string s)
    {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i++]!=s[j--])
            {
                return false;
            }
            
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        
        if(n==0) return "";
        
        bool dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        // every single character is a palindrome
        for(int i=0; i<n; i++)
        {
            dp[i][i]=true;
        }
         
        string ans="";
        ans+=s[0];
        
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    //If it is of two character OR if its susbtring is palindrome.
                    if (j - i == 1 || dp[i + 1][j - 1])
                    {
                        //Then it will also a palindrome substring
                        dp[i][j] = true;

                        //Check for Longest Palindrome substring
                        if (ans.size() < j - i + 1)
                            ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};