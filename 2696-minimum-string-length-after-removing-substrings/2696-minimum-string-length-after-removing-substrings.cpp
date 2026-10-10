class Solution {
public:
    int minLength(string s) {
        stack<int> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char curr = s[i];
            if (!st.empty() && ((st.top() == 'A' && curr == 'B') ||
                                (st.top() == 'C' && curr == 'D'))) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};