#include <stdio.h>

int maxProfit(const int *prices, int pricesSize) {
    int minimumPrice = prices[0];
    int bestProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        int currentProfit = prices[i] - minimumPrice;

        if (currentProfit > bestProfit) {
            bestProfit = currentProfit;
        }
        if (prices[i] < minimumPrice) {
            minimumPrice = prices[i];
        }
    }

    return bestProfit;
}

int main(void) {
    int normal[] = {7, 1, 5, 3, 6, 4};
    int edge[] = {7, 6, 4, 3, 1};

    printf("Normal case: %d\n", maxProfit(normal, 6));
    printf("Edge case: %d\n", maxProfit(edge, 5));

    return 0;
}
