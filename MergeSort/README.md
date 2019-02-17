Merge Sort
====

![img](https://github.com/GhostDragon007/Data-Structure-and-Algorithm/blob/master/MergeSort/MergeSort_eg_gif.gif)

The core of merge sort is the divide and conquer algorithm. 

With a list of vector, what you need to do first is to split it into two parts, and recursively you will get many small lists which only have one element. This is called "Divide". 
Then you have to merge them recursively, which is called "Conquer".

The best / worst / average case of merge sort are O(nlgn), but it needs additional O(n) space to store vectors after doing each merging.

Here's an example:

![image](https://github.com/GhostDragon007/Data-Structure-and-Algorithm/blob/master/MergeSort/mergeSort_eg.PNG)
