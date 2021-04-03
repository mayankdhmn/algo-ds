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

