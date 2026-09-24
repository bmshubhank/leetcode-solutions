# Longest Common Prefix

**Official LeetCode link:** https://leetcode.com/problems/longest-common-prefix/

## Problem Description

Write a function that finds the longest common prefix shared by all strings in an array. Return an empty string when there is no common prefix.

## Examples

- Input: `["flower","flow","flight"]` -> Output: `"fl"`
- Input: `["dog","racecar","car"]` -> Output: `""`

## Approach

Start with the first string as the possible prefix. Compare it with each later string and shorten the prefix at the first mismatch.

## Step-by-Step Explanation

1. Set the candidate prefix length to the length of the first string.
2. Compare each other string character by character with the first string.
3. Reduce the candidate length at the first mismatch.
4. Return a newly allocated string containing the remaining prefix.

## Time Complexity

$O(S)$, where $S$ is the total number of characters inspected.

## Space Complexity

$O(m)$ for the returned prefix, where $m$ is its length.

## Edge Cases

- An empty input array returns an empty string.
- If the first character differs, the result is empty.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 05-longest-common-prefix.c -o 05-longest-common-prefix
./05-longest-common-prefix
```

The `main()` function tests a shared prefix and an input with no common prefix.
