class Solution {
public:
    bool isPalindrome(string s) {

        string t = s;

        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !std::isalnum(c);
        })
        , s.end());

        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        std::reverse(t.begin(), t.end());

        t.erase(std::remove_if(t.begin(), t.end(), [](unsigned char c) {
            return !std::isalnum(c);
        })
        , t.end());

        std::transform(t.begin(), t.end(), t.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        return s == t;
    }
};
