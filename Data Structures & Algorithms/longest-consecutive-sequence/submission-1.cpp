class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m;
        int ans = 0;
        for (int i : nums) {
            m.insert(i);
        }
        for (int i : m) {
            if (m.contains(i - 1)) continue;
            int count = 0;
            for (int j = i; m.contains(j); ++j) count++;
            ans = max(ans, count);
        }
        return ans;
    }
};