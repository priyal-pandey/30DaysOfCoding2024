'''PROBLEM: LeetCode 3289. The Two Sneaky Numbers of Digitville
  In the town of Digitville, there was a list of numbers called nums containing integers from 0 to n - 1. 
  Each number was supposed to appear exactly once in the list, however, two mischievous numbers sneaked in an additional time, 
  making the list longer than usual. As the town detective, your task is to find these two sneaky numbers. 
  Return an array of size two containing the two numbers (in any order), so peace can return to Digitville. '''

class Solution(object):
    def getSneakyNumbers(self, nums):
        sneaks = []
        nums.sort()
        for i in range(1,len(nums)):
            if(nums[i-1] == nums[i]):
                sneaks.append(nums[i])
        
        return sneaks

