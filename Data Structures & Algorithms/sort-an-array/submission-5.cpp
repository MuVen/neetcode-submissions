class Solution {
    vector<int> arr;
public:
    vector<int> sortArray(vector<int>& nums) {
        arr = std::move(nums);
        qsort(0,arr.size()-1);
        return arr;
    }
    void qsort(int left, int right){
        if(left < right){
            int p = partition(left, right);
            qsort(left, p-1);
            qsort(p+1, right);
        }
    }
    int partition(int left, int right){
        int pivot = arr[right];
        int sIndex = left;
        for(int i = left; i < right; i++){
            if(arr[i] < pivot){
                swap(arr[i], arr[sIndex]);
                sIndex++;
            }
        }

        swap(arr[right], arr[sIndex]);
        return sIndex;
    }
};