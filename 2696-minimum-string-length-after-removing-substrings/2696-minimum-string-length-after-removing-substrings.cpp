class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        stack<char> st;
        for(int i = n-1; i>=0; i--){
            if(st.empty()) st.push(s[i]);
            else if(s[i] == 'A' && st.top() == 'B') st.pop();
            else if(s[i] == 'C' && st.top() == 'D') st.pop();
            else st.push(s[i]);

        }
        return st.size();
    }
};