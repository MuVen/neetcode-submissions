class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxStorage = 0;
        int left = 0;
        int right = heights.size()-1;
        while(left < right){
            int minVal = min(heights[left], heights[right]);
            maxStorage = max(maxStorage, minVal*(right-left));
            if(heights[left] < heights[right]) left++;
            else right--;
        }
        return maxStorage;
    }
};
