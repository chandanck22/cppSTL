#include<iostream>
#include<queue>
using namespace std;

template <class T>
void Display(priority_queue<T> q)
{
    while (!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    priority_queue<int> q1;
    for(int i=1; i<10; ++i)
        q1.push(i);
    Display(q1);

    priority_queue<string> q2;
    q2.push("ab");
    q2.push("xy");
    q2.push("bd");
    q2.push("aa");
    q2.push("AA");
    Display(q2);
    // arrange in lexographical order

    return 0;
}