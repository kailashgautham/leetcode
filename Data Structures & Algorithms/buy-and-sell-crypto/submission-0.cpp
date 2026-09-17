class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0], ans = 0;
        for (int i : prices) {
            ans = max(ans, i - lowest);
            lowest = min(lowest, i);
        }
        return ans;
    }
};
