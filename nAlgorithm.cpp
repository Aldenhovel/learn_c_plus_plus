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
    }
}
