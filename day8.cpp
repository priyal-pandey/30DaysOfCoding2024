/*PROBLEM: LeetCode 242. Valid Anagram
  Given two strings s and t, return true if t is an anagram of s, and false otherwise. */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return(s == t);
    }
    return false;
    }
};
//better
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            unordered_map<char,int> count;
            for(auto c:s){
                count[c]++;
            }
            for(auto c:t){
                count[c]--;
            }
            for(auto c: count){
                if(c.second != 0){
                    return false;
                }
            }
            return true;
    }
    return false;
    }
};
