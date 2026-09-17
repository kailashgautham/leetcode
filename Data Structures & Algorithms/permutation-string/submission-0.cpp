class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int start = 0, end = 0;
        unordered_map<char, int> m;
        for (char i : s1) m[i]++;
        while (end < s2.size()) {
            while (m[s2[end]] > 0) {
                m[s2[end++]]--;
            }
            if (end - start == s1.size()) return true;
            if (!m.contains(s2[end])) start = ++end;
            else {
                while (s2[start] != s2[end]) m[s2[start++]]++;
                m[s2[start++]]++;
            }
        }
        return false;
    }
};
