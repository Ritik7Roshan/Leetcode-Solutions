class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,h=n-1;// initialised the left and right ppointer to the extreme so as to maximise the width area 
        int curr=0;
        int res=0;
        while(l<h)
        {
            curr=(h-l)*min(height[l],height[h]);
            res=max(res,curr);
            // how would i move my pointers I would move the pointer pointing to the smallest height so as to increase my volume of water
            if(height[l]<=height[h])
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return res;
    }
};