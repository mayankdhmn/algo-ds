int mod = 1e9 + 7;

int power(int x, int n){
	ll result = 1;
	while(n){
		if (n&1)
			result = result*x%mod;
		n = n / 2;
		x = x * x % mod;
	}
	return result;
}

