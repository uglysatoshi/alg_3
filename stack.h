#ifndef STACK
#define STACK

#include <iostream>
#include <string>

using namespace std;

template <class T>
class Node
{  
    public:
        Node <T> *pNext;
        Node <T> *pPrev;
        T data;
        Node(T data = T(), Node <T> *pNext = nullptr, Node <T> *pPrev = nullptr )
        {
            this -> data = data;
            this -> pNext = pNext;
            this -> pPrev = pPrev;
        }
};

template <class T>
class Stack
{
    private:
        int Size;
        Node <T> *head;
    public:
        Stack();
        void reverse();
        bool isEmpty();
        void push(T data);
        void pop();
        void show();
        T top();
        void reverse(Stack <T> mStack, Stack <T> tStack);
};

#endif 