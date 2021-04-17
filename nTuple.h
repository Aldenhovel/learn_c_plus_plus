#ifndef MYSTL_NTUPLE_H
#define MYSTL_NTUPLE_H

#include <vector>
#include <iostream>

namespace stl{

    template <typename K,typename V>
    class nTuple{
    public:
        K key;
        V value;
    public:
        nTuple(K, V);
        nTuple<V, K> swapKV();
        void show();
        template <typename K0, typename V0> friend std::ostream& operator << (std::ostream&, nTuple<K0, V0>&);
    };

    template <typename K, typename V>
    std::ostream& operator << (std::ostream&, nTuple<K, V>&);

}

#endif //MYSTL_NTUPLE_H
