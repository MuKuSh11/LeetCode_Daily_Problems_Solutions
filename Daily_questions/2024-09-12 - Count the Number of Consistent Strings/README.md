# 2220. Minimum Bit Flips to Convert Number

## Question:
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.
<br/>Return the number of consistent strings in the array words.



## Example:
Example 1:
<br/>Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
<br/>Output: 2
<br/>Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
<br/>
<br/>Example 2:
<br/>Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
<br/>Output: 7
<br/>Explanation: All strings are consistent.
<br/>
<br/>Example 3:
<br/>Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
<br/>Output: 4
<br/>Explanation: Strings "cc", "acd", "ac", and "d" are consistent.


### Constraints:
1 <= words.length <= 104
<br/>1 <= allowed.length <= 26
<br/>1 <= words[i].length <= 10
<br/>The characters in allowed are distinct.
<br/>words[i] and allowed contain only lowercase English letters.


[Solve this question on leetcode](https://leetcode.com/problems/count-the-number-of-consistent-strings/description/)