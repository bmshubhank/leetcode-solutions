# Valid Anagram

**Official LeetCode link:** https://leetcode.com/problems/valid-anagram/

## Problem Description

Given two strings `s` and `t`, determine whether `t` is an anagram of `s`. An anagram uses exactly the same letters with the same frequencies.

## Examples

- Input: `s = "anagram"`, `t = "nagaram"` -> Output: `true`
- Input: `s = "a"`, `t = "b"` -> Output: `false`

## Approach

Count how many times each lowercase English letter appears in both strings. Matching strings have identical counts for every letter.

## Step-by-Step Explanation

1. Return `false` if the strings have different lengths.
2. Add one to the count for each letter in `s`.
3. Subtract one for the corresponding letter in `t`.
4. If every count is zero, the strings are anagrams.

## Time Complexity

$O(n)$, where $n$ is the string length.

## Space Complexity

$O(1)$ because the count array always has 26 entries.

## Edge Cases

- Strings of different lengths cannot be anagrams.
- Two identical one-letter strings are valid anagrams.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 03-valid-anagram.c -o 03-valid-anagram
./03-valid-anagram
```

The implementation follows the problem constraint that the input contains lowercase English letters. The `main()` function tests a normal and a non-anagram case.
