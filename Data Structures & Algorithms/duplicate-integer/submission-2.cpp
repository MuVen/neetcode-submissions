class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mset(nums.begin(), nums.end());
        return mset.size() != nums.size();
    }
};