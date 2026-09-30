#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 7;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Target index: %d\n", result);

    return 0;
}

/*
Test Case 1 - Typical Case
Input: nums = [1,3,5,7,9,11], target = 7
Expected Output: 3

Test Case 2 - Edge Case
Input: nums = [1,3,5,7,9,11], target = 4
Expected Output: -1
*/