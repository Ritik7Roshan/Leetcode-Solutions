class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>mergeIntervals;
        int n=intervals.size();
        
        sort(intervals.begin(),intervals.end());
        
        mergeIntervals.push_back(intervals[0]);
        
        int j=0;
        for(int i=1; i<n; i++)
        {
            if(mergeIntervals[j][1]>=intervals[i][0])
            {
                mergeIntervals[j][1]=max(intervals[i][1],mergeIntervals[j][1]);  
            }
            else
            {
                j++;
                mergeIntervals.push_back(intervals[i]);
            }
        }
        return mergeIntervals;
    }
};