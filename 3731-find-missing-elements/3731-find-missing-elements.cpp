class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0; i<n; i++){
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }

        int range = maxi - mini;

        vector<int> arr(range + 1, 0);
        for(int i=0; i<n; i++){
            arr[nums[i] - mini] = 1;
        }

        vector<int> result;
        int j=0;
        for(int i=0; i<=range; i++){
            if(arr[i]==0){
                result.push_back(i + mini);
                j++;
            }
        }
        return result;
    }
};