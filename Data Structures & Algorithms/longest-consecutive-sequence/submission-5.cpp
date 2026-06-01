class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int maxSequence = 0;
        
        for(auto n : nums){

            if(uset.find(n-1) != uset.end())
                continue;

            // for every number check the previous backlink.
            int count = 0;
            int val = n;
            while(uset.find(val) != uset.end()){
                count++;
                val++;
            }
            maxSequence = max(maxSequence, count);
        }

        return maxSequence;
    }
};
