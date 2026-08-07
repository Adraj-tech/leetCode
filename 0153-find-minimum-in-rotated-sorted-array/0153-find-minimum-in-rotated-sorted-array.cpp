class Solution {
public:
    int findMin(vector<int>& nums) {
        int low =0;
        int high = nums.size()-1;
        if(nums[low]>nums[high]){
            while(nums[low]>nums[high]){
                high--;
            }
            return nums[high+1];
        }
        return nums[low];
    }
};