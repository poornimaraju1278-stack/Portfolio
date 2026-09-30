#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "anagram";
    char str2[] = "nagaram";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not an Anagram\n");
        return 0;
    }

    int count[256] = {0};

    for (int i = 0; i < len1; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}

/*
Test Case 1 - Typical Case
Input: "anagram", "nagaram"
Expected Output: "Anagram"

Test Case 2 - Edge Case
Input: "a", "b"
Expected Output: "Not an Anagram"
*/