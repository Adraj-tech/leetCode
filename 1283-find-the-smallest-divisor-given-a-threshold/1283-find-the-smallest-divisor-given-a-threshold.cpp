class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = INT_MIN;
        int answer;
        for(int i=0; i<n; i++){
            high = max(nums[i], high);
        }

        while(low<=high){
            int mid = (low+high)/2;
            int sum=0;
            for(int i=0; i<n; i++){
                sum = sum + ((nums[i] + mid - 1) / mid);
            }
            if(sum>threshold){
                low = mid+1;
            }
            else{
                answer = mid;
                high = mid-1;
            }
        }
        return answer;
    }
};