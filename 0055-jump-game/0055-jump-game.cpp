class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxy=0;
        for(int i=0;i<n;i++){
            if(i>maxy){
                return false;
            }
            maxy=max(maxy,i+nums[i]);
            if(maxy>=n-1){
                return true;
            }
        }
        return false;
    }
};