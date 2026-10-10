class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n = text.size();
        vector<int> temp(26,0);
        int count = 0;
        bool check = true;
        for(int i = 0; i<brokenLetters.size(); i++){
            temp[int(brokenLetters[i] - 'a')] = 1;
        }
        for(int i =0; i<n; i++){
            if(text[i] == ' '){
                if(check == true) count++;
                else check = true;
            }
            else{ 
                int a = int(text[i] - 'a');
                if(temp[a] == 1) check = false;
            }
        }
        if(check == true) count++;
        return count;
    }
};