class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end()); 
        int best = 0;

        for (int x : numSet) {
            if (numSet.find(x - 1) == numSet.end()) {
                int current = x;
                int count = 1;

                while (numSet.find(current + 1) != numSet.end()) {
                    current++;
                    count++;
                }
                best = max(best, count);
            }
        }
        return best;
    }
};
