#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "({[]})";

    char stack[100];
    int top = -1;
    int valid = 1;

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                valid = 0;
                break;
            }

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1) {
        valid = 0;
    }

    if (valid) {
        printf("Valid Parentheses\n");
    } else {
        printf("Invalid Parentheses\n");
    }

    return 0;
}

/*
Test Case 1 - Typical Case
Input: "({[]})"
Expected Output: Valid Parentheses

Test Case 2 - Edge Case
Input: "(]"
Expected Output: Invalid Parentheses
*/