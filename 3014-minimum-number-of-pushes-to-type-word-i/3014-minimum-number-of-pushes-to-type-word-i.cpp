class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int result=0;
        for(int i=1; i<=n; i++){
            if(i<=8){
                result=result+1;
            }
            else if(8<i && i<=16){
                result=result+2;
            }
            else if(16<i && i<=24){
                result=result+3;
            }
            else{
                result=result+4;
            }
        }
        return result;
    }
};