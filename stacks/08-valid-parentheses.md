# Valid Parentheses

**Official LeetCode link:** https://leetcode.com/problems/valid-parentheses/

## Problem Description

Given a string containing `()`, `[]`, and `{}`, determine whether every opening bracket is closed by the correct type in the correct order.

## Examples

- Input: `"()[]{}"` -> Output: `true`
- Input: `"("` -> Output: `false`

## Approach

Use a stack. Push opening brackets and, for each closing bracket, verify that it matches the most recent opening bracket.

## Step-by-Step Explanation

1. Create an empty stack.
2. Push every opening bracket.
3. For a closing bracket, return `false` if the stack is empty or its top does not match.
4. Pop a matching opening bracket.
5. The string is valid only when the stack is empty at the end.

## Time Complexity

$O(n)$.

## Space Complexity

$O(n)$ in the worst case for the stack.

## Edge Cases

- A closing bracket with no opening bracket is invalid.
- An unfinished opening bracket is invalid.
- An empty string is valid under the problem definition.

## Local Testing Information

Compile and run with:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 08-valid-parentheses.c -o 08-valid-parentheses
./08-valid-parentheses
```

The `main()` function tests a correctly matched sequence and an unfinished opening bracket.
