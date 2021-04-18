#ifndef MYSTL_NALGORITHM_H
#define MYSTL_NALGORITHM_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace stl{
    namespace Algorithm{

        template <typename T>
        void swap(T&, T&);



        class Sort{
        private:
        public:
            Sort();
            static void bubbleSort(vector<int>&, bool);
            static void reverse(vector<int>&);
            static void reverse(vector<float>&);
            static void reverse(vector<double>&);
            static void insertSort(vector<int>&, bool);
        };
    }
}

#endif //MYSTL_NALGORITHM_H
