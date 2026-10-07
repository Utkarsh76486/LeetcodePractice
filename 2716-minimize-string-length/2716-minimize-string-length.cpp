class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> mp;
        for(int i=0;i<s.size();i++){
            mp.insert(s[i]);
        }
        return mp.size();
    }
};