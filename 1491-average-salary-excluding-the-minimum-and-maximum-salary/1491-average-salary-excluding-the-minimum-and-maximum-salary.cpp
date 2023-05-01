class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double ans=0.00;
        for(int i=1; i<salary.size()-1; i++)
        {
            ans=ans+salary[i];
        }
        double avg=ans/(salary.size()-2);
        return avg;
    }
};