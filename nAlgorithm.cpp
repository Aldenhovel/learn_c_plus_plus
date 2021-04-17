#include "../head/nAlgorithm.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace stl::Algorithm{
    Sort::Sort() {

    }

    template <typename T>
    void Sort::swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    void Sort::bubbleSort(vector<int>& arr, bool ASC=true) {
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
}
