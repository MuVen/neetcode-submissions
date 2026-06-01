class Solution {
public:
    bool isAnagram(string s, string t) {
        char alpha[26] = {0};
        for(auto c : s){
            alpha[c-'a']++;
        }

        for(auto c : t){
            alpha[c-'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(alpha[i] < 0 || alpha[i] > 0)
               return false;
        }

        return true;
    }
};
