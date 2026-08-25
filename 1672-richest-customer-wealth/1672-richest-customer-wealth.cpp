class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        if(n==0) return 0;
        int m = accounts[0].size();
        int maxWealth = 0;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<m; j++){
                sum = sum + accounts[i][j];
            }
            maxWealth = max(sum, maxWealth);
        }
        return maxWealth;
    }
};