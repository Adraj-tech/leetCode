class Solution {
public:
    void sortColors(vector<int>& nums) {
        //adarsh
        int n=nums.size();
        int arr[3] = {0, 0, 0};
        for(int i=0; i<n; i++){
            arr[nums[i]] = arr[nums[i]]+1;
        }
        int j=0;
        int k=0;
        for(int i=0; i<n; i++){
            
            if(i==(arr[j]+k)){
                k=k+arr[j];
                j++;
             }
             while (arr[j] == 0) {
                j++;
            }
            nums[i]=j;
    
        }
        return;
    }
};