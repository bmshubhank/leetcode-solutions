# Binary Search

**Official LeetCode link:** https://leetcode.com/problems/binary-search/

## Problem Description

Given a sorted array of distinct integers and a target value, return the target's index. Return `-1` when the target is not present.

## Examples

- Input: `[-1,0,3,5,9,12]`, target `9` -> Output: `4`
- Input: `[-1,0,3,5,9,12]`, target `2` -> Output: `-1`

## Approach

Use binary search to repeatedly discard half of the remaining sorted range.

## Step-by-Step Explanation

1. Set `left` to the first index and `right` to the last index.
2. Check the middle element.
3. If it is the target, return its index.
4. If it is smaller, search the right half; otherwise search the left half.
5. Return `-1` when the range becomes empty.

## Time Complexity

$O(\log n)$.

## Space Complexity

$O(1)$ extra space.

## Edge Cases

- The target may be absent.
- The target may be the first or last element.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 06-binary-search.c -o 06-binary-search
./06-binary-search
```

The `main()` function tests a found target and a missing target.
