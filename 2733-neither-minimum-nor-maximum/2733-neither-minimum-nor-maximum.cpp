class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int mini = 100;
        int maxi = 1;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != mini && nums[i] != maxi)
                ans = nums[i];
        }
        return ans;
    }
};