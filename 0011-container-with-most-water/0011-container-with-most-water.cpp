class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int maxWater = 0;
        while(i <= j){
            int amount = 0;
            if(height[i] <= height[j]){
                amount = height[i]*(j-i);
                i++;
            }
            else{
                amount = height[j]*(j-i);
                j--;
            }
            maxWater = max(maxWater, amount);
        }
        return maxWater;
    }
};