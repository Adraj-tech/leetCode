class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            // int mid = (low + high) / 2;

            if (low == high)
                return nums[low];
            if (nums[low] == nums[low + 1])
                low = low + 2;
            else
                return nums[low];

            if (nums[high] == nums[high - 1])
                high = high - 2;
            else
                return nums[high];
        }
        return -1;
    }
};