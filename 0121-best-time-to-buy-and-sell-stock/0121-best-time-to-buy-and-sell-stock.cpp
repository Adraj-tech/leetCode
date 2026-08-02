class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minimum=prices[0];
        int profit=0;
        int temp=0;

        for(int i=1; i<n; i++){
            minimum= min(prices[i], minimum);
            if(minimum==prices[i]){
                continue;
            }
            else{
                temp=profit;
                profit=prices[i]-minimum;
                profit=max(temp, profit);
            }
        }
        return profit;
    }
};