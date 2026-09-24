# Best Time to Buy and Sell Stock

**Official LeetCode link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Description

Given an array where `prices[i]` is the price of a stock on day `i`, choose one day to buy and a later day to sell for the greatest possible profit. If no profit is possible, return zero.

## Examples

- Input: `[7,1,5,3,6,4]` -> Output: `5`
- Input: `[7,6,4,3,1]` -> Output: `0`

## Approach

Scan the prices once while tracking the lowest price seen so far and the greatest profit found so far.

## Step-by-Step Explanation

1. Treat the first price as the current minimum.
2. For each later price, calculate the profit from selling that day.
3. Update the best profit if this profit is larger.
4. Update the minimum price when a lower price is found.

## Time Complexity

$O(n)$ because the array is scanned once.

## Space Complexity

$O(1)$ extra space.

## Edge Cases

- A decreasing price sequence returns zero.
- The selling day must come after the buying day.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 04-best-time-to-buy-and-sell-stock.c -o 04-best-time-to-buy-and-sell-stock
./04-best-time-to-buy-and-sell-stock
```

The `main()` function tests a profitable sequence and a sequence where no profit is possible.
