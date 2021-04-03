vector < int > A(N); // Given Array
vector < int > pref_sum(N + 1);
for (int i = 1; i < N + 1; i ++)
	pref_sum[i] = pref_sum[i - 1] + A[i - 1];

Range Query: i1, i2
Sum in Range: pref_sum[i2 + 1] - pref_sum[i1];
