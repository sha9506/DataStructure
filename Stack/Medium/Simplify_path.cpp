class Solution {
public:
    string simplifyPath(string path) {

        vector<string> stack;
        stringstream ss(path);

        string part;

        while (getline(ss, part, '/')) {
            if (part.empty() || part == ".")  
                continue;

            if (part == "..") {
                if (!stack.empty())
                    stack.pop_back();
            } else {
                stack.push_back(part);
            }
        }

        string ans = "/";
        for (int i = 0; i < stack.size(); i++) {
            ans += stack[i];

            if (i < stack.size() - 1)
                ans += "/";
        }

        return ans;
    }
};