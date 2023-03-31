class Solution {
public:
    int dp[39]={0};
    int tribonacci(int n) {
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(n==2)
        return 1;
        if(dp[n]!=0)
        return dp[n];
        else return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};