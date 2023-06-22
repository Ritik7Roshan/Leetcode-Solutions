class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n;
        n=nums.size();
        map<int,int>m;
        int mini=floor(n/3)+1;
        vector<int>ans;
        for(auto i:nums)
        {
            m[i]++;
            if(m[i]==mini)
                ans.push_back(i);
        }
        
        return ans;
    }
};
// maximum number of element that can be in your answer vector  is two for any given n, in this ques it is asked greater than floor of n/3 freq aur kisi v n k liye freq of elemenr occuring greater than  floor of n time hmesa 2 hi hoga eg n=18 floor of n/3 is 6 so there will always be maximum of two elements in given 18 elements that has freq more than 6.
