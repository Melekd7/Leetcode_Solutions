class Solution {
    vector <int> dp;
public:
    int fib(int n) {
        if ((int)dp.size() < n+1) dp.assign(n+1, -1);
        if (dp[n] != -1) return dp[n];
        if (n <= 1) return dp[n] = n;
        return dp[n] = fib(n-1) + fib(n-2);
   }
};