# Two Sum

**Official LeetCode link:** https://leetcode.com/problems/two-sum/

## Problem Description

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to `target`. Each input has exactly one solution, and the same element cannot be used twice.

## Examples

- Input: `nums = [2,7,11,15]`, `target = 9` -> Output: `[0,1]`
- Input: `nums = [3,3]`, `target = 6` -> Output: `[0,1]`

## Approach

Check every pair of numbers with two nested loops. Return the first pair whose sum equals the target.

## Step-by-Step Explanation

1. Start with the first number.
2. Compare it with every number after it.
3. If their sum equals `target`, return both indices.
4. Continue until a matching pair is found.

## Time Complexity

$O(n^2)$ because all pairs may be checked.

## Space Complexity

$O(1)$ extra space, apart from the returned two-element array.

## Edge Cases

- The matching numbers can be equal, but they must be at different indices.
- The answer may use the first and last elements.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 01-two-sum.c -o 01-two-sum
./01-two-sum
```

The `main()` function tests a normal input and a duplicate-value edge case.
