## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used the first string as the initial prefix and compared it character by character with each of the remaining strings. Whenever the characters stopped matching, I reduced the prefix length. After checking all strings, the remaining characters form the longest common prefix.

### Complexity

* Time: O(n × m)
* Space: O(1)

### Notes

If the strings have no characters in common, the result is an empty string. For example, `["dog", "racecar", "car"]` has no common prefix.
