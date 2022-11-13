class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Taking Transpose Of A Matrix
      int n=matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            // Swap the 0th and last colmn using two pointer method
            int left=0, right=n-1;
            while(left<right){
                swap(matrix[i][left],matrix[i][right]);
                ++left;
                --right;
            }
        }
    }
};