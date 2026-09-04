#include <ranges>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    std::unordered_map<std::string, vector<std::string>> m;
    for (std::string i : strs)
    {
        std::string key = i;
        std::sort(key.begin(), key.end());
        m[key].push_back(i);
    }
    std::vector<std::vector<std::string>>           
        ans(std::views::values(m).begin(), std::views::values(m).end());
    return ans;
    }
};
