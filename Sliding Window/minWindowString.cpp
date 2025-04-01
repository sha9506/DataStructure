class Solution {
    public:
        string minWindow(string s, string t) {
            if (t.size() > s.size())
                return "";
    
            unordered_map<char int> targetFreq , windowFreq;
            
            for(char c : t)
            {
                targetFreq[c]++;
            }

            int left = 0;
            int count = 0;
            int i =0;
            int minlen = INT_MAX;

            for(int right =0; right<s.size(); right++)
            {
                char c = s[right];
                windowFreq[c]++;

                if(targetFreq[c]> 0 && windowFreq[c] <= targetFreq[c])
                {
                    count++;
                }

                while(count == t.size())
                {
                    if((right-left+1) < minlen)
                    {
                        minlen = right - left +1;
                        i = left;
                    }

                    char leftChar = s[left];
                    windowFreq[leftChar]--;

                    if(targetFreq[leftChar] > 0 && windowFreq[leftChar] < targetFreq[leftChar])
                    {
                        count--;
                    }

                    left++;
                }
            }

            return minlen == INT_MAX ? "" : s.substr(i, minlen);
        }
    };