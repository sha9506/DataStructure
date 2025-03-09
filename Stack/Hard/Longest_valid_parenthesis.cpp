class Solution {
public:
    int longestValidParentheses(string s) {

        int n = s.size();
        stack<int> result;
        result.push(-1);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                result.push(i);
            } else {
                result.pop();
                if (result.empty()) {
                    result.push(i);
                } else {
                    count = max(count, i - result.top());
                }
            }
        }
        return count;
    }
};