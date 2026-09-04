class Solution {
public:

    string encode(vector<string>& strs) {
        std::string ans = "";
        for (std::string i : strs) {
            ans += to_string(i.size());
            ans += '!';
            ans += i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for (int i = 0; i < s.size(); ++i) {
            string tmp = "", len = "";
            while (s[i] != '!') len += s[i++];
            int l = stoi(len);
            for (int j = 0; j < l; ++j) tmp += s[i + j + 1];
            i += l;
            ans.push_back(tmp);
            tmp = "", len = "";
        }
        return ans;
    }
};
