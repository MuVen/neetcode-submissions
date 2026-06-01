class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0;
        for(i = 0; i < word1.length(); i++){
            ans += word1[i];
            if(i < word2.length())
                ans += word2[i];
        }

        if(i < word2.length())
            ans += word2.substr(i, word2.length() - i);

        return ans;
    }
};