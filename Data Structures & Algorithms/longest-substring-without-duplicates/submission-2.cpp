class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, ans = 0;
        unordered_set<char> c;
        while (end < s.size()) {
            while (end < s.size() && !c.contains(s[end])) {
                c.insert(s[end++]);
            }
            ans = max(ans, end - start);
            do {
                c.erase(s[start]);
            } while (s[start++] != s[end]);
        }
        return ans;
    }
};
