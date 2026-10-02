class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        int n = asteroids.size();

        for (int i = 0; i < n; i++) {
            int curr = asteroids[i];
            while (!st.empty() && st.back() > 0 && curr < 0) {
                if (-curr > st.back()) {
                    st.pop_back();
                } else if (-curr == st.back()) {
                    st.pop_back();
                    curr = 0;
                } else {
                    curr = 0;
                }
            }
            if (curr) {
                st.push_back(curr);
            }
        }
        return st;
    }
};