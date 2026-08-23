class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> answer;
        int current = lower;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] < lower) {
                continue;
            }
            if (nums[i] > upper) {
                break;
            }
            if (nums[i] > current) {
                answer.push_back({current, nums[i] - 1});
            }
            current = nums[i] + 1;
        }
        if (current <= upper) {
            answer.push_back({current, upper});
        }
        return answer;
    }
};