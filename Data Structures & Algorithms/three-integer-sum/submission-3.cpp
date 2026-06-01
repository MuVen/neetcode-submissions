class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            int n1 = nums[i];
            if(i > 0 && n1 == nums[i-1]) continue;

            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int leftv = nums[left];
                int rightv = nums[right];
                int sum = n1 + leftv + rightv;

                if( sum == 0) {
                    ans.push_back({n1, leftv, rightv});
                    while(left < right && leftv == nums[left]) left++;
                    while(left < right && rightv == nums[right]) right--;
                } else if(sum < 0){
                    left++;
                }else {
                    right--;
                }
            }
        }

        return ans;
    }
};
