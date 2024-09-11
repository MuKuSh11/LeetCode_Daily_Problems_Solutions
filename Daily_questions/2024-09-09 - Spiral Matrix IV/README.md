# 2326. Spiral Matrix IV

## Question:
You are given two integers m and n, which represent the dimensions of a matrix.
<br/>You are also given the head of a linked list of integers.
<br/>Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.
<br/>Return the generated matrix.

## Example:
Example 1:
<br/>Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
<br/>Output: 
<br/>[[3,0,2,6,8]
<br/> [5,0,-1,-1,1]
<br/> [5,2,4,9,7]]
<br/>Explanation: The diagram above shows how the values are printed in the matrix.
<br/>Note that the remaining spaces in the matrix are filled with -1.

<br/>Example 2:
<br/>Input: m = 1, n = 4, head = [0,1,2]
<br/>Output: [[0,1,2,-1]]
<br/>Explanation: The diagram above shows how the values are printed from left to right in the matrix.
<br/>The last space in the matrix is set to -1. 

### Constraints:
1 <= m, n <= 105
<br/>1 <= m * n <= 105
<br/>The number of nodes in the list is in the range [1, m * n].
<br/>0 <= Node.val <= 1000

[Solve this question on leetcode](https://leetcode.com/problems/spiral-matrix-iv/description/)