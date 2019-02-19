/*

216. Combination Sum III

Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.

Note:

All numbers will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Example 2:

Input: k = 3, n = 9
Output: [[1,2,6], [1,3,5], [2,3,4]]

*/


#include <vector>
using namespace std;

vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(res, temp, k, n, 1);
        return res;
    }
	
void backtrack(vector<vector<int>>& res, vector<int>& temp, int k, int n, int curr){
    if(temp.size() == k){
        if(n == 0){
                res.push_back(temp);
            return;
        }
        for(int i = curr; i < 10 && n >= i; i++){
            temp.push_back(i);
            backtrack(res, temp, k, n - i, i + 1);
            temp.pop_back();
        }    
    }   
}	