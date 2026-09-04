class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<std::vector<int>> v(nums.size() + 1);
        std::unordered_map<int, int> um;

        for (int i : nums) {
            um[i]++;
        }

        for (const auto& [num, count] : um) {
            v[count].push_back(num);
        }

        std::vector<int> ans;

        for (int i = nums.size(); i > 0; --i) {
            for (int j : v[i]) {
                if (k == 0) break;
                ans.push_back(j);
                k--;
            }
        }

        return ans;
    }
};
