class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
       int  count =0;
        int j=0;
        string result="";
        for(int i=0;i<n;i++){
            if (s[i] == '1'){
                count++;
            }
            while(count==k){
                string temp = s.substr(j, i - j + 1);
                if(result == "" || temp.size() < result.size() || (temp.size() == result.size() && temp < result)){
                   result=temp;
                }
                if(s[j]=='1'){
                    count--;
                }
                j++;
            }
        }
        return result;
    }
};