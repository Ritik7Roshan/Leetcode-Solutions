class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>>rows(9),col(9),blocks(9);
        
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(board[i][j]=='.') continue;
                int curr=board[i][j]-'0';
                if(rows[i].count(curr)|| col[j].count(curr)|| blocks[(i/3)*3+(j/3)].count(curr))
                    return false;
                
                rows[i].insert(curr);
                col[j].insert(curr);
                blocks[(i/3)*3+(j/3)].insert(curr);
            }
        }
        return true;
    }
};