class Solution {
    private:
        int largestArea(vector<int>& heights) {
            int n = heights.size();
            stack<int> ans;
    
            int maxArea = 0;
    
            for (int i = 0; i <= n; i++) {
                while (!ans.empty() && (i == n || heights[i] < heights[ans.top()])) {
                    int h = heights[ans.top()];
                    ans.pop();
    
                    int w = ans.empty() ? i : (i - ans.top() - 1);
                    maxArea = max(maxArea, h * w);
                }
    
                ans.push(i);
            }
    
            return maxArea;
        }
    
    public:
        int maximalRectangle(vector<vector<char>>& matrix) {
    
            if (matrix.empty())
                return 0;
    
            int row = matrix.size();
            int col = matrix[0].size();
    
            vector<int> heights(col, 0);
    
            int maxArea = 0;
    
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
                }
    
                maxArea = max(largestArea(heights), maxArea);
            }
    
            return maxArea;
        }
    };