class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string f = strs[0];
        int i, j;
        for(i = 0; f[i] != '\0'; i++){
            char ch = f[i];

            for(j = 1; j < strs.size(); j++){
                char ah = strs[j][i];
                if(ah != ch) break;
            }

            if(j < strs.size()) break;
        }

        return f.substr(0, i);
    }
};