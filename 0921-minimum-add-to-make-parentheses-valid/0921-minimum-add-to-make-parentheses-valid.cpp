class Solution {
public:
    int minAddToMakeValid(string s) {
        int opening = 0;
        int closing = 0;
        int n = s.size();
        stack<char> st;

        for(int i = n-1; i>=0; i--){
            st.push(s[i]);
        }
        while(!st.empty()){
            if(st.top() == ')' && opening > 0){
                opening--;
            }
            else if(st.top() == ')') closing++;
            if(st.top() == '(') opening++;
            st.pop();
        }
        return (opening + closing);
    }
};