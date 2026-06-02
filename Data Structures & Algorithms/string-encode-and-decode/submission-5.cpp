class Solution {
public:

    string encode(vector<string>& strs) {
        string enc = "";
        for(auto s : strs){
            enc += to_string(s.size())+"#"+s;
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> res;
        for(int i = 0; s[i] != '\0';){
            int hpos = s.find('#', i);
            int len = stoi(s.substr(i, hpos - i));
            res.push_back(s.substr(hpos+1, len));
            i = hpos + 1 + len;
        }
        return res;
    }
};
