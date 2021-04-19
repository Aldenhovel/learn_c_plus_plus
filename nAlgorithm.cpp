#include "../head/nAlgorithm.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace stl::Algorithm{
    Sort::Sort() {

    }

    template <typename T>
    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    void Sort::reverse(vector<int>& arr){
        int length = arr.size();
        int temp;
        for (int i=0; i<length/2; i++) swap(arr[i], arr[length-i-1]);
    }
    void Sort::reverse(vector<float>& arr){
        int length = arr.size();
        int temp;
        for (int i=0; i<length/2; i++) swap(arr[i], arr[length-i-1]);
    }
    void Sort::reverse(vector<double>& arr){
        int length = arr.size();
        int temp;
        for (int i=0; i<length/2; i++) swap(arr[i], arr[length-i-1]);
    }

    void Sort::bubbleSort(vector<int>& arr, bool ASC) {
        int length = arr.size();
        if (ASC){
            for (int i=length-1; i>0; i--){
                for (int j=0; j<i; j++){
                    if (arr[j+1] < arr[j]) swap(arr[j], arr[j+1]);
                }
            }
        }
        else {
            for (int i=length-1; i>0; i--){
               for (int j=0; j<i; j++){
                   if (arr[j+1] > arr[j]) swap(arr[j], arr[j+1]);
               }
            }
        }
        cout << "BubbleSort Done!" << endl;
    }

    void Sort::insertSort(vector<int>& arr, bool ASC) {
        int temp = 0;
        int i, j;
        for (i=1; i<arr.size(); i++){
            temp = arr[i];
            for (j=i-1; temp<arr[j] && j>=0; j--){
                arr[j+1] = arr[j];
            }
            arr[j+1] = temp;
        }
        if (!ASC) reverse(arr);
        cout << "InsertSort Done!" << endl;
    }

    int Sort::_quickSort_Partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        while (low < high){
            while (low < high && arr[high] >= pivot) --high;
            arr[low] = arr[high];
            while (low < high && arr[low] <= pivot) ++low;
            arr[high] = arr[low];
        }
        arr[low] = pivot;
        return low;
    }
    void Sort::_quickSort(vector<int>& arr, int low, int high) {
        if (low < high){
            int div_pos = _quickSort_Partition(arr, low, high);
            _quickSort(arr, low, div_pos-1);
            _quickSort(arr, div_pos+1, high);
        }
    }
    void Sort::quickSort(vector<int>& arr, bool ASC) {
        _quickSort(arr, 0, arr.size()-1);
        if (!ASC) reverse(arr);
        cout << "QuickSort Done!" << endl;
    }
}

