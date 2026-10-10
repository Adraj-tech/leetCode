class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        stack<char> st;
        string ans = "";
         for (int i = 0; i < n; i++) {
            if (st.empty() || !isdigit(s[i])) {
                if (!isdigit(s[i])) {
                    st.push(s[i]);
                }
            }
            else if (isdigit(s[i])) {
                st.pop();
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};