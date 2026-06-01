class Solution {
public:

    string encode(vector<string>& strs) {
        string decodedString;

        for(auto s : strs){
            int size = s.length();
            decodedString += to_string(size) + "#";
            decodedString += s;
        }

        return decodedString;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int size = s.length();

        for(int i = 0; i < size; ){

            int ssize = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                ssize = ssize*10 + s[i]-'0';
                i++;
            }

            i++;//skip #
            
            auto str = s.substr(i, ssize);
            ans.push_back(str);
            i = i + ssize;
        }

        return ans;
    }
};
