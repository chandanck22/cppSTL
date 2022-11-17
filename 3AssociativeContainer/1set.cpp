#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);
    // 4 will be printed only once
    for(auto i : s){
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);  // delete second element
    for(auto i : s){
        cout<<i<<" ";
    }

    cout<<"Count: "<<s.count(5)<<endl;

    // if elements exist then it return iterator
    set<int>::iterator itr = s.find(5);
    cout<<"Value at itr is: "<<*it<<endl;

    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    return 0;
}