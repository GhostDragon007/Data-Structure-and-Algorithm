/*

40. Combination Sum II

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

Each number in candidates may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8,
A solution set is:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5,
A solution set is:
[
  [1,2,2],
  [5]
]

*/

#include <vector>
using namespace std;

void backtrack(vector<int>& data, int target, vector<vector<int>>& res, vector<int>& list, int current) {
	if (!target) {
		res.push_back(list);
		return;
	}
	for (int i = current; i < data.size() && target >= data[i]; i++) {
		if (i == current || data[i] != data[i - 1]) {
			list.push_back(data[i]);
			backtrack(data, target - data[i], res, list, i + 1);
			list.pop_back();
		}
	}
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
	vector<vector<int>> res;
	vector<int> list;
	sort(candidates.begin(), candidates.end());
	backtrack(candidates, target, res, list, 0);
	return res;
}