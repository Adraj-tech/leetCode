class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n);
        int i =0, j = n, count = 0;
        while(i<n && j<2*n){
            result[count] = nums[i];
            count++;
            result[count] = nums[j];
            count++, i++, j++;
        }
        return result;
    }
};