class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for(auto n : nums){
            if(count == 0){
                candidate = n;
                count++;
            }if(n == candidate){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};