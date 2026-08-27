class Solution {
public:
    string reverseWords(string s) {
        string answer = "";
        while (!s.empty() && s[0] == ' ') {
            s.erase(0, 1);
        }
        while (!s.empty() && s[s.size() - 1] == ' ') {
            s.erase(s.size() - 1, 1);
        }
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == ' ' && s[i - 1] == ' ') {
                s.erase(i - 1, 1);
                i--;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            int j = i;
            while (j >= 0 && s[j] != ' ') {
                j--;
            }
            for (int k = j + 1; k <= i; k++) {
                answer.push_back(s[k]);
            }
            answer.push_back(' ');
            i = j;
        }
        answer.pop_back();
        return answer;
    }
};