class Solution {
public:
set<pair<int, int>> hashp;
set<pair<int, int>> hasha;

    void pacif(vector<vector<int>>& heights, int i, int j, int m, int n, bool isa){
        if(i < 0 || i >= n || j < 0 || j >= m) return;

        if(isa){
            if(hasha.find({i,j}) != hasha.end()) return;
            hasha.insert({i,j});
        } else {
            if(hashp.find({i,j}) != hashp.end()) return;
            hashp.insert({i,j});
        }

        if(i+1 < n && heights[i+1][j] >= heights[i][j]) pacif(heights, i+1, j, m, n, isa);
        if(i-1 >= 0 && heights[i-1][j] >= heights[i][j]) pacif(heights, i-1, j, m, n, isa);
        if(j+1 < m && heights[i][j+1] >= heights[i][j]) pacif(heights, i, j+1, m, n, isa);
        if(j-1 >= 0 && heights[i][j-1] >= heights[i][j]) pacif(heights, i, j-1, m, n, isa);

    }

    void atln(vector<vector<int>>& h, int i, int j){
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;

        int m = heights[0].size();
        int n = heights.size();

        for(int i = 0; i<n ; i++) pacif(heights,i,0,m,n, false);
        for(int j = 0; j<m ; j++) pacif(heights,0,j,m,n, false);

        for(int i = 0; i<n ; i++) pacif(heights,i,m-1,m,n, true);
        for(int j = 0; j<m ; j++) pacif(heights,n-1,j,m,n, true);

        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m ; j++){
                if(hashp.find({i,j}) != hashp.end() && hasha.find({i,j}) != hasha.end()) ans.push_back({i,j});
            }
        }
        return ans;
    }
};
