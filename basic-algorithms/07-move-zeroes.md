# Move Zeroes

**Official LeetCode link:** https://leetcode.com/problems/move-zeroes/

## Problem Description

Move all zeroes in an integer array to the end while keeping the relative order of the non-zero elements. The operation must be performed in place.

## Examples

- Input: `[0,1,0,3,12]` -> Output: `[1,3,12,0,0]`
- Input: `[0,0,0]` -> Output: `[0,0,0]`

## Approach

Keep an index for the next position where a non-zero value belongs. Scan the array and swap each non-zero value into that position.

## Step-by-Step Explanation

1. Set `nextNonZero` to zero.
2. Scan every array element.
3. When a non-zero value is found, swap it with the value at `nextNonZero`.
4. Advance `nextNonZero`.
5. All remaining positions contain zeroes.

## Time Complexity

$O(n)$.

## Space Complexity

$O(1)$ extra space.

## Edge Cases

- An array containing only zeroes remains unchanged.
- An array with no zeroes remains unchanged.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 07-move-zeroes.c -o 07-move-zeroes
./07-move-zeroes
```

The `main()` function tests a mixed array and an all-zero array.
