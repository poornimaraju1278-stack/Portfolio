#include <stdio.h>

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}

/*
Test Case 1 - Typical Case
Input: [7,1,5,3,6,4]
Expected Output: 5

Test Case 2 - Edge Case
Input: [7,6,4,3,1]
Expected Output: 0
*/