// Recursive Solution 
class Solution {
public:
    string makeGood(string s) {
        // If the string is empty,just return it.
        if(s.empty())
            return s;
        //If we find a pair in s remove this pair from s 
        //and solve the remaining string recursively
        for(int i=0; i<s.size()-1; ++i)
        {
            if(abs(s[i]-s[i+1])==32)
                return makeGood(s.substr(0,i)+s.substr(i+2));
        }
        // Base case, if we cant find a pair,just return 's'
        return s;
    }
};
//TC O(n^2)
// SC O(n^2)