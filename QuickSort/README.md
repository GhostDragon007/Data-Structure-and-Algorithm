Quick Sort
====

Quick sort is also a recursive method. First you have to set a pivot node (I'd like to appoint the right most node as the pivot) and 
start to scan the vector list, by the time you find a node value which is smaller or equal to pivot, you put it to the leftmost, for those
which are greater, you do the opposite way (put to rightmost). After scanning whole list, put the pivot node to where left nodes are smaller
and right are larger. Apply above procedures to left subvector and right subvector respectively and recursively.

Quick sort is a quick sorting method whose time complexity is only O(nlgn), it is also the same with merge sort and heap sort. However,
one disadvantage of quick sort is that its worst case's complexity can be up to O(n^2) and it's not stable (it might change the order of
two exact equivalent nodes) 
Oppositely it has a good thing that quick sort doesn't need additional space, in other words its space complexity is O(1).

Here's an example to help illustration:

![img](https://github.com/GhostDragon007/Data-Structure-and-Algorithm/blob/master/QuickSort/QuickSort_eg1.PNG)
![img](https://github.com/GhostDragon007/Data-Structure-and-Algorithm/blob/master/QuickSort/QuickSort_eg2.
