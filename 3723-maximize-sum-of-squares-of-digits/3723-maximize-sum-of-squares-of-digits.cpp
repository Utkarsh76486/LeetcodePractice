class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";

        for (int i = 0; i < num; i++) {
            int cur = min(9, sum);
            ans+= char('0' + cur);
            sum -= cur;
        }
        if (sum > 0) {
            return "";
        }
        return ans;
    }
};