#include "../head/nTuple.h"

#include <vector>
#include <iostream>

using namespace std;
namespace stl{

    template <typename K, typename V>
    nTuple<K, V>::nTuple(K key, V value) {
        this->key = key;
        this->value = value;
    }

    template <typename K, typename V>
    nTuple<V, K> nTuple<K, V>::swapKV() {
        return nTuple<V, K>(value, key);
    }

    template <typename K, typename V>
    void nTuple<K, V>::show() {
        cout << "key: " << key << "\t" << "value: " << value << endl;
    }

    template <typename K, typename V>
    ostream& operator << (ostream& os, nTuple<K, V>& t){
        os << "key: " << t.key << "\t" << "value: " << t.value << endl;
        return os;
    }

}