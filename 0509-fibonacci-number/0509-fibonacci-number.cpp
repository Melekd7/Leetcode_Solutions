class Solution {
public:
    int fib(int n) {
       /* vector <int> dp(n+1,-1);
        if(dp[n]!=-1){
            return dp[n];
        }
        else{
            if(n<=1){
                return dp[n]=n;
            }
            else{
             dp[n]=fib(n-1)+fib(n-2);  
        } return dp[n];}
        */
        if(n<=1){
            return n;
        }
        else{

            return fib(n-1)+fib(n-2);
        }
   }
};