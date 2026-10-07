class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (const auto& s : strs) {
            encoded += to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        size_t i = 0;

        while (i < s.length()) {
            size_t j = s.find("#", i);

            int length = stoi(s.substr(i, j - i));

            size_t start = j + 1;
            result.push_back(s.substr(start, length));

            i = start + length;
        }

        return result;
    }
};
