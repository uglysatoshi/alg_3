#ifndef QUEUE
#define QUEUE

#include "stack.cpp"

template <class T>
class Queue
{   
    private:
        int Size;
        Node <T> *head;
        Node <T> *last;
    public:
        Queue();
        ~Queue();
        void show();
        bool isEmpty();
        void push(T data);
        void pop();
};

#endif