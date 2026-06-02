class Solution {
    vector<int> arr;
public:
    vector<int> sortArray(vector<int>& nums) {
        arr = std::move(nums);
        qsort(0, arr.size()-1);
        return arr;
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

    void qsort(int left, int right){
        if(left < right){
            int pivot = partition(left, right);
            qsort(left, pivot-1);
            qsort(pivot+1, right);
        }
    }
};