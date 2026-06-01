class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for(auto s : strs){
            string temp = to_string(s.length())+"#";
            temp += s;
            result += temp;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            //construct length back
            int len = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                len = len*10 + s[i]-'0';
                i++;
            }

            //skip the delimeter
            i++;

            //construct string back, move i by len times;
            result.push_back(s.substr(i, len));
            i = i+len;
        }

        return result;
    }
};
