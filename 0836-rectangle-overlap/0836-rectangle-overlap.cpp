class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int check1 = 0;
        int check2 = 0;
        if (max(rec1[0], rec2[0]) < min(rec1[2], rec2[2]))
            check1 = 1;
        if (max(rec1[1], rec2[1]) < min(rec1[3], rec2[3]))
            check2 = 1;
        return check1 && check2;
    }
};