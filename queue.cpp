#include "queue.h"

template <typename T>
Queue <T> :: Queue()
{
    Size = 0;
    last = nullptr;
    head = nullptr;
}

template <typename T>
Queue <T> :: ~Queue()
{
}

template <typename T>
void Queue <T> :: push(T data)
{
    Node <T> *item = new Node <T> (data); 
    if (isEmpty())
    {
        head = item;
        last = item;
        Size ++;
        return;
    }
    else
    {
        last -> pNext = item;
        item -> pPrev = last;
        last = item;
    }
    Size ++;
}

template <typename T>
void Queue <T> :: pop()
{
    if(last == nullptr)
        return;
    Node <T> *temp = head;
    head = head -> pNext;
    delete temp;
    Size --;
}

template <typename T>
void Queue <T> :: show()
{
    Queue <T> tQueue;
    T item;
    while(!isEmpty())
    {
        item = this -> head -> data;
        this -> pop();
        tQueue.push(item);
    }
    this -> head = tQueue.head;
    this -> Size = tQueue.Size;
    for (int i = 0; i < this -> Size; i++)
    {
        cout << tQueue.head -> data << "\t";
        tQueue.head = tQueue.head ->pNext;
    }
    cout << endl;
}

template <typename T>
bool Queue <T> :: isEmpty()
{
    return head == NULL;
}