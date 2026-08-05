class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int S_smallest = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums[i] <= smallest) {
                smallest = nums[i];
                // continue;
            } else if (nums[i] <= S_smallest) {
                S_smallest = nums[i];
            } else if (nums[i] > S_smallest) {
                return 1;
            }
        }
        return false;
    }
};