# 1310. XOR Queries of a Subarray

## Question:
A bit flip of a number x is choosing a bit in the binary You are given an array arr of positive integers. You are also given the array queries where queries[i] = [lefti, righti].
<br/>For each query i compute the XOR of elements from lefti to righti (that is, arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti] ).
<br/>Return an array answer where answer[i] is the answer to the ith query.

## Example:
Example 1:
<br/>Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
<br/>Output: [2,7,14,8] 
<br/>Explanation: 
<br/>The binary representation of the elements in the array are:
<br/>1 = 0001 
<br/>3 = 0011 
<br/>4 = 0100 
<br/>8 = 1000 
<br/>The XOR values for queries are:
<br/>[0,1] = 1 xor 3 = 2 
<br/>[1,2] = 3 xor 4 = 7 
<br/>[0,3] = 1 xor 3 xor 4 xor 8 = 14 
<br/>[3,3] = 8
<br/>
<br/>Example 2:
<br/>Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
<br/>Output: [8,0,4,4]


### Constraints:
1 <= arr.length, queries.length <= 3 * 104
<br/>1 <= arr[i] <= 109
<br/>queries[i].length == 2
<br/>0 <= lefti <= righti < arr.length


[Solve this question on leetcode](https://leetcode.com/problems/xor-queries-of-a-subarray/description/)