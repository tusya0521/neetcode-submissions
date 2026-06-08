class Solution {
public:
set<std::pair<int,int>> visited;
    bool dfs(int r, int c , int i, string w, vector<vector<char>>& b, int row, int col){
        if(i == w.length()){
            return true;
        }
        if(r<0 || c<0 || r>=row || c>=col || w[i] != b[r][c] || visited.find({r, c}) != visited.end()){
            return false;
        }
        visited.insert({r, c});
        bool found =  (dfs(r+1,c,i+1,w,b,row,col) || dfs(r-1,c,i+1,w,b,row,col) || dfs(r,c-1,i+1,w,b,row,col) || dfs(r,c+1,i+1,w,b,row,col));
        visited.erase({r, c});
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (dfs(r, c, 0, word, board, row, col)) {
                    return true;
                }
            }
        }
        return false;
    }
};
