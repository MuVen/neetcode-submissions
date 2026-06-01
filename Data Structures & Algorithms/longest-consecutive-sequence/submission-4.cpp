class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int maxSequence = 0;
        
        for(auto n : nums){

            // for every number check the previous backlink.
            int count = 0;
            int val = n;
            while(true){
                if(uset.find(val) != uset.end()){
                    count++;
                    val--;
                } else {
                    break;
                }
            }
            maxSequence = max(maxSequence, count);

        }

        return maxSequence;
    }
};
