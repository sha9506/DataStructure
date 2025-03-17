class Solution {
    public:
        vector<int> deckRevealedIncreasing(vector<int>& deck) {
            deque<int> dq;
            int n = deck.size();
    
            sort(deck.begin(), deck.end());
    
            for(int i=n-1; i>=0; i--)
            {
                if(!dq.empty())
                {
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
                dq.push_front(deck[i]);
            }
    
            return vector<int>(dq.begin(), dq.end());
        }
    };