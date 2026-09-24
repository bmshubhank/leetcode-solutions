# Reverse a String

**Official LeetCode link:** https://leetcode.com/problems/reverse-string/

## Problem Description

Write a function that reverses an array of characters in place.

## Examples

- Input: `['h','e','l','l','o']` -> Output: `['o','l','l','e','h']`
- Input: `['a']` -> Output: `['a']`

## Approach

Use two pointers. Swap the characters at the left and right ends, then move both pointers toward the center.

## Step-by-Step Explanation

1. Set `left` to the first index and `right` to the last index.
2. Swap the two characters.
3. Move `left` forward and `right` backward.
4. Stop when the pointers meet or cross.

## Time Complexity

$O(n)$ because each character is visited at most once.

## Space Complexity

$O(1)$ extra space because the array is reversed in place.

## Edge Cases

- An empty string needs no swaps.
- A one-character string is already reversed.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 02-reverse-a-string.c -o 02-reverse-a-string
./02-reverse-a-string
```

The `main()` function tests a normal string and a one-character edge case.
