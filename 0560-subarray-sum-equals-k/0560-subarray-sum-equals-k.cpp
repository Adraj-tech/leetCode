class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n =nums.size();
        int sum=0;
        int count=0;
        int j = 0;
        while(j<n){
            for(int i = j; i<n; i++){
                sum = sum + nums[i];
                if(sum == k){
                    count++;
                    // sum = 0;
                    // break;
                }
                // else if(sum > k){
                //     sum = 0;
                //     break;
                // }
            }
            sum = 0;
            j++;
        }
        return count;
    }
};