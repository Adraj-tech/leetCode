class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int base = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                base++;
            }
        }
        int ans = 0;
        if (base == k) {
            ans++;
        }
        int newPair = (s[n - 1] == s[0]);
        for (int r = 1; r < n; r++) {
            int removedPair = (s[r - 1] == s[r]);
            int score = base - removedPair + newPair;
            if (score == k) {
                ans++;
            }
        }
        return ans;
    }
};