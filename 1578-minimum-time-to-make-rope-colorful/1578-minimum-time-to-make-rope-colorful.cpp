class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalTime=0, currMaxTime=0;
        for(int i=0; i<colors.size(); ++i)
        {
            //If this balloon is the first ballon of a new group set the currMaxTime as 0;
            if(i>0 && colors[i]!=colors[i-1]){
                currMaxTime =0;
            }
            // Increment totalTime by the smaller one.
            // Update currMaxTime as the larger one.
            totalTime += min(currMaxTime, neededTime[i]);
            currMaxTime = max(currMaxTime, neededTime[i]);
        }
        // Return totalTime as the minimum removal time.
        return totalTime;
    }
};