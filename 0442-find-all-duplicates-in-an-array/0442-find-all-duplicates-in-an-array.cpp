class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            int index=abs(nums[i]);
            int indx_look=index-1;// Array is 0 based
            if(nums[indx_look]<0)
                ans.push_back(indx_look+1);
            // we must have visited the element at indx_look for before ie we have got number indx_look+1 before also so we got to indx_look 
            else 
                nums[indx_look]= nums[indx_look]*-1;// make it negative     
        }
        return ans;
    }
};