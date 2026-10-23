class Solution {
public:
    int trap(vector<int>& height) {
        int h = height.size();
        if (h <= 2)
            return 0;
        vector<int> l(h);
        vector<int> r(h);
        int total = 0;
        l[0] = height[0];
        for (int i = 1; i < h; i++) {

            l[i] = max(l[i - 1], height[i]);
        }
        r[h - 1] = height[h - 1];
        for (int i = h - 2; i >=0; i--) {

            r[i] = max(r[i + 1], height[i]);
        }
        for (int i = 0; i < h; i++) {
            total += min(l[i], r[i]) - height[i];
        }
        return total;
    }
};