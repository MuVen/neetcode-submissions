class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums.size()*2, 0);
        int casize = nums.size();
        for(int i = 0; i < nums.size(); i++){
            result[i] = result[i+casize] = nums[i];
        }
        return result;
    }
};