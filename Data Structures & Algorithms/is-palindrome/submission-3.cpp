class Solution {
public:
    inline bool isAlpha(char ch){
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.length()-1;
        while(i < j){
            while(!isAlpha(s[i])) i++;
            while(!isAlpha(s[j])) j--;

            if(i < j && tolower(s[i]) != tolower(s[j])) return false;

            i++;
            j--;
        }

        return true;
    }
};
