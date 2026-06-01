class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.length()-1;
        while(l < r){
            if(s[l] != s[r]){
                //s[l] can be removed or
                //s[r] can be removed;
                return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
            }

            l++;
            r--;
        }

        return true;
    }

    bool isPalindrome(string&s, int l, int r){
        while(l < r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};