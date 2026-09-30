## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer technique to reverse the string in place. One pointer starts from the beginning of the string and the other starts from the end. Their characters are swapped while the pointers move toward the middle.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The solution works for both even and odd-length strings. For a single-character string, no swap is required because the string is already reversed.
