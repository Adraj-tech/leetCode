class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> answer(n);
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(prices[j] <= prices[i]){
                    answer[i] = prices[i] - prices[j];
                    break;
                }
                else answer[i] = prices[i];
            }
        }
        answer[n-1] = prices[n-1];
        return answer;
    }
};