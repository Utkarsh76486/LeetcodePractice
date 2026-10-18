class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool broken[26] = {};

        int x = text.size();
        int y = brokenLetters.size();
        for (int i = 0; i < y; i++) {
            broken[brokenLetters[i] - 'a'] = true;
        }
        int ans = 0;
        bool ok = true;

        for (int i = 0; i <= x; i++) {
            if (i == x || text[i] == ' ') {
                if (ok)
                    ans++;
                ok = true;
            } else if (broken[text[i] - 'a']) {
                ok = false;
            }
        }

        return ans;
    }
};