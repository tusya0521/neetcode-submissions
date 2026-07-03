class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> row;
        unordered_map<int, unordered_set<int>> col;
        unordered_set<int> st;


        int n = 9;

        // Check rows and columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (board[i][j] == '.') continue;

                int num = board[i][j] - '0';

                if (row[i].find(num) == row[i].end()) {
                    row[i].insert(num);
                } else {
                    return false;
                }

                if (col[j].find(num) == col[j].end()) {
                    col[j].insert(num);
                } else {
                    return false;
                }
            }
        }

        // Check every 3x3 box
        for (int startRow = 0; startRow < 9; startRow += 3) {
            for (int startCol = 0; startCol < 9; startCol += 3) {
                for (int i = startRow; i < startRow + 3; i++) {
                    for (int j = startCol; j < startCol + 3; j++) {
                        if (board[i][j] == '.') continue;

                        int num = board[i][j] - '0';

                        if (st.find(num) == st.end()) {
                            st.insert(num);
                        } else {
                            return false;
                        }
                    }
                }
                st.clear();
            }
        }

        return true;
    }
};