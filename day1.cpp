/*PROBLEM: 125. Valid Palindrome (LeetCode)
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.*/

#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(int i = 0;i<s.length();i++){
            if(isalnum(s[i])){
                s2+=tolower(s[i]);
            }
        }

        int len = s2.length();
        for(int i = 0; i<len/2;i++){
            if(s2[i]!=s2[len-1-i]){
                return false;
            }
        }
        return true;
     } 
};

