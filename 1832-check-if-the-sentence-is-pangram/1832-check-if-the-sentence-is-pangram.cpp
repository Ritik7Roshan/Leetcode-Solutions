class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> seen(sentence.begin(),sentence.end());
        return seen.size()== 26;
    }
};
//TC O(n):-only to iterate over the sentence unordered_set All                Operations are taking O(1) time.
//SC O(1) 