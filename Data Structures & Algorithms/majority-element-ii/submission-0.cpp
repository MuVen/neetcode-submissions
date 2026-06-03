class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0, cnt1 = 0, cnt2 = 0;
     
     // Pass 1: find candidates
     for (int num : nums) {
         if (num == c1) cnt1++;
         else if (num == c2) cnt2++;
         else if (cnt1 == 0) { c1 = num; cnt1 = 1; }
         else if (cnt2 == 0) { c2 = num; cnt2 = 1; }
         else { cnt1--; cnt2--; }
     }
     
     // Pass 2: verify
     cnt1 = cnt2 = 0;
     for (int num : nums) {
         if (num == c1) cnt1++;
         else if (num == c2) cnt2++;
     }
     
     vector<int> res;
     int threshold = nums.size() / 3;
     if (cnt1 > threshold) res.push_back(c1);
     if (cnt2 > threshold) res.push_back(c2);
     return res;
    }
};