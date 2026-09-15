class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> mp;
        for (int i = 0; i < tasks.size(); i++) {
            mp[tasks[i]]++;
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