# Heap Sort

Heap sort is a sorting method whose time complexity is also O(nlgn).

There are 3 steps to do heap sort. First you need to define a function called "heapify", which is to compare the current node with its left
and right node, then put the maximum node to the current place.
Second, a function named "buildHeap" should be implemented, which recursively calls the heapify function applied on each node which has at
least one child node.
Last, do heap sort. one trait of a heap is that every node is definitely greater than its children. Therefore, the root node must be the
greatest. Swap root node and the last child node, apply heapify on the new root node. Repeat above procedure recursively, finally you will
get a ascendant sorted vector.

Here's also a example:

![img](https://github.com/GhostDragon007/Data-Structure-and-Algorithm/blob/master/HeapSort/heapSort_eg1.PNG)
![img](https://github.com/GhostDragon007/Data-Structure-and-Algorithm/blob/master/HeapSort/heapSort_eg2.PNG)

