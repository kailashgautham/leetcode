class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX, ans = 0;
        for (int i : prices) {
            lowest = min(lowest, i);
            ans = max(ans, i - lowest);
        }
        return ans;
    }
};
