# BackTracking

## 39. Combination Sum

Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.

Example 1:

Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]

Example 2:

Input: candidates = [2,3,5], target = 8,
A solution set is:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]

## Solution:

Backtracking can be regarded as a Depth-First Search problem. Each possibility is a subtree and they may all have children nodes which
connect with another tree. Therefore, the framework of backtracking method should be following:

        int a[n];
        try(int i)
        {
            if(i>n)
              输出结果;
            else
            {
              for(j = 下界; j <= 上界; j=j+1)  // 枚举i所有可能的路径
              {
                  if(fun(j))                 // 满足限界函数和约束条件
                  {
                     a[i] = j;
                     ...                         // 其他操作
                     try(i+1);
                     回溯前的清理工作（如a[i]置空值等）;
                  }
               }
            }
        }

https://blog.csdn.net/u011956147/article/details/68066304#%E4%BA%8C%E8%B4%AA%E5%BF%83%E7%AE%97%E6%B3%95%E7%9A%84%E5%9F%BA%E6%9C%AC%E6%80%9D%E8%B7%AF

In this problem, our logic is to search from index 0 to vector.size() - 1 to see if it meets requirement.
And the requirement is target >= vector[i]. if requirement is meeted, it will go for another recursion, to see if next value meets
requirement. If not, then return, jump out of this recursion back to the front. 

I have a point of view that each recursion is just like the dream level in "Inception", our goal is to enter the deepest dream level and
make it to jump out of them as well as get the accurate result.
