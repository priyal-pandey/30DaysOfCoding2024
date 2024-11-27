/*PROBLEM GeeksForGeeks Maximum Product Subarray
  Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr.
  Note: It is guaranteed that the output fits in a 32-bit integer. */

class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        int currMax = arr[0];
        int currMin = arr[0];
        int maxProd = arr[0];
        
        for(int i = 1;i<n;i++){
            
            int temp = max({arr[i],currMax*arr[i],currMin*arr[i]});
            currMin = min({arr[i],currMax*arr[i],currMin*arr[i]});
            currMax = temp;
            
            maxProd = max({currMax,maxProd});
        }
        return maxProd;
        
        }
    
};
