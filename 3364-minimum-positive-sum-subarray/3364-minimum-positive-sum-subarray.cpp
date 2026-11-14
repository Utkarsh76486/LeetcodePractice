class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int currsum=0;

            for(int j=i;j<n;j++){
                currsum+=nums[j];
                int len=j-i+1;

                if(len>=l && len<=r){
                    if(currsum>0){
                        minsum=min(minsum,currsum);
                    }
                }
            }

        }
        if(minsum==INT_MAX) return -1;
        else 
        return minsum;
    }
};