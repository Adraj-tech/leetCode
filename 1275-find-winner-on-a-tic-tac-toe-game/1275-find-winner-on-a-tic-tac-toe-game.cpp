class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> board(3, vector<char>(3, ' '));
        for (int i = 0; i < moves.size(); i++) {
            int row = moves[i][0];
            int col = moves[i][1];
            if (i % 2 == 0) {
                board[row][col] = 'X';
            } else {
                board[row][col] = 'O';
            }
            char ch = board[row][col];
            if (board[row][0] == ch && board[row][1] == ch &&
                board[row][2] == ch) {
                if (ch == 'X') {
                    return "A";
                } else {
                    return "B";
                }
            }
            if (board[0][col] == ch && board[1][col] == ch &&
                board[2][col] == ch) {
                if (ch == 'X') {
                    return "A";
                } else {
                    return "B";
                }
            }
            if (board[0][0] == ch && board[1][1] == ch && board[2][2] == ch) {
                if (ch == 'X') {
                    return "A";
                } else {
                    return "B";
                }
            }
            if (board[0][2] == ch && board[1][1] == ch && board[2][0] == ch) {
                if (ch == 'X') {
                    return "A";
                } else {
                    return "B";
                }
            }
        }
        if (moves.size() == 9) {
            return "Draw";
        } else {
            return "Pending";
        }
    }
};