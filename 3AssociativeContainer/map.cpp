#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    // m is key and " " is value
    m[1] = "Chandan";
    m[2] = "ERam";
    m[3] = "Shyam";
    
    m.insert({5, "Sunny"});

    for(auto i: m){
        cout<<i.first<<endl;
    }

    cout<<"Find: "<<m.count(5)<<endl;

    auto it= m.find(3);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}