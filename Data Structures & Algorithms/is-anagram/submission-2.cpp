class Solution {
public:
    bool isAnagram(string s, string t) {
        int sal[26] = {0};
        int tal[26] = {0};

        for(auto c : s)
            sal[c-'a']++;
        
        for(auto c: t)
            tal[c-'a']++;
        

        for(int i = 0; i < 26; i++)
            if(sal[i] != tal[i]) return false;
        

        return true;
    }
};
