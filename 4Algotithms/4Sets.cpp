/*
Input:
6 
4 5 5 25 7 8
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        s.insert(x);
    }
    // O(n)
    auto it = lower_bound(s.begin(), s.end(), 5);
    cout<<(*it)<<endl;

    // log(n)
    auto it2 = s.lower_bound(rand());
    cout<<(*it2)<<endl;
}