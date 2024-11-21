/*PROBLEM: LeetCode 540.Single Element in a Sorted Array
  You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
  Return the single element that appears only once.
  Your solution must run in O(log n) time and O(1) space. */

  class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n-1;i+=2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        return nums[n-1];
