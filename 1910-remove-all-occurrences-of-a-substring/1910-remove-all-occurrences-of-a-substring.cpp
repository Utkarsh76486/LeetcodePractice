class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans="";
        int x=s.size();
        int y=part.size();
        for(int i=0;i<x;i++){
            ans.push_back(s[i]);

            if(ans.size()>=y){
                if(ans.substr(ans.size() - y) == part){
                    ans.erase(ans.size()-y);

                }

            }
        }
        return ans;

    }
};