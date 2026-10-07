class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<char> st;
        string ans;
        for (int i = n - 1; i >= 0; i--) {
            if (!st.empty() && abs(int(st.top()) - int(s[i])) == 32) {
                st.pop();
                continue;
            } else
                st.push(s[i]);
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};