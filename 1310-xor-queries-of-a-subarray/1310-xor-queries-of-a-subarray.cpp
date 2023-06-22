//Optimised Approach O(n)
//
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
      vector<int>ans;
        for(int i=1; i<arr.size(); i++)
        {
            arr[i]=arr[i]^arr[i-1];
        } 
        // arr{a,a^b,a^b^c, a^b^c^d,...}
        for(auto i:queries)
        {
            int start=i[0], end=i[1];
            if(start==0)
            {
                ans.push_back(arr[end]);
            }
            else
            {
                ans.push_back(arr[start-1]^arr[end]);
                    // lets assume we need to find Xor between index start and end then at index end we hv xor of elements from 0th index to  index end and if we xor it with element at start-1 index(which hv xor of element from 0th index to start-1 index) we will get rid of elements from 0 to start-1 so our answer contains xor of elements from index start to end.
            }
        }
        return ans;
    }
    
};