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
        while(s[i]!='\0'){
            //construct length back
            int len = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                len = len*10 + s[i]-'0';
                i++;
            }

            //check the delimeter
            if(s[i] == '#'){
                i++;
            }

            //construct string back
            string temp;
            while(len--){
                 temp += s[i];
                 i++;
            }

            result.push_back(temp);
        }

        return result;
    }
};
