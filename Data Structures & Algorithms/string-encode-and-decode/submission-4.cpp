class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded{};
        for (const std::string& i : strs) {
            encoded += std::to_string(i.size()) + ";" + i;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        std::vector<std::string> decoded;
        for (int i = 0; i < s.size(); ++i) {
            std::string size{};
            while (std::isdigit(s[i])) {
                size += s[i++];
            }
            size_t size_num = stoi(size);
            decoded.push_back(s.substr(i + 1, size_num));
            i += size_num;
        }
        return decoded;
    }
};
