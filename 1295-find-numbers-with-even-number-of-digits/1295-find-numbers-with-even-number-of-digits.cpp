class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i = 0; i<n; i++){
            int n = nums[i], count = 0;
            while(n > 0){
                int digit = n%10;
                count++;
                n = n/10;
            }
            if(count % 2 == 0) ans++;
        }
        return ans;
    }
};