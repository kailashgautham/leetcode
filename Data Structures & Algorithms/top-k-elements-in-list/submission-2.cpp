class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<std::unordered_set<int>> v(1e4 + 1);
        std::unordered_map<int, int> um;
        for (int i : nums) {
            v[um[i]].erase(i);
            um[i]++;
            v[um[i]].insert(i);
        }
        std::vector<int> ans;
        for (int i = 1e4; i > 0; --i) {
            for (int j : v[i]) {
                if (k == 0) break;
                ans.push_back(j);
                k--;
            }
        }
        return ans;
    }
};
