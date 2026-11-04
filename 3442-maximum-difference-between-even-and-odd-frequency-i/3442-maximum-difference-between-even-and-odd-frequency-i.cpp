class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        int even = INT_MAX;
        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0)
                continue;
            if (freq[i] % 2 == 0) {
                even = min(even, freq[i]);
            } else {
                odd = max(odd, freq[i]);
            }
        }
        return odd - even;
    }
};