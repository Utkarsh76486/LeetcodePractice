class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int totalsum = 0;
        for (int i = 0; i < n; i++) {
            int cur = 0;

            for (int j = i; j < n; j++) {
                cur += arr[j];

                int len = j - i + 1;

                if (len % 2 != 0) {
                    totalsum += cur;
                }
            }
        }
        return totalsum;
    }
};