class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        vector<int> left(nums.size(), 1);
        vector<int> right(nums.size(), 1);
        int leftProd = 1;
        for(int i = 0; i < nums.size(); i++){
            left[i] = leftProd;
            leftProd = leftProd * nums[i];
        }
        int rightProd = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            left[i] *= rightProd;
            rightProd = rightProd * nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            ans[i] = left[i]*right[i];
        }

        return left;
    }
};
