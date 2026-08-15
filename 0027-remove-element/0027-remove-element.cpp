class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = n;
        int j = -1;
        int m = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == val){
                j=i;
                swap(nums[j], nums[m]);
                m++;
            }
        }
        reverse(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]==val){
                k = k-1;
            }
        }
        return k;
    }
};