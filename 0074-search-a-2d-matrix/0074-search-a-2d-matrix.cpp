// points to ponder 
// n * m matrix convert to an array => matrix[x][y] => a[x * m + y]

// an array convert to n * m matrix => a[x] =>matrix[x / m][x % m];

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int l=0, h=m*n-1;
        while(l!=h)
        {
           int mid=(l+h)>>1;// doubt why (l+h-1)/2 why not (l+h)/2
            if(matrix[mid/m][mid%m]>=target)
                h=mid;
            else
                l=mid+1;
        }
        return matrix[h/m][h%m]==target; 
    }
};