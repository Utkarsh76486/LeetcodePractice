class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int ans=0;
        int s1=s.size();
        for(int i=0;i<s1;i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    ans++;
                }
            }
        }
        ans+=st.size();
        return ans;
    }
};