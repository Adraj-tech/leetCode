class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26, 0);
        string answer = "";
        int a = 0;
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        for (char ch : target) {
            if (freq[ch - 'a'] != 0) {
                answer.push_back(ch);
                freq[ch - 'a']--;
            } else {
                for (int i = ch - 'a' + 1; i < 26; i++) {

                    if (freq[i] != 0) {
                        answer.push_back(char(i + 'a'));
                        freq[i]--;
                        a = 1;
                        break;
                    }
                }
                break;
            }
            if (a == 1)
                break;
        }
        if (a == 1) {

            for (int i = 0; i < 26; i++) {
                while (freq[i] > 0) {
                    answer.push_back(char(i + 'a'));
                    freq[i]--;
                }
            }

            return answer;
        }
        int pos = answer.size() - 1;

        while (pos >= 0) {
            char ch = answer[pos];
            freq[ch - 'a']++;
            for (int i = ch - 'a' + 1; i < 26; i++) {

                if (freq[i] != 0) {

                    answer = answer.substr(0, pos);

                    answer.push_back(char(i + 'a'));
                    freq[i]--;
                    for (int j = 0; j < 26; j++) {
                        while (freq[j] > 0) {
                            answer.push_back(char(j + 'a'));
                            freq[j]--;
                        }
                    }

                    return answer;
                }
            }

            pos--;
        }

        return "";
    }
};