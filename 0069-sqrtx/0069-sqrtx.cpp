class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high = x;
        int answer = 0;

        while(low<=high){
            long long mid = low + (high - low)/2;
            long long val = mid * mid;;
            if(val > x){
                high = mid-1;
            }
            else{
                answer = mid;
                low=mid+1;
            }
        }

        return answer;
    }
};