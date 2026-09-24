class Solution {
public:
    int sum(int x) {
        int sum = 0;
        while (x != 0) {
            sum = sum + (x % 10);
            x = x / 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int s = sum(nums[i]);
            if (s == i)
                return i;
        }
        return -1;
    }
};