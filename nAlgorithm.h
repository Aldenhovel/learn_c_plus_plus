#ifndef MYSTL_NALGORITHM_H
#define MYSTL_NALGORITHM_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace stl{
    namespace Algorithm{
        class Sort{
        public:
            Sort();

            template <typename T> static void swap(T&, T&);
            static void bubbleSort(vector<int>&, bool);
        };
    }
}

#endif //MYSTL_NALGORITHM_H
