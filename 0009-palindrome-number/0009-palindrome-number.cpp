class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
         int answer=0, temp;
   
           while(x!=0){
            temp = x%10;
            x = x/10;
           if(answer>INT_MAX/10 || answer<INT_MIN/10 ){
                return 0;
             }
            answer = answer*10;
            answer = temp + answer;
            }

        if(answer == dup && dup >= 0){
            return 1;
        }
        else{
            return 0;
        }
    }
};