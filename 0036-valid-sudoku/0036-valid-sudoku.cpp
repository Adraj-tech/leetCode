class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> hash(10, 0);
        for (int i = 0; i < 9; i++) {
            hash.assign(10, 0);
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0';
                    hash[num]++;
                    if (hash[num] > 1)
                        return false;
                }
            }
        }
        for (int i = 0; i < 9; i++) {
            hash.assign(10, 0);
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    int num = board[j][i] - '0';
                    hash[num]++;
                    if (hash[num] > 1)
                        return false;
                }
            }
        }
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                vector<int> hash(10, 0);
                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        if (board[i][j] != '.') {
                            int num = board[i][j] - '0';
                            hash[num]++;
                            if (hash[num] > 1)
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};