code_every_day
==============

Code interview questions for Tangtang. Keep practicing everyday and you will succeed!

Resources:
+ [Cracking the coding interviews](http://hawstein.com/posts/ctci-solutions-contents.html)
+ [Hacking Goolge Interview](http://leetcode.com/2010/04/hacking-google-interview-from-mit.html)
+ [Programming interviews exposed](http://searchworks.stanford.edu/view/9863051)

---

### Q9
Given an infinite number of quarters (25 cents), dimes (10 cents), nickels (5 cents) and pennies (1 cent), write code to calculate the number of ways of representing n cents.

---

### Q8
There are n coins in a line. (Assume n is even). Two players take turns to take a coin from one of the ends of the line until there are no more coins left. The player with the larger amount of money wins.

Would you rather go first or second? Does it matter? Assume that you go first, describe an algorithm to compute the maximum amount of money you can win.

[Hint and Analysis](http://leetcode.com/2011/02/coins-in-line.html)

---

### Q7
Rotate a one-dimensional array of n elements to the right by k steps. For instance, with n=7 and k=1, the array {a, b, c, d, e, f, g} is rotated to {b, c, d, e, f, g， a}. If k = 3 instead of 1, then is rotated to {e, f, g, a, b, c, d}. Required in-place rotation method, which means space complexity is O(1).

---

### Q6
Given a target number, and a series of candidate numbers, print out all combinations, so that the sum of candidate numbers equals to the target. Here order is not important, so don’t print the duplicated combination. e.g. target is 7, candidate is 2,3,6,7. Output should be 7 and 3+2+2 (but not print 2+3+2, 2+2+3)

[Hint and Analysis](http://leetcode.com/2010/09/print-all-combinations-of-number-as-sum.html)

---

### Q5
Given a string S, find the longest palindromic substring in S.  O(N2) time complexity. A palindrome is a string which reads the same in both direction. Ex. "aba"

[Here is the solution of O(N2) time and O(1) space](http://leetcode.com/2011/11/longest-palindromic-substring-part-i.html#crayon-52e10cfadb7a7)

---

### Q4
Find the sub array with the biggest sum. E.x. 
+ [-1, 1, 5, 4, -1] => sub array with biggest sum is [1, 5, 4]
+ [-1, 1, 5, 4, -1, 2] => sub array with biggest sum is [1, 5, 4, -1, 2]
