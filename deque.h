#ifndef DEQUE
#define DEQUE

#include "queue.cpp"

template <class T>
class Deque
{
    private:
        int Size;
        Node <T> *last;
        Node <T> *head;
    public:
        Deque();
        ~Deque();
        void show();
        bool isEmpty();
        void push_front(T data);
        void push_back(T data);
        void pop_front();
        void pop_back();
};

#endif