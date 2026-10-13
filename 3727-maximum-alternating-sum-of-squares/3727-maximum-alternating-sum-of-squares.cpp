class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (i <= ((n + 1) / 2 - 1))
                ans = ans + (1LL * nums[i] * nums[i]);
            else
                ans = ans - (1LL * nums[i] * nums[i]);
        }
        return ans;
    }
};