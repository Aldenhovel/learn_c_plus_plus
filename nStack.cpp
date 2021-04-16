#include <iostream>
#include "../head/nStack.h"

using namespace std;

namespace stl{
    template <typename T>
    nStack<T>::nStack() {
        this->stack = vector<T>();
    }

    template <typename T>
    int nStack<T>::getSize() {
        return this->stack.size();
    }

    template <typename T>
    void nStack<T>::clear() {
        this->stack.clear();
    }

    template <typename T>
    void nStack<T>::push(T element) {
        this->stack.push_back(element);
    }

    template <typename T>
    T nStack<T>::pop() {
        T res = this->stack.back();
        this->stack.pop_back();
        return res;
    }

    template <typename T>
    T nStack<T>::back() {
        return this->stack.back();
    }

    template <typename T>
    bool nStack<T>::isEmpty() {
        return this->stack.size() == 0;
    }

    template <typename T>
    void nStack<T>::show() {
        for (T item: this->stack) cout << item << endl;
    }

    template <typename U>
    ostream& operator << (ostream& os, nStack<U>& s){
        for (U item: s.stack) {
            os << item << " ";
        }
        return os;
    }

    template <typename U>
    nStack<U> operator + (nStack<U> s1, nStack<U> s2){
        for (U item: s2.stack){
            s1.push(item);
        }
        return s1;
    }
}

