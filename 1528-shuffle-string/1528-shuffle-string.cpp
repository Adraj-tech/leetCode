class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string answer(n, ' ');
        for(int i = 0; i<n; i++){
            answer[indices[i]] = s[i];
        }
        return answer;
    }
};