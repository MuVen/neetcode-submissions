class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums.size(); i++){
            int n = target - nums[i];
            if(umap.find(n) != umap.end()){
                return {umap[n], i};
            }

            umap[nums[i]] = i;
        }
        return {0,0};
    }
};
