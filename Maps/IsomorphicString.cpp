
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"

// Output: true




class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!= t.size())
        {
            return false;
        }

        unordered_map<char , char> mpST;
        unordered_map<char , char> mpTS;

        for(int i=0; i<s.length(); i++)
        {
            char charS = s[i];
            char charT = t[i];

            if(mpST.count(charS))
            {
                if(mpST[charS]!= charT)
                {
                    return false;
                }
            }
            else
            {
                mpST[charS] = charT;
            }

            if(mpTS.count(charT))
            {
                if(mpTS[charT]!= charS)
                {
                    return false;
                }
            }
            else
            {
                mpTS[charT] = charS;
            }
        }

        return true;
       
    }
};