bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int N = matrix.size();
    if (N <= 0)
        return 0;
    int M = matrix[0].size();
    int i = 0, j = M - 1;
    while (i <= N - 1 && j >= 0){
        if (target > matrix[i][j]){
            i += 1;
        }
        else if (target < matrix[i][j]){
            j -= 1;
        }
        else {
            return true;
        }
    }
    return false;
