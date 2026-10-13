class Solution {
public:
    char findTheDifference(string s, string t) {
        int m = s.size();
        int n = t.size();
        int temp[26] = {0};
        for (int i = 0; i < m; i++) {
            temp[int(s[i]) - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            if (temp[int(t[i]) - 'a'] <= 0)
                return t[i];
            else
                temp[int(t[i]) - 'a']--;
        }
        return t[n - 1];
    }
};