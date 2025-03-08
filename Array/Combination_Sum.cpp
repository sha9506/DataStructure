class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;

        backtrack(0, target, candidates, result, ds);
        return result;
    }

    void backtrack(int index, int target, vector<int>& candidates,
                   vector<vector<int>>& result, vector<int>& ds) {

        if (index == candidates.size()) {
            if (target == 0) {
                result.push_back(ds);
            }
            return;
        }

        if (candidates[index] <= target) {
            ds.push_back(candidates[index]);
            backtrack(index, target - candidates[index], candidates, result,
                      ds);
            ds.pop_back();
        }

        backtrack(index + 1, target, candidates, result, ds);
    }
};