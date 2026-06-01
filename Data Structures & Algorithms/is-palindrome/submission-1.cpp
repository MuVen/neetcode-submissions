class Solution {
public:
    inline bool isAlpha(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0'  && ch <= '9'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        int left = 0, right = s.length()-1;
        int len = s.length();
        while(left <= right){

            while(left < len && !isAlpha(s[left])) left++;
            while(right >= 0 && !isAlpha(s[right])) right--;

            if(left > right) return true;

            if(tolower(s[left]) == tolower(s[right])){
                left++;
                right--;
            }else
                return false;
        }

        return true;
    }
};
