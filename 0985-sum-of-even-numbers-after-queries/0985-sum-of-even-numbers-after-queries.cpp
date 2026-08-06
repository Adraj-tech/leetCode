class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int j=0;
        int k=1;
        vector<int> arr{};
        for(int i=0; i<queries.size(); i++){
            nums[queries[i][k]] =  nums[queries[i][k]] + queries[i][j];
            int sum=0;
            for(int x=0; x<n; x++){
                
                if(nums[x]%2==0){
                    sum=sum+nums[x];
                }
            }
            
            arr.push_back(sum);
        }
        return arr;
    }
};