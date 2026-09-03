class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int mini = nums1[0];
        int check = 0;
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums1[i]);
            if (nums1[i] % 2 != 0)
                check = 1;
        }
        if (mini % 2 != 0)
            return true;
        if (mini % 2 == 0 && check == 0)
            return true;
        return false;
    }
};