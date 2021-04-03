
#define ll long long

ll mod = 1e9 + 7;

ll power(ll x, ll n){
	ll result = 1;
	while(n){
		if (n&1)
			result = result*x%mod;
		n = n / 2;
		x = x * x % mod;
	}
	return result;
}

ll modInverse(ll n, ll p) { 
    return power(n, p - 2); 
} 
  
ll fermat(ll n, ll r, ll p) { 
    if (r == 0) 
        return 1; 
    ll fac[n + 1]; 
    fac[0] = 1; 
    for (ll i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
}

