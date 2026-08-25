class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(101, 0);
        for (int i = 0; i < n; i++) {
            arr[nums[i]] = 1;
        }
        int multiple = k;
        while (multiple <= 100 && arr[multiple] == 1) {
            multiple += k;
        }
        return multiple;
    }
};