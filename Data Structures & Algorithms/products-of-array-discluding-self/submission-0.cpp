class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // O(n) with division approach
        int product = 1;
        bool zero = false;
        for (int i : nums) {
            if (i == 0 && !zero) zero = true;
            else if (i == 0) product = 0;
            else product *= i;
        }
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            if (zero && nums[i] != 0) ans[i] = 0;
            else if (zero && nums[i] == 0) ans[i] = product;
            else ans[i] = product / nums[i];
        }
        return ans;
    }
};
