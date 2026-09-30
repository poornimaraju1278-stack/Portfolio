## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach to find the maximum possible profit. I keep track of the minimum stock price seen so far and calculate the profit that would be obtained by selling at each current price. The maximum profit found during the scan is returned.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

If the stock price continuously decreases, no profitable transaction is possible, so the answer is 0. For example, `[7,6,4,3,1]` gives a maximum profit of 0.
