## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting technique to compare the characters in both strings. For every character in the first string, I increase its count, and for every character in the second string, I decrease its count. If all character counts become zero, the two strings are anagrams.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The solution first checks whether both strings have the same length. A single-character case such as `"a"` and `"b"` correctly returns false.
