class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum =0, mul = 1;
        while(n>0){
            int temp = n%10;
            n = n/10;
            sum = sum + temp;
            mul = mul*temp;
        }
        int reqSum = sum + mul;
        if(original % reqSum != 0) return false;
        return true;
    }
};