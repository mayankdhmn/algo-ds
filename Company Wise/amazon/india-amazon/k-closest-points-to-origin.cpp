// Or warehouse problem

bool compare(vector < int > x, vector < int > y){
    long long distance_x = (x[0]*x[0]) + (x[1]*x[1]); 
    long long distance_y = (y[0]*y[0]) + (y[1]*y[1]); 
    return (distance_x <= distance_y);        
}

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    partial_sort(points.begin(), points.begin() + k, points.end(), compare);
    return vector < vector < int > > (points.begin(), points.begin() + k); 
}
