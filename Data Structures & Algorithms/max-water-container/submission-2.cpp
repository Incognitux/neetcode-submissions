class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        long long maxCapacity = 0;
        long long capacity = 0;
        int l = 0, r = len - 1;
        while (l < r) {
            capacity = min(heights[l], heights[r]) * (r - l);

            if (capacity > maxCapacity) 
                maxCapacity = capacity;

            if (heights[l] > heights[r]) {
                r -= 1;
            } else {
                l += 1;
            }
        }
        return maxCapacity;
    }
};
