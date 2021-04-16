#ifndef MYSTL_NSTACK_H
#define MYSTL_NSTACK_H

#include <vector>
#include <ostream>

namespace stl{
    template <typename T>
    class nStack{
    private:
        std::vector<T> stack;
    public:
        nStack();
        ~nStack();
        int getSize();
        void clear();
        void push(T);
        T pop();
        T back();
        bool isEmpty();
        void show();
        template <typename U> friend std::ostream& operator << (std::ostream&, nStack<U>&);
        template <typename U> friend nStack<U> operator + (nStack<U>, nStack<U>);
    };

    template <typename U>
    std::ostream& operator << (std::ostream&, nStack<U>&);

    template <typename U>
    nStack<U> operator + (nStack<U>, nStack<U>);

}

#endif //MYSTL_NSTACK_H
