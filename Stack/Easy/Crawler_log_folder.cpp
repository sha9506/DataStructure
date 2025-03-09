class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int> ans;

        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i]== "./") continue;

            if(logs[i] == "../")
            {
                if(!ans.empty())
                {
                    ans.pop();
                }
            }
            else
            {
                ans.push(i);
            }
        }

        return ans.size();
    }
};