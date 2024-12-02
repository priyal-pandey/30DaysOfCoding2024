/* PROBLEM GeeksForGeeks Non-Repeating Character
  Given a string s consisting of lowercase Latin Letters. Return the first non-repeating character in s. If there is no non-repeating character, return '$'.
  Note: When you return '$' driver code will output -1. */

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int> count;
        for(auto c:s){
            count[c]++;
        }
        for(auto c:s){
            if(count[c] == 1){
                return c;
            }
        }
        return '$';
    }
};
