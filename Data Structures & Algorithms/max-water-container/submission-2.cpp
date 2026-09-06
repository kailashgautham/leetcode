class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0, end = heights.size() - 1;
        int ans = 0;
        while (start < end) {
            ans = max(ans, (end - start) * min(heights[start], heights[end]));
            if (heights[start] == heights[end]) {
                end--, start++;
            }
            else if (heights[start] > heights[end]) --end;
            else ++start;
        }
        return ans;
    }
};