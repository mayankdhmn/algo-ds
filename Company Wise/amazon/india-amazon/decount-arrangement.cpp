// A permutation such that no element appears in its original position.

int findDerangement(int n) {
    vector < long long > dp(n + 1);
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
    int mod = 1e9 + 7;
    for (int i = 3; i <= n; i ++)
        dp[i] = ((i - 1) * ((dp[i - 2] + dp[i - 1])%mod))%mod;
    return dp[n];
}