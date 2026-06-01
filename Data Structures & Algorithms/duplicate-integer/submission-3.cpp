class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mset;
        for(auto n : nums){
            if(mset.find(n) != mset.end())
                return true;
            mset.insert(n);
        }
        return false;
    }
};