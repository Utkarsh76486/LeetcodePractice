class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N = nums.size();
        stack<int> st;
        vector<int> nge(N, -1);

        for (int i = 2 * N - 1; i >= 0; i--) {
            while (st.size() && st.top() <= nums[i % N]) {
                st.pop();
            }
            if (i < N) {
                nge[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i % N]);
        }

        return nge;
    }
};