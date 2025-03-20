class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> index;
            int left = 0;
            int maxlen = 0;

            for(int i=0; i<s.size(); i++)
            {
                char c = s[i];

                if(index.find(c) != index.end())
                {
                    left = max(left, index[c]+1);
                }

                index[c] = i;
                maxlen = max(maxlen, i-left + 1);
            }

            return maxlen;
        }
    };