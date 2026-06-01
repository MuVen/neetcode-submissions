class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> left(size, 1), right(size, 1);

        int lproduct = 1;
        for(int i = 0; i < size; i++){
            left[i] = lproduct * ((i > 0) ? nums[i-1] : 1);
            lproduct = left[i];
        }

        int rproduct = 1;
        for(int i = size-1; i >= 0; i--){
            right[i] = rproduct * ((i < size-1) ? nums[i+1] : 1);
            rproduct = right[i];
        }

        vector<int> res(size, 1);
        for(int i = 0; i < size; i++)
            res[i] = left[i] * right[i];

        return res;
    }
};
