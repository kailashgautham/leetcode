class Solution {
public:

    string encode(vector<string>& strs) {
        std::string answer{};
        for (std::string i : strs) {
            answer += std::to_string(i.size());
            answer += ';';
            answer += i;
        }
        return answer;
    }

    vector<string> decode(string s) {
        std::vector<string> ans;
        for (int i = 0; i < s.size(); ++i) {
            std::string len_str{};
            while (s[i] != ';') len_str += s[i++];
            int len = std::stoi(len_str);
            std::string word{};
            for (int j = 0; j < len; ++j) word += s[++i];
            ans.push_back(word);
        }
        return ans;
    }
};
