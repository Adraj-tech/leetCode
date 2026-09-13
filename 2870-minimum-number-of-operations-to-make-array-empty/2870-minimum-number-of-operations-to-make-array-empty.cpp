class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int count = 0;
        for (auto it : mp) {
            int freq = it.second;
            if (freq == 1) {
                return -1;
            }
            count += freq / 3;
            if (freq % 3 != 0) {
                count++;
            }
        }
        return count;
    }
};