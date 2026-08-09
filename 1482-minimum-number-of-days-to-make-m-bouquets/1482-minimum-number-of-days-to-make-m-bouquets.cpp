
class Solution {
public:

    int possible(vector<int>& arr, int day, int k) {
        int count = 0;
        int total = 0;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] <= day) {
                count++;

                if (count == k) {
                    total++;
                    count = 0;
                }
            }
            else {
                count = 0;
            }
        }

        return total;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        long long req = 1LL * m * k;

        if (n < req) {
            return -1;
        }

        int low = INT_MAX;
        int high = INT_MIN;

        for (int i = 0; i < n; i++) {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int total = possible(bloomDay, mid, k);

            if (total >= m) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};

