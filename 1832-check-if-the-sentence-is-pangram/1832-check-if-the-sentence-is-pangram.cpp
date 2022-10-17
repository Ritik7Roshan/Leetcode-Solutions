class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(int i=0; i<26; ++i)
        {
            char currChar= 'a'+i;
            if(sentence.find(currChar,0)==string::npos)
                return false;
        }
        return true;
    }
};
//TC O(n)
//SC O(1)
