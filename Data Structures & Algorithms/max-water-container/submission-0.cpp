class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxStorage = 0;

        for(int i = 0; i < heights.size(); i++){
            int leftBar = heights[i];
            for(int j = i+1; j < heights.size(); j++){
                int rightBar = heights[j];
                int minVal = min(leftBar, rightBar);
                int storage = j-i;
                maxStorage = max(maxStorage, storage*minVal);
            }
        }

        return maxStorage;
    }
};
