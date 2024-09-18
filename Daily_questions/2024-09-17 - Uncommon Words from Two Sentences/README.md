# 884. Uncommon Words from Two Sentences

## Question:
A sentence is a string of single-space separated words where each word consists only of lowercase letters.
<br/>A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
<br/>Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.



## Example:
Example 1:
<br/>Input: s1 = "this apple is sweet", s2 = "this apple is sour"
<br/>Output: ["sweet","sour"]
<br/>Explanation:
<br/>The word "sweet" appears only in s1, while the word "sour" appears only in s2.
<br/>Example 2:
<br/>Input: s1 = "apple apple", s2 = "banana"
<br/>Output: ["banana"]




### Constraints:
1 <= s1.length, s2.length <= 200
<br/>s1 and s2 consist of lowercase English letters and spaces.
<br/>s1 and s2 do not have leading or trailing spaces.
<br/>All the words in s1 and s2 are separated by a single space.


[Solve this question on leetcode](https://leetcode.com/problems/uncommon-words-from-two-sentences/description/)