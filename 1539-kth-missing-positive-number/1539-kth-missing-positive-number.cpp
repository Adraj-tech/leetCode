class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        for(int x = 1; x < arr[0]; x++) {
            count++;

            if(count == k)
                return x;
        }
        for(int i = 1; i < n; i++) {

            for(int x = arr[i-1] + 1; x < arr[i]; x++) {
                count++;

                if(count == k)
                    return x;
            }
        }
        int x = arr[n-1] + 1;
        while(count < k) {
            count++;
            if(count == k)
                return x;
            x++;
        }

        return -1;
    }
};