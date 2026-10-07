class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.size();
        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0) {
            st.pop();
            k--;
        }
        string s = "";
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }

        if (s == "") {
            return "0";
        }
        reverse(s.begin(), s.end());
        while (s.size() > 1 && s[0] == '0') {
            s.erase(0, 1);
        }
        return s;
    }
};