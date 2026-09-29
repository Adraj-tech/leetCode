class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long sum = 0;
        for(int i = 0; i< nums.size(); i+=2){
            sum = sum + nums[i];
        }
        return sum;
    }
};