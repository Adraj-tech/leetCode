class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int m = requests.size();
        int atFloor = 0;
        int time = 0;
        for (int i = 0; i < m; i++) {
            time = time + abs(atFloor - requests[i]);
            atFloor = requests[i];
        }
        return time;
    }
};