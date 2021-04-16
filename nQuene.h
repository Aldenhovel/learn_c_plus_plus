#ifndef MYSTL_NQUENE_H
#define MYSTL_NQUENE_H

#include <iostream>
#include <vector>
#include <exception>
#define DEFAULT_QUENE_SIZE 20

namespace stl {
    template<typename T>
    class nQuene {
    private:
        int front{};
        int rear{};
        T *quene;
        int q_size{};
    public:
        nQuene();
        nQuene(int);
        void enquene(T);
        void dequene(T&);
        void start(T&);
        void back(T&);
        void clear();
        void show();
        bool isFull();
        bool isEmpty();
        int getSize();
        int getFullSize();

        template<typename U>
        friend std::ostream &operator<<(std::ostream &, nQuene<U> &);

    };

    template<typename U>
    std::ostream &operator<<(std::ostream &, nQuene<U> &);

}


#endif //MYSTL_NQUENE_H
