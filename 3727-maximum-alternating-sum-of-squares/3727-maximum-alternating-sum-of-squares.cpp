class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(),[](int a, int b) {
            return abs(a) < abs(b);
        });
        int n = nums.size();
        long long res = 0;
        for (int i = 0; i < n/2; i++) {
            long long sq = 1LL * nums[i] * nums[i];
            res-=sq;
        }
        for(int i=n/2;i<n;i++){
           long long sq = 1LL * nums[i] * nums[i];
            res+=sq;
    }
      return res;
    }
};