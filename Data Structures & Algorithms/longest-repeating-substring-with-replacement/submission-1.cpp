class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0, end = 0, max_cnt = 0, ans = 0;
        unordered_map<char, int> cnt;
        while (end < s.size()) {
            while (end < s.size()) {
                int swap_chars =  (end - start + 1) - max(max_cnt, cnt[s[end]] + 1);
                if (swap_chars > k) break;
                cnt[s[end]]++;
                max_cnt = max(max_cnt, cnt[s[end++]]);
            }
            ans = max(ans, end - start);
            while (start < end) {
                int swap_chars =  (end - start + 1) - max(max_cnt, cnt[s[start]] - 1);
                if (swap_chars <= k) break;
                cnt[s[start]]--;
                max_cnt = max(max_cnt, cnt[s[start++]]);
            }
        }
        return ans;
    }
};
