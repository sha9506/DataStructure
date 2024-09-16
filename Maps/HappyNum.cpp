/*Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
Example 2:

Input: n = 2
Output: false */



class Solution {
public:
    int squareSum(int n)
    {
        int sum = 0;
        while(n>0)
        {
            int digit = n%10;
            sum =sum + (digit*digit);
            n = n/10;
        }

        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> mp;

        while(n!=1 && mp.find(n)==mp.end())
        {
            mp.insert(n);
            n = squareSum(n);
        }

        return n==1;
    }
};