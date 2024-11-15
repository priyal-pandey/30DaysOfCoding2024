/*PROBLEM:  LeetCode 169.Majority Element
 Given an array nums of size n, return the majority element.The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/
 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = -1, count = 0;
        for(auto num:nums){
            if(num == maj){
                count++;
            }
            else{
                count--;
            }
            if(count<0){
                maj = num;
                count = 1;
            }
        }
        return maj;  
    }
};
