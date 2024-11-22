/*PROBLEM LeetCode 151. Reverse Words in a String
  Given an input string s, reverse the order of the words.
  A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
  Return a string of the words in reverse order concatenated by a single space.
  Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have 
  a single space separating the words. Do not include any extra spaces.*/

 class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        vector<string> words;
        string w = "";
        for(char c:s){
            if(c == ' ' && w!=""){
                words.push_back(w);
                w = "";
            }
            else if(c!=' '){
                w+=c;
            }
        }
        string rev = "";
        for(int i = words.size()-1;i>=0;i--){
            if(i!=0){
                rev += words[i]+" ";
            }
            else{
                rev +=words[i];
            }
        }
        return rev;     
      }     
};


 
