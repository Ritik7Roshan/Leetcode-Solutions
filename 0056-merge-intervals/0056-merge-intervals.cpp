class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>>mergeIntervals;
        if(intervals.size()==0)
            return mergeIntervals;
        
        sort(intervals.begin(),intervals.end());
//  after sorting intervals = [[1,3],[2,6],[8,10],[15,18]]
        
        mergeIntervals.push_back(intervals[0]);
        int j=0;
        //Traverse the whole vector takes O(N) time
        
        for(int i=1; i<intervals.size(); i++)
        {
            //if results are overlapping 
            if(mergeIntervals[j][1]>=intervals[i][0])
                mergeIntervals[j][1]=max(mergeIntervals[j][1],intervals[i][1]);
            else 
            {
                j++;
                mergeIntervals.push_back(intervals[i]);
            } 
        }
        return mergeIntervals;
        
    }
};