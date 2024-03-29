 class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
               
        // store 1's of img1 and img2;
        vector<pair<int, int>> v1, v2;
        int n = img1.size();
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
             
                // if cell is 1
                if(img1[i][j]) v1.push_back({i, j});
                if(img2[i][j]) v2.push_back({i, j});
            }
        }
        
        map<pair<int, int>, int> translate; 
        int max_overlap = 0;
        
        for(auto i : v1){
            for(auto j : v2){
                
                // calculate the translation (coordinate-shift) required for a 
				// img1 point to overlap  img2 point
				
                int x = j.first - i.first;
                int y = j.second - i.second;
                translate[{x, y}]++;
                
                max_overlap = max(max_overlap, translate[{x, y}]);
            }
        }
        
        return max_overlap;
    }
};