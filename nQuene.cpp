#include "../head/nQuene.h"
using namespace std;

namespace stl{

    template <typename T>
    nQuene<T>::nQuene() {
        this->q_size = DEFAULT_QUENE_SIZE;
        this->quene = new T[DEFAULT_QUENE_SIZE]{};
        this->front = 0;
        this->rear = 0;
    }

    template <typename T>
    nQuene<T>::nQuene(int size) {
        //由于需要最后一个单元作为判满辅助，所以size个元素实际上使用size+1个空间
        this->q_size = size + 1;
        this->quene = new T[q_size];
        this->front = 0;
        this->rear = 0;
    }

    template <typename T>
    void nQuene<T>::start(T& element) {
        if (!this->isEmpty()) {
            element = quene[front];
        }
        else {
            cout << "queue empty!" << endl;
        }
    }

    template <typename T>
    void nQuene<T>::back(T& element) {
        if (!this->isEmpty()) {
            element = quene[(rear - 1) % q_size];
        }
        else {
            cout << "queue empty!" << endl;
        }
    }

    template <typename T>
    void nQuene<T>::enquene(T element) {
        if (this->isFull()) {
            cout << "Quene full!" << endl;
        }
        else{
            quene[rear] = element;
            rear = (rear + 1) % q_size;
        }
    }

    template <typename T>
    void nQuene<T>::dequene(T& element) {
        if (!this->isEmpty()) {
            element = quene[front];
            front = (front + 1) % q_size;
        }
        else {
            cout << "quene empty!" << endl;
        }
    }

    template <typename T>
    void nQuene<T>::clear() {
        rear = front = quene;
    }

    template <typename T>
    void nQuene<T>::show() {
        if (front == rear) {
            cout << "quene empty!" << endl;
        }
        int p = front;
        while (p != rear){
            cout << p << ":" << *(quene + p) << " ";
            p = (p + 1) % q_size;
        }
    }

    template <typename T>
    bool nQuene<T>::isFull() {
        return (rear+1) % q_size == front;
    }

    template <typename T>
    bool nQuene<T>::isEmpty() {
        return rear == front;
    }

    template <typename T>
    int nQuene<T>::getSize() {
        return (rear - front) % q_size;
    }

    template <typename T>
    int nQuene<T>::getFullSize() {
        return q_size;
    }

    template <typename U>
    ostream& operator << (ostream& os, nQuene<U>& q){
        int i = q.front;
        int j = q.rear;
        for (; i != j;){
            os << q.Quene[i] << " ";
            i = (i + 1) % q.q_size;
        }
        return os;
    }
}
