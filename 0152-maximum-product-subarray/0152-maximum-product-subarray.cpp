class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1, suffix=1;
        int prefix_max=INT_MIN;
        int suffix_max=INT_MIN;
        int ans;
        for(int i=0; i<n; i++){
            if(prefix==0){
                prefix=1;
            }
            if(suffix==0){
                suffix=1;
            }
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            prefix_max=max(prefix_max, prefix);
            suffix_max= max(suffix_max, suffix);
        }
            ans=max(prefix_max, suffix_max);

            return ans;
        }
};