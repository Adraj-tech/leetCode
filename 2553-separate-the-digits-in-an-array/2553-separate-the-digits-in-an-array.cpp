class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> l;
        for (int i = nums.size() - 1; i >= 0; i--) {
            while (nums[i] != 0) {
                int r = nums[i] % 10;
                l.push_back(r);
                nums[i] = nums[i] / 10;
            }
        }
        reverse(l.begin(), l.end());
        return l;
    }
};