class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> temp(26);
        int ans = 0;
        for(int i  =0; i<s.size(); i++){
            temp[int(s[i]) - 97] = 1;
        }
        for(int i = 0; i<26; i++){
            if(temp[i] == 1) ans++;
        }
        return ans;
    }
};