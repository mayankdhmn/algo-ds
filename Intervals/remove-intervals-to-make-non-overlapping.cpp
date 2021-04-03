// Remove minimum amount of intervals to make all intervals non overlapping
// Greedy Solution
class Solution {    
public:    
    static bool comp(const vector < int > A, const vector < int > B) {
        return (A[1] < B[1]);
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() <= 0)
            return 0;
        sort(intervals.begin(), intervals.end(), comp);
        int result = 0;
        vector < int >  pre = intervals[0]; 
        for (int i = 1; i < int(intervals.size()); i ++){
            if (min(intervals[i][1], pre[1]) > max(intervals[i][0], pre[0]))
                result += 1;
            else
                pre = intervals[i];
        }
        return result;
    }
};
