class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set uset(nums.begin(), nums.end());

        int maxLen = 0;
        for(auto n : nums){
            if(uset.find(n+1) != uset.end()) continue;

            //we reach here only in case of root.
            int len = 0;
            while(true) {
                len++;
                maxLen = max(maxLen, len);
                n--;

                if(uset.find(n) == uset.end()) break;
            }
        }

        return maxLen;
    }
};
