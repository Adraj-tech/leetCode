class Solution {
public:
    bool isPalindrome(string s) {
         for (int i = 0; i < s.size();) {
            if (!isalnum(s[i])) {
                s.erase(i, 1);
            }
            else {
                i++;
            }
        }
        for (char& ch : s) {
            if (isalpha(ch)) {
                ch = tolower(ch);
            }
        }
        int j = 0, i = s.size() - 1;
        while (j <= i) {
            if (s[j] == s[i]) {
                i--;
                j++;
            } else {
                return false;
            }
        }
        return true;
    }
};