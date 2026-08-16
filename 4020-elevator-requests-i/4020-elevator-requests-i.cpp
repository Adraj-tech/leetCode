class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {int time = 0;
        int atFloor = 0;
        for (int floor : requests) {
            time += abs(atFloor - floor);
            atFloor = floor;
        }
        return time;

    }
};