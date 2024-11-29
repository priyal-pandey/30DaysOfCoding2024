/*PROBLEM GeeksForGeeks Majority Element II
  You are given an array of integer arr[] where each number represents a vote to a candidate. 
  Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 
  Note: The answer should be returned in an increasing format. */

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        vector<int> major;
        int n = arr.size();
        unordered_map<int,int> count;
        for(int n:arr){
            count[n]++;
        }
        for(auto i:count){
            if(i.second>n/3){
                major.push_back(i.first);
            }
        }
        if(major.size() == 2 && major[0]>major[1]){
            swap(major[0],major[1]);
        }
        return major;
    }
};
