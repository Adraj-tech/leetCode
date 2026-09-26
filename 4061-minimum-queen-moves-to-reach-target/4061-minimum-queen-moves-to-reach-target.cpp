class Solution {
public:
    int minQueenMoves(vector<int>& src, vector<int>& target) {
        if(src[0] == target[0] && src[1] == target[1]) return 0;
        else if(src[0] == target[0] || src[1] == target[1] || (abs(src[0] - target[0]) == abs(src[1] - target[1]))) return 1;
        return 2;
    }
};