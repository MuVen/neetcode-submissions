class Solution {
    vector<int> arr;
public:
    inline void swap(int& a, int& b){
        int t = a;
        a = b;
        b = t;
    }

    inline int partition(int left, int right){
        int pivot = arr[right];
        int sIndex = left-1;

        for(int i = left; i < right; i++){
            if(arr[i] <= pivot){
                sIndex++;
                swap(arr[i], arr[sIndex]);
            }
        }

        swap(arr[sIndex+1], arr[right]);
        return sIndex+1;
    }

    void qsort(int left, int right){
        if(left < right){
            int wall = partition(left, right);
            qsort(wall+1, right);
            qsort(left, wall-1);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        arr = move(nums);
        qsort(0, arr.size()-1);
        return arr;
    }
};