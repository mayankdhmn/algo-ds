int N = mat.size(), M = mat[0].size();
vector < vector < int > > pre_sum (N + 1, vector < int > (M + 1));

// Building the prefix sum matrix
for (int i = 1; i <= N; i ++)
    for (int j =1; j <= M; j ++)
	pre_sum[i][j]= mat[i - 1][j - 1] + pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];

// Query in a particular range i1, i2, j1, j2
pre_sum[i2+1][j2+1] - pre_sum[i2+1][j1] - pre_sum[i1][j2+1] + pre_sum[i1][j1];

