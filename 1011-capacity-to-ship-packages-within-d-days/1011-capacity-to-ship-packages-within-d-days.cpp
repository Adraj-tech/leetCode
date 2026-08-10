class Solution {
public:
    int daysNeeded(vector<int>& weights, int capacity) {
        int days = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w <= capacity) {
                load += w;
            } else {
                days++;
                load = w;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = 0;
        int high = 0;

        for (int w : weights) {
            low = max(low, w);
            high += w;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int totalDays = daysNeeded(weights, mid);

            if (totalDays <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};