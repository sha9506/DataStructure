class MyQueue {
    private:
        stack<int> st1 , st2;
    public:
        MyQueue() {
            
        }
        
        void push(int x) {
            st1.push(x);
        }
        
        int pop() {
            if(st2.empty())
            {
                while(!st1.empty())class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;

        for(char  c : s)
        {
            freq[c]++;
        }

        for(int i=0; i<s.size(); i++)
        {
            if(freq[s[i]]==1)
            {
                return i;
            }
        }

        return -1;
    }
};
                {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
    
            int t = st2.top();
            st2.pop();
            return t;
        }
        
        int peek() {
            if(st2.empty())
            {
                while(!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
           return st2.top();
        }
        
        bool empty() {
            return st2.empty() && st1.empty();
        }
    };
    
    /**
     * Your MyQueue object will be instantiated and called as such:
     * MyQueue* obj = new MyQueue();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->peek();
     * bool param_4 = obj->empty();
     */