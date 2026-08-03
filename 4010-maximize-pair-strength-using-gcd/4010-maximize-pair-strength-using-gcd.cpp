class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    long long maxPairStrength(vector<int>& nums) {
        long long maximum=INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                long long g = gcd(nums[i], nums[j]);

                long long x = (1LL * nums[i] * nums[j]) / (g * g);
                maximum = max(maximum, x);
            }
        }
        return maximum;
    }
};