/*PROBLEM: LeetCode 14. Longest Common Prefix
  Write a function to find the longest common prefix string amongst an array of strings.
  If there is no common prefix, return an empty string "". */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        int n = strs.size();
        sort(strs.begin(),strs.end());
        for(int i = 0;i<min(strs[0].size(),strs[n-1].size());i++){
            if(strs[0][i]!=strs[n-1][i]){
                return pre;
            }
            pre+=strs[0][i];
        }
        return pre;
        
    }
};
