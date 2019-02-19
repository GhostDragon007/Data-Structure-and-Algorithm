/*

77. Combinations

Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

Example:

Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]

*/

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(res, temp, n, k, 1);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, vector<int>& temp, int n, int k, int curr){
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }
        for(int i = curr; i <= n; i++){
            if(i == curr && temp.size() + n - curr + 1 < k)
                return;
            temp.push_back(i);
            backtrack(res, temp, n, k, i + 1);
            temp.pop_back();
        }
    }
};