class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // O(n) with division approach
        vector<int> left_prod(nums.size() + 1, 1);
        vector<int> right_prod(nums.size() + 1, 1);
        vector<int> ans(nums.size(), 0);
        for (int i = 1; i <= nums.size(); ++i) {
            left_prod[i] = left_prod[i - 1] * nums[i - 1];
        }
        for (int i = nums.size() - 1; i >= 0; --i) {
            right_prod[i] = right_prod[i + 1] * nums[i];
        }
        for (int i = 0; i < nums.size(); ++i) ans[i] = left_prod[i] * right_prod[i + 1];
        return ans;
    }
};
