/*PROBLEM LeetCode 50. Pow(x,n)
  Implement pow(x, n), which calculates x raised to the power n (i.e., xn).*/

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long p = labs(n);
        while(p){
            if(p%2){
                ans*=x;
            }
            x*=x;
            p/=2;
        }
        if(n<0){
            return 1/ans;
        }
        else{
            return ans;
        }
    }
       
};
