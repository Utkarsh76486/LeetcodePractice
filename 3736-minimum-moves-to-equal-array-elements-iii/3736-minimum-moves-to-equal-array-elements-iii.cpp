class Solution {
public:
    int minMoves(vector<int>& nums) {
       int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxi=nums[n-1];

        int step = 0;
        for (int i = 0; i < nums.size(); i++) {
            step += maxi-nums[i];
        }
        return step; 
    }
};