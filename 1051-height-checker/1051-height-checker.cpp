class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101, 0);

        // Count frequency of each height
        for (int h : heights) {
            freq[h]++;
        }
        int index = 0;
        int count = 0;
        for (int h = 1; h <= 100; h++) {
            while (freq[h] > 0) {
                if (heights[index] != h) {
                    count++;
                }

                index++;
                freq[h]--;
            }
        }

        return count;
    }
};