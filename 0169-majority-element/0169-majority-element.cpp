class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        int majority_element=0;
        
        for(int i=0; i<32; i++) {
        int bit=1<<i;
        
        //count how many numbers have this bit set
        int bit_count=0;
        for(int num: nums)
        {
            if((num&bit)!=0)
            {
                bit_count++;
            }
        }
        
        //If this bit is present in more than n/2 elements then it must set in majority_element 
        if(bit_count>n/2)
        {
            majority_element|=bit;
        }
    }
        return majority_element;
    }
};