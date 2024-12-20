/* PROBLEM LeetCode  1512. Number of Good Pairs
  Given an array of integers nums, return the number of good pairs.
  A pair (i, j) is called good if nums[i] == nums[j] and i < j. */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count; 
    }
};
