class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> answer;
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