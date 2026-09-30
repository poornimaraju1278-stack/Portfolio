#include <stdio.h>

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums) / sizeof(nums[0]);

    int position = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < n) {
        nums[position] = 0;
        position++;
    }

    printf("Array after moving zeroes: ");

    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}

/*
Test Case 1 - Typical Case
Input: [0,1,0,3,12]
Expected Output: [1,3,12,0,0]

Test Case 2 - Edge Case
Input: [0,0,0]
Expected Output: [0,0,0]
*/