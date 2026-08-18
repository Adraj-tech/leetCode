class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxNo = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxNo = max(maxNo, nums[i]);
        }
        vector<int> arr(maxNo + 1, 0);
        int j = 0;
        while (j + k <= n) {

            vector<int> seen(maxNo + 1, 0);

            for (int i = j; i < j + k; i++) {
                if (seen[nums[i]] == 0) {
                    arr[nums[i]]++;
                    seen[nums[i]] = 1;
                }
            }
            j++;
        }
        int result = -1;
        for (int i = 0; i <= maxNo; i++) {
            if (arr[i] == 1) {
                result = max(result, i);
            }
        }
        return result;
    }
};