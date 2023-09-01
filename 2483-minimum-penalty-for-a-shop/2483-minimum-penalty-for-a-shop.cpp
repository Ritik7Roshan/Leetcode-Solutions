class Solution {
public:
     int bestClosingTime(string customers)
{
    int n = customers.size();
    int count = (customers.begin(), customers.end(), 'N');
    int score = count, best_hour = n;
    int min_score = score;

    for (int i = n - 1; i >= 0; i--)
    {
        score += customers[i] == 'N' ? -1 : 1;

        if (score <= min_score)
        {
            best_hour = i;
            min_score = score;
        }
    }

    return best_hour;
}
};

// Approach
// Count the number of 'N' because if the shop closes at nth hour the penalty will be number of 'N', because until that time shop was opened and no customer came.
// Then start from the last index and if 'Y' comes increase the value of penalty, here because at that index the shop closes but at the same time customer came so increase the penalty.
// And if 'N' come decrease the value of count because at that index shop closes and there should be no penalty but in the first step we added the penalty of that index so we have to decrease the penalty by one.
// Maintain the variable minimum and index to find the minimum penalty.
// Please see the code for the better understanding.