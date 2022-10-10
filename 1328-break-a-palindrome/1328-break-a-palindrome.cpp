class Solution {
public:
    string breakPalindrome(string palindrome) {
        int l=palindrome.length();
        string res;
        if(l==1)return res;
        
        for(int i=0; i<l/2; i++)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[l-1]='b';
        return palindrome;
    }
};