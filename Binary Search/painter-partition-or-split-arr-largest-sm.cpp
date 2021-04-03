class Solution {
public:
    bool check(int upper, vector < int > nums, int m){
        int splits = 0, now = 0;
        for (int i = 0; i < nums.size(); i ++){
            now += nums[i];
            if (now > upper){
                // ok &= (now - nums[i] <= upper);
                now = nums[i];
                splits += 1;
            }
        }
        return (splits <= (m - 1)) ;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int lo = *max_element(nums.begin(), nums.end()), hi = accumulate(nums.begin(), nums.end(), 0);
        if (nums.size() < m)
            return -1;
        while (lo < hi){
            int mid = lo + (hi - lo) / 2;
            if (check(mid, nums, m))
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }
};
