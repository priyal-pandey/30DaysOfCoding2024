/*PROBLEM : GeeksForGeeks- Move all zeros to End of array
  Given an array arr[]. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. 
  Do the mentioned change in the array in place. */

  class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int count = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[count++]);
            }
        }
    }
};

