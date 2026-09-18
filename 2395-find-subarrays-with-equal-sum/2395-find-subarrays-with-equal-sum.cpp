class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            if (mp[sum] == 1)
                return true;
            else
                mp[sum] = 1;
        }
        return false;
    }
};