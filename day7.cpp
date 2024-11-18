/*PROBLEM: LeetCode 2965. Find Missing and Repeated Values
  You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once 
  except a which appears twice and b which is missing. 
  The task is to find the repeating and missing numbers a and b.
  Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.*/

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> count(n*n+1,0);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                count[grid[i][j]]++;
            }
        }
        vector<int> ans(2,0);
        for(int i = 1;i<=n*n;i++){
            if(count[i] == 2){
                ans[0] = i;
            }
            else if(count[i] == 0){
                ans[1] = i;
            }
            if(ans[0] != 0 && ans[1]!=0){
                return ans;
            }
            }
            return ans;
        
    }
};
