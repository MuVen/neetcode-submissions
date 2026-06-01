class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int lastNumber = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != lastNumber){
                //do nothing
                nums[index++] = nums[i];
                lastNumber = nums[i];
            }
        }

        return index;
    }
};