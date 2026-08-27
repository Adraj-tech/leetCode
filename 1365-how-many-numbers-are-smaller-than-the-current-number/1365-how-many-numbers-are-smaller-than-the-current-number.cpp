class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> answer;
        // int n=nums.size();
    //     for(int i=0;i<n;i++){
    //          int count=0;
    //         for(int j=0;j<n;j++){
    //           if(nums[i]>nums[j]){
    //             count++;
    //         }
    //     }
    //      answer.push_back(count);
    //  }
    //  return answer;

    //METHOD 2 :-
    vector<int> count(101, 0);
        for(int num : nums) {
            count[num]++;
        }
        for(int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }
        for(int num : nums) {
            if(num == 0) {
                answer.push_back(0);
            }
            else {
                answer.push_back(count[num - 1]);
            }
        }
    return answer;
    }
};