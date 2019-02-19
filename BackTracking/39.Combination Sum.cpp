/*

39. Combination Sum

Given a set of candidate numbers(candidates) (without duplicates) and a target number(target), 
find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers(including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1 :

	Input : candidates = [2, 3, 6, 7], target = 7,
	A solution set is :
[
	[7],
	[2, 2, 3]
]
Example 2 :

	Input : candidates = [2, 3, 5], target = 8,
	A solution set is :
[
	[2, 2, 2, 2],
	[2, 3, 3],
	[3, 5]
]

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<int>& data, int target, vector<vector<int>>& res, vector<int>& list, int current) {
	if (!target) {
		res.push_back(list);
		return;
	}
	for (int i = current; i != data.size() && target >= data[i]; i++) {
		list.push_back(data[i]);
		backtrack(data, target - data[i], res, list, i);
		list.pop_back();
	}
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	vector<vector<int>> res;
	vector<int> list;
	sort(candidates.begin(), candidates.end());
	backtrack(candidates, target, res, list, 0);
	return res;
}
