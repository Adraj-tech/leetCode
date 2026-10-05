class Solution {
public:
    int maximumSwap(int num) {
        
        string s = to_string(num);
        int n = s.size();

        // Har digit ki last occurrence
        vector<int> last(10, -1);

        for (int i = 0; i < n; i++) {
            last[s[i] - '0'] = i;
        }

        // Left se right check
        for (int i = 0; i < n; i++) {

            // Current digit se bada digit right side mein dhundo
            for (int d = 9; d > s[i] - '0'; d--) {

                if (last[d] > i) {
                    swap(s[i], s[last[d]]);

                    return stoi(s);
                }
            }
        }

        return num;
    }
};