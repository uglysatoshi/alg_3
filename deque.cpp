#include "deque.h"

template <typename T>
Deque <T> :: Deque()
{
    Size = 0;
    head = nullptr;
    last = nullptr;
}

template <typename T>
Deque <T> :: ~Deque()
{
    
}

template <typename T>
void Deque <T> :: push_front(T data)
{
    Node <T> *item = new Node(data);
    if (isEmpty())
    {
        head = item;
        last = item;
        Size ++;
        return;
    }
    else
    {
        head->pPrev = item;
        item->pNext = head;
        head = item;
    }
    Size++;
}

template <typename T>
void Deque <T> :: push_back(T data)
{
    Node <T> *item = new Node <T> (data); 
    if (isEmpty())
    {
        head = item;
        last = item;
        Size++;
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
bool Deque <T> :: isEmpty()
{
    return head == NULL;
}

template <typename T>
void Deque <T> :: pop_front()
{
    if(isEmpty())
        return;
    Node <T> *temp = head;
    head = head -> pNext;
    delete temp;
    Size --;
    return;
}

template <typename T>
void Deque <T> :: pop_back()
{  
    if(isEmpty())
        return;
    Node <T> *temp = last;
    last = last -> pPrev;
    last -> pNext = nullptr;
    delete temp;
    Size --;
    return; 
}

template <typename T>
void Deque <T> :: show()
{
    Deque <T> tDeque;
    T item;
    while(!this -> isEmpty())
    {
        item = this -> head -> data;
        this->pop_front();
        tDeque.push_front(item);
    }
    while(!tDeque.isEmpty())
    {
        item = tDeque.head -> data;
        this -> push_front(item);
        tDeque.pop_front();
    }
    tDeque.head = this -> head;
    tDeque.Size = this -> Size; 
    tDeque.last = this -> last;
    for (int i = 0; i < this -> Size; i++)
    {
        if (tDeque.head == NULL)
            continue;
        cout << tDeque.head -> data << "\t";
        tDeque.head = tDeque.head -> pNext;
    }
    cout << endl;
}
