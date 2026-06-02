class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
                count++;
            }else if(nums[i] == majority){
                count++;
            }else {
                if(count > 0) count--;
                else {
                    majority = nums[i];
                    count = 1;
                }
            }
        }
        return majority;
    }
};