class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> freq(maxi + 1, 0);
        for (int num : arr) {
            freq[num]++;
        }
        for (int i = maxi; i >= 1; i--) {
            if (freq[i] == i) {
                return i;
            }
        }
        return -1;
    }
};