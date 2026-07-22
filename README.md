# Moglix Online Shortlisting Round

## Longest Valid Parentheses

This repository contains my solution for the programming problem provided in the Moglix Online Shortlisting Round.

### Problem Statement

Given a string containing only the characters `(` and `)`, return the length of the longest valid (well-formed) parentheses substring.

### Examples

- Input: `(()`  
  Output: `2`

- Input: `)()())`  
  Output: `4`

- Input: `""`  
  Output: `0`

### Approach

The solution uses a stack to store indices of parentheses. A base index of `-1` is initially pushed onto the stack. While traversing the string, indices of opening parentheses are stored, and when a closing parenthesis is encountered, the stack is updated to calculate the length of valid substrings.

### Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

### Language

C++
