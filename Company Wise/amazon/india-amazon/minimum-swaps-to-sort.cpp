int minimumSwaps(vector<int> arr) {
    vector < bool > vis(arr.size(), false);
    int result = 0;
    for (int i = 1; i < int(arr.size()); i ++){
        if (!vis[i]){
            int len = 0, j = arr[i] - 1;
            vis[i] = 1;
            while (j != i){
                vis[j] = 1;
                j = arr[j] - 1;
                len += 1;
            }
            result += len;
        }
    }
    return result;
}
