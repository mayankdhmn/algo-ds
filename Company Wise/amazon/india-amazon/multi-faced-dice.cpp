// Multifaced dice

int mod = 1e9 + 7, cache[30][1001];

int dp(int i, int curr, int &d, int &f){
    if (curr < 0)
        return false;
    if (i == d)
        return (curr == 0);
    if (cache[i][curr] != -1)
        return cache[i][curr];
    long long result = 0;
    for (int go = f; go >= 1; go --){
        result += dp(i + 1, curr - go, d, f);
        result %= mod;
    }
    return cache[i][curr] = result;
}

int numRollsToTarget(int d, int f, int target) {
    memset(cache, -1, sizeof cache);
    return dp(0, target, d, f);
}