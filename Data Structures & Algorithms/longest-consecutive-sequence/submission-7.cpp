class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set uset(nums.begin(), nums.end());

        int maxLen = 0;
        for(auto n : uset){
            if(uset.find(n+1) != uset.end()) continue;

            //we reach here only in case of root.
            int len = 0;
            int cn = n;
            while(true) {
                len++;
                maxLen = max(maxLen, len);
                cn--;

                if(uset.find(cn) == uset.end()) break;
            }
        }

        return maxLen;
    }
};
