class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // rows and cols
        for (int i = 0; i < 9; ++i) {
            unordered_set<int> nums_row, nums_col;
            for (int j = 0; j < 9; ++j)
            {
                if (nums_row.contains(board[i][j])) return false;
                if (nums_col.contains(board[j][i])) return false;
                if (board[i][j] != '.') nums_row.insert(board[i][j]);
                if (board[j][i] != '.') nums_col.insert(board[j][i]);
            }
        }

        // Square
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                unordered_set<int> nums;
                for (int r = i; r < 3 + i; ++r) {
                    for (int c = j; c < 3 + j; ++c) {
                        if (nums.contains(board[r][c])) return false;
                        if (board[r][c] != '.') nums.insert(board[r][c]);
                    }
                }
            }
        }
        return true;
    }
};
