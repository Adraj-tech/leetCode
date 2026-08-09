class Solution {
public:
    int hours(vector<int>& arr, int x) {
        int total = 0;
        for (int i = 0; i < arr.size(); i++) {
            total = total + (arr[i] + x - 1) / x;
        }

        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = piles[0];

        for (int i = 1; i < piles.size(); i++) {
            if (piles[i] > maxi) {
                maxi = piles[i];
            }
        }
        int low = 1;
        int high = maxi;

        while (low < high) {
            int mid = (low + high) / 2;
            int total = hours(piles, mid);

            if(total<=h){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};