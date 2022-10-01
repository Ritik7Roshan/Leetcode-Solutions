class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        map<char,int>mpp;
        int maxi=0;
        for(int i=0,j=0; i<s.length(); ++i)
        {
            if(mpp.find(s[i])!=mpp.end())
            {
                j=max(j,mpp[s[i]]+1);
            }
            mpp[s[i]]=i;
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};