class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> m;
        for (char i : s) m[i]++;
        int c = m.size();
        for (char i : t) {
            m[i]--;
            if (m[i] == 0) c--;
            else if (m[i] == -1) c++;
        }
        return !c;
    }
};
