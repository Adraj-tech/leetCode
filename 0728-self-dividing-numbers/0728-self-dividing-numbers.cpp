class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i<=right; i++){
            int res = 1, n = i;
            while(n>0){
                int digit = n%10;
                if(digit == 0 || i%digit != 0){
                    res = 0;
                    break;
                } 
                n = n/10;
            }
            if(res == 1) result.push_back(i);
        }
        return result;
    }
};