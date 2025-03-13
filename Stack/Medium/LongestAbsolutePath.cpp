class Solution {
public:
    int lengthLongestPath(string input) {
        stack<int> st;
        int maxlen =0;
        stringstream ss(input);
        string line;

        while(getline(ss , line , '\n'))
        {
            int depth = line.find_last_of('\t') + 1;

            string name = line.substr(depth);

            while(st.size() > depth ) st.pop();

            int curlen = (st.empty() ? 0 : st.top()) + name.size() + 1;

            if(name.find('.') != string::npos)
            {
                maxlen = max(maxlen , curlen-1);
            }
            else
            {
                st.push(curlen);
            }
        }

        return maxlen;
    }
};