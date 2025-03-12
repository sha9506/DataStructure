class Solution {
    public:
        string removeDuplicateLetters(string s) {
            unordered_map<char, int> freq;
            unordered_set<char> inStack;
            stack<char> st;
    
            for (char ch : s) {
                freq[ch]++;
            }
    
            for (char ch : s) {
                freq[ch]--;
    
                if (inStack.count(ch))
                    continue;
    
                while (!st.empty() && st.top() > ch && freq[st.top()] > 0 ) {
                    inStack.erase(st.top());
                    st.pop();
                }
    
                st.push(ch);
                inStack.insert(ch);
            }
    
            string result;
            while (!st.empty()) {
                result = st.top() + result;
                st.pop();
            }
    
            return result;
        }
    };