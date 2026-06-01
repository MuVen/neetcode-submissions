class Solution {
    vector<int> arr;
public:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }

    int partition(int left, int right){
        int sIndex = left-1;
        int pivot = arr[right];

        for(int i = left; i < right; i++){
            if(arr[i] < pivot){
                sIndex++;
                swap(arr[sIndex], arr[i]);
            }
        }

        swap(arr[sIndex+1], arr[right]);
        return sIndex+1;
    }

    void qsort(int left, int right){
        if(left < right){
            int wall = partition(left, right);
            qsort(left, wall-1);
            qsort(wall+1, right);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        arr = move(nums);
        qsort(0, arr.size()-1);
        return arr;
    }
};