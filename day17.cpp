/*PROBLEM LeetCode 53.Maximum Subarray
  Given an integer array nums, find the subarray with the largest sum, and return its sum.*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT32_MIN;
        int sum = 0;
        for(int i:nums){
            sum += i;
            if(sum>maxSum){
                maxSum = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
      return maxSum;  
    }
};
