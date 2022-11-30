#include "deque.cpp"
int main()
{
    Queue <int> q;
    Stack <int> s;
    Deque <int> d;

    for (int i = 0; i < 20; i++)
        q.push(rand()%100);
    cout << "Вывод очереди: " << endl;
    q.show();
    for (int i = 0; i < 5; i++)
        q.pop();
    cout << "Вывод очереди после 5 итераций pop(): " << endl;
    q.show();
    cout << endl;

    for (int i = 0; i < 20; i++)
        s.push(rand()%100);
    cout << "Вывод стека: " << endl;
    s.show();
    s.reverse();
    cout << "Вывод реверсированного стека: " << endl;
    s.show();
    for (int i = 0; i < 5; i++)
        s.pop();
    cout << "Вывод реверсированного стека после 5 итераций pop(): " << endl;
    s.show();
    cout << endl;

    for (int i = 0; i < 10; i++)
        d.push_back(rand()%100);
    cout << "Вывод дека после push_back(): " << endl;
    d.show();
    for (int i = 0; i < 10; i++)
        d.push_front(rand()%100);
    cout << "Вывод дека после push_front(): " << endl;
    d.show();
    for (int i = 0; i < 5; i++)
        d.pop_back();
    cout << "Вывод дека после 5 итераций pop_back(): " << endl;
    d.show();
    for (int i = 0; i < 5; i++)
        d.pop_front();
    cout << "Вывод дека после 5 итераций pop_front(): " << endl;
    d.show();

    return 0;
}