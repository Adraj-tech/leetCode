class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;
        string answer = "";
        string temp = "";
        for (int i = 0; i < knowledge.size(); i++) {
            mp.insert({knowledge[i][0], knowledge[i][1]});
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                temp.clear();
                i++;
                while (s[i] != ')') {
                    temp.push_back(s[i]);
                    i++;
                }
                if (mp.find(temp) != mp.end()) {
                    answer += mp[temp];
                } else {
                    answer.push_back('?');
                }
            } else {
                answer.push_back(s[i]);
            }
        }
        return answer;
    }
};