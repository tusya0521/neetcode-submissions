class Solution {
public:
    void dfs(int r, int c, vector<vector<char>>& grid){
        int row = grid.size();
        int col = grid[0].size();
        if(r<0 || c<0 || r>=row || c>=col || grid[r][c] == '0'){
            return ;
        } else {
        if(grid[r][c] == '1'){
            grid[r][c] = '0';
        }
                dfs(r+1,c,grid),
                dfs(r-1,c,grid),
                dfs(r,c+1,grid),
                dfs(r,c-1,grid);
            }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i =0; i<row ; i++){
            for(int j = 0; j<col ; j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(i, j, grid);
                }
            }
        }
        return count;
    }
};
