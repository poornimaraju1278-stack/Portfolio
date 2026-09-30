## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position pointer to keep track of where the next non-zero element should be placed. I first move all non-zero elements toward the beginning while maintaining their original order, then fill the remaining positions with zeroes.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The solution preserves the relative order of all non-zero elements. When the array contains only zeroes, the array remains unchanged.
