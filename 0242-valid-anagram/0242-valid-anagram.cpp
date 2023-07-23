class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpS,mpT;
        for(auto i: s) mpS[i]++;
        for(auto j: t) mpT[j]++;
        if(mpS==mpT)
        return true;
        else 
            return false;
    }
};