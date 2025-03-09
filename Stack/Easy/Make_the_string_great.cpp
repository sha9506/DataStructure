class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];
            if(!st.empty() && abs(st.top()-c)==32)
            {
                st.pop();
            }
            else{
                st.push(c);
            }
        }

       string ans;
       while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};