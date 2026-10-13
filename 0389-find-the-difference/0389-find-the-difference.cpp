class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26, 0);
        int s1 = s.size();
        int s2=t.size();
        for(int i = 0; i < s1; i++) {
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < s2; i++) {
            freq[t[i] - 'a']--;

            if (freq[t[i] - 'a'] < 0) {
                return t[i];
            }
        }
        return ' ';
    }
    };
