class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int pos = 123 - int(s[i]);
            sum = sum + (i + 1) * pos;
        }
        return sum;
    }
};