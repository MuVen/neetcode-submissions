class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());
        int left = 0, right = numbers.size()-1;
        while(left < right){
            int v1 = numbers[left];
            int v2 = numbers[right];
            if(v1 + v2 == target) {
                return {left+1, right+1};
            }
            else if(v1 + v2 < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {0,0};
    }
};
