class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums.size(); i++){
            int v = target - nums[i];
            if(umap.find(v) != umap.end()){
                return {umap[v], i};
            }

            umap[nums[i]] = i;
        }
        return {};
    }
};
