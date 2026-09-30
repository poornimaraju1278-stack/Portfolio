## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array. Two pointers represent the current search range, and the middle element is checked against the target. If the middle element is smaller or larger than the target, the search range is reduced accordingly.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

Binary search requires the input array to be sorted. If the target is not present in the array, the algorithm returns `-1`.
