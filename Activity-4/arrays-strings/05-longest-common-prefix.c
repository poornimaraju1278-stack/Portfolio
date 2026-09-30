#include <stdio.h>
#include <string.h>

int main() {
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;

    int prefixLength = strlen(strs[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (j < prefixLength && strs[0][j] == strs[i][j]) {
            j++;
        }

        prefixLength = j;
    }

    printf("Longest Common Prefix: ");

    for (int i = 0; i < prefixLength; i++) {
        printf("%c", strs[0][i]);
    }

    printf("\n");

    return 0;
}

/*
Test Case 1 - Typical Case
Input: ["flower", "flow", "flight"]
Expected Output: "fl"

Test Case 2 - Edge Case
Input: ["dog", "racecar", "car"]
Expected Output: ""
*/
