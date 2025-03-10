class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
            stack<int> ans;
            int n = heights.size();
            int maxArea = 0;
    
            for(int i=0; i<=n ;i++)
            {
               while(!ans.empty() && (i==n || heights[i]<heights[ans.top()]))
               {
                    int height = heights[ans.top()];
                    ans.pop();
    
                    int width = ans.empty()? i : (i - ans.top() - 1);
                    maxArea = max(height*width , maxArea);
               }
    
               ans.push(i);
            }
    
            return maxArea;
    
        }
    };