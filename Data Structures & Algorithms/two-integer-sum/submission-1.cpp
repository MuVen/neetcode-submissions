class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums.size(); i++){
            int val = target-nums[i];
            if(umap.find(val) != umap.end()){
                return {umap[val], i};
            }
            umap[nums[i]] = i;
        }

        return {0,0};
    }
};
