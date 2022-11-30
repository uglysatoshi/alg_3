#include "stack.h"
 
template <typename T>
Stack <T> :: Stack()
{
    Size = 0;
    head = nullptr;
}

template <typename T>
void Stack <T> :: push(T data)
{
    head = new Node <T>(data, head);
    Size++;
}

template <typename T>
void Stack <T> :: pop()
{
    Node <T> *temp = head;
    head = head -> pNext;
    delete temp;
    Size--;
}

template <typename T>
bool Stack <T> :: isEmpty()
{
    return head == NULL;
}

template <typename T>
void Stack <T> :: reverse()
{
    Stack <T> tStack;
    T item;
    while(!this -> isEmpty())
    {
        item = this -> head -> data;
        this->pop();
        tStack.push(item);
    }
    head = tStack.head;
    this -> Size = tStack.Size;
}   

template <typename T>
void Stack <T> :: show()
{
    Stack <T> tStack;
    T item;
    while(!this -> isEmpty())
    {
        item = this -> head -> data;
        this->pop();
        tStack.push(item);
    }
    while(!tStack.isEmpty())
    {
        item = tStack.head -> data;
        this -> push(item);
        tStack.pop();
    }
    tStack.head = this -> head;
    tStack.Size = this -> Size; 
    for (int i = 0; i < this -> Size; i++)
    {
        cout << tStack.head -> data << "\t";
        tStack.head = tStack.head ->pNext;
    }
    cout << endl;
}