class Solution {
public:
    int result(vector<int>& nums, int low, int high, int target) {
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return INT_MIN;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int maxIndex = 0;
        int minIndex = 0;
        int answer = INT_MIN;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }

            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
        }

        if (minIndex == 0) {
            answer = result(nums, 0, n - 1, target);
            if (answer != INT_MIN)
                return answer;
        } else {
            answer = result(nums, 0, minIndex - 1, target);
            if (answer != INT_MIN)
                return answer;

            answer = result(nums, minIndex, n-1, target);
            if (answer != INT_MIN)
                return answer;
        }
        return -1;
    }
};