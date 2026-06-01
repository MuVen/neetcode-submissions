class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 1) return 1;

        sort(nums.begin(), nums.end());
        int maxSequence = 0, count = 0;
        for(int i = 1; i < nums.size(); i++){
            int count = 1;
            while((nums[i] == nums[i-1]+1 || nums[i] == nums[i-1]) && i < nums.size()){
                if(nums[i] == nums[i-1]+1)
                    count++;
                i++;
            }

            if(count != 1) i--;
            maxSequence = max(maxSequence, count);
        }

        return maxSequence;
    }
};
