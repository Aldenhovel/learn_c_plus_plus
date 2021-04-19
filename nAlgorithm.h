#ifndef MYSTL_NALGORITHM_H
#define MYSTL_NALGORITHM_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

namespace stl{
    namespace Algorithm{

        template<typename T>
        void swap(T&, T&);

        class Sort{
        private:
            static int _quickSort_Partition(vector<int>&, int, int);
            static void _quickSort(vector<int>&, int, int);
        public:
            Sort();
            static void reverse(vector<int>&);
            static void reverse(vector<float>&);
            static void reverse(vector<double>&);
            static void bubbleSort(vector<int>&, bool);
            static void insertSort(vector<int>&, bool);
            static void quickSort(vector<int>&, bool);
        };
    }
}

#endif //MYSTL_NALGORITHM_H
