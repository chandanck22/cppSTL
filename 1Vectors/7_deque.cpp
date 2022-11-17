#include<iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);

    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"INdex: "<<d.at(1)<<endl;
    cout<<"front: "<<d.front()<<endl;
    cout<<"front: "<<d.back()<<endl;

    cout<<"Empty or Not: "<<d.empty()<<endl;

    cout<<"Before Erase: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After Erase: "<<d.size()<<endl;
    for(int i: d){
        cout<<i<<" ";
    }
    return 0;
}